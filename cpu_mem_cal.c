
#include <stdio.h>
#include <string.h>
#include <utmp.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>
#include <errno.h>
#include "cpu_mem_cal.h"  
# include <sys/sysinfo.h>
/*
 * 本文件用于计算cpu的使用率和内存的使用率，2023-04-18
 * */
//****************************************************************************************************************
//cpu和内存使用率计算，这一块代码的计算是独立的，跟其他模块关系不大

//typedef struct jiffy_counts_t {
//	/* Linux 2.4.x has only first four */
//	unsigned long long usr, nic, sys, idle;
//	unsigned long long iowait, irq, softirq, steal;
//	unsigned long long total;
//	unsigned long long busy;
//} jiffy_counts_t;



//struct globals {
//	unsigned long total_kb, available_kb;
//};


//#define LINE_BUF_SIZE 256

int read_cpu_jiffy(jiffy_counts_t *p_jif)
{
	const char fmt[] = "%s %llu %llu %llu %llu %llu %llu %llu %llu";
	char line_buf[LINE_BUF_SIZE];
	int ret,count = 0;
	FILE* fp;
	char buf_name[8];

	if(!p_jif)
		return -1;

	fp = fopen("/proc/stat","r");   //只读的方式打开
	if(NULL == fp)
		return -1;

	
	for(;;)	
	{
		if (!fgets(line_buf, LINE_BUF_SIZE, fp) || line_buf[0] != 'c' /* not "cpu" */)
			break;//return 0;


		ret = sscanf(line_buf, fmt,
                buf_name,&p_jif[count].usr, &p_jif[count].nic, &p_jif[count].sys, &p_jif[count].idle,
                &p_jif[count].iowait, &p_jif[count].irq, &p_jif[count].softirq,
                &p_jif[count].steal);
		if (ret >= 4) {
            p_jif[count].total = p_jif[count].usr + p_jif[count].nic + p_jif[count].sys + p_jif[count].idle
                + p_jif[count].iowait + p_jif[count].irq + p_jif[count].softirq + p_jif[count].steal;
			/* procps 2.x does not count iowait as busy time */
            p_jif[count].busy = p_jif[count].total - p_jif[count].idle - p_jif[count].iowait;
			count ++;
		}
	}	
	fclose(fp);

	return count;
}




int parse_meminfo(struct globals *g)
{
	char buf[60]; /* actual lines we expect are ~30 chars or less */
	FILE *fp;
	int seen_cached_and_available_and_reclaimable;

	if(!g)
		return -1;

	fp = fopen("/proc/meminfo","r");   //只读的方式打开
	if(NULL == fp)
		return -1;

	

	g->total_kb = g->available_kb  = 0;
	seen_cached_and_available_and_reclaimable = 2;
	while (fgets(buf, sizeof(buf), fp)) {
		if (sscanf(buf, "MemTotal: %lu %*s\n", &g->total_kb) == 1)
			if (--seen_cached_and_available_and_reclaimable == 0)
				break;
		if (sscanf(buf, "MemAvailable: %lu %*s\n", &g->available_kb) == 1)
			if (--seen_cached_and_available_and_reclaimable == 0)
				break;		
	}
	/* Have to close because of NOFORK */
	fclose(fp);

	return seen_cached_and_available_and_reclaimable == 0;
}




/*
	龙芯麒麟读取cpu的温度
	 //2021-12-03 增加

	 通过参数
 */
int parse_cputemp(int *temp)
{
	char buf[60]; /* actual lines we expect are ~30 chars or less */
	FILE *fp;
	
	if(!temp)
		return -1;

	fp = fopen("/sys/class/thermal/thermal_zone0/temp","r");   //只读的方式打开
	if(NULL == fp)
		return -1;
	
	if(fgets(buf, sizeof(buf), fp))
	{
		*temp = atoi(buf) / 1000;
	//	printf("parse_cputemp = %d\n",*temp);
	}
	/* Have to close because of NOFORK */
	fclose(fp);

	return 1;
}




int parse_gputemp(int *temp)
{
	char buf[128]; /* actual lines we expect are ~30 chars or less */	
	FILE *fp;
	
	if(!temp)
		return -1;

	fp = fopen("/sys/class/thermal/thermal_zone1/temp","r");   //只读的方式打开
	if(NULL == fp)
		return -1;
	
	if(fgets(buf, sizeof(buf), fp))
	{
		*temp = atoi(buf) / 1000;
	//	printf("parse_cputemp = %d\n",*temp);
	}
	/* Have to close because of NOFORK */
	fclose(fp);

	return 1;
}



///sys/bus/cpu/devices/cpu0/cpufreq/cpuinfo_cur_freq
int get_cpu_freq(int cpu_n,int *freq)
{
	char file_name[128] = {0} ;
	char buf[128]; /* actual lines we expect are ~30 chars or less */	
	FILE *fp;
	
	if(!freq)
		return -1;

	if(cpu_n<0 || cpu_n > 5)
		return -1;

	sprintf(file_name,"/sys/bus/cpu/devices/cpu%d/cpufreq/cpuinfo_cur_freq",cpu_n);

	fp = fopen(file_name,"r");   //只读的方式打开
	if(NULL == fp)
		return -1;
	
	if(fgets(buf, sizeof(buf), fp))
	{
		*freq = atoi(buf) / 1000;
	//	printf("parse_cputemp = %d\n",*temp);
	}
	/* Have to close because of NOFORK */
	fclose(fp);

	return 1;
}




/*
 * 计算cpu和内存的使用率，正常是1秒定时调用一次。
 * 
 * 参数 data，传出参数，用于把数据记录到全局结构体变量中。
 * 
 * */
void cpu_mem_calc(void*data)
{
	jiffy_counts_t jif;
	struct globals mem;
//	int temp;
	int ret;

	static long pre_busy = 0;
	static long pre_total = 0;

	if(data == NULL)
		return;


	printf("cpu_mem_calccpu_mem_calccpu_mem_calccpu_mem_calccpu_mem_calc\n");
	ret = read_cpu_jiffy(&jif);
	if(ret >= 4)
	{	
		// if(jif.total != pre_total)  //相等的时候会导致进程问题
		// 	gpdata->cpuUsages = 	(jif.busy-pre_busy)*100/(jif.total-pre_total);	
		printf("cpu = %lld%%\n",(jif.busy-pre_busy)*100/(jif.total-pre_total));
		pre_busy = jif.busy;
		pre_total = jif.total;
	}
	if(parse_meminfo(&mem) == 1)
	{
    //	gpdata->memUsages = (mem.total_kb-mem.available_kb)*100/(mem.total_kb);
		printf("mem = %lu%%\n",(mem.total_kb-mem.available_kb)*100/(mem.total_kb));
	}
//	if(parse_cputemp(&temp) == 1)	   //2021-12-03 增加
//	{
//		gpdata->cpu_temp = temp;
//	}
//	if(0 == parse_gputemp(&temp))   //2021-12-13
//	{
//		gpdata->gpu_temp = temp;
//	}
}





int get_uptime_sysinfo(char* start_time, char* run_time)
{
    unsigned updays, uphours, upminutes;
    unsigned opts;
    struct sysinfo info;
    struct tm *current_time;
    time_t current_secs;
    int count = 0;

    opts = (start_time != NULL);

    time(&current_secs);
    sysinfo(&info);

    if (opts) // -s
    {
        current_secs -= info.uptime;

        current_time = localtime(&current_secs);

//    if (opts) { // -s
        sprintf(start_time,"%04u-%02u-%02u %02u:%02u:%02u\n",
            current_time->tm_year + 1900, current_time->tm_mon + 1, current_time->tm_mday,
            current_time->tm_hour, current_time->tm_min, current_time->tm_sec
        );
        /* The above way of calculating boot time is wobbly,
         * info.uptime has only 1 second precision, which makes
         * "uptime -s" wander +- one second.
         * /proc/uptime may be better, it has 0.01s precision.
         */
        //return EXIT_SUCCESS;
    }

//    printf(" %02u:%02u:%02u up ",
//            current_time->tm_hour, current_time->tm_min, current_time->tm_sec
//    );
    updays = (unsigned) info.uptime / (unsigned)(60*60*24);
    if (updays != 0)
        count = sprintf(run_time,"%u day%s, ", updays, (updays != 1) ? "s" : "");
    upminutes = (unsigned) info.uptime / (unsigned)60;
    uphours = (upminutes / (unsigned)60) % (unsigned)24;
    upminutes %= 60;
    if (uphours != 0)
        count = sprintf(run_time+count,"%2u:%02u", uphours, upminutes);
    else
        count = sprintf(run_time+count,"%u min", upminutes);

#if ENABLE_FEATURE_UPTIME_UTMP_SUPPORT
    {
        struct utmpx *ut;
        unsigned users = 0;
        while ((ut = getutxent()) != NULL) {
            if ((ut->ut_type == USER_PROCESS) && (ut->ut_user[0] != '\0'))
                users++;
        }
        printf(",  %u users", users);
    }
#endif

//    printf(",  load average: %u.%02u, %u.%02u, %u.%02u\n",
//            LOAD_INT(info.loads[0]), LOAD_FRAC(info.loads[0]),
//            LOAD_INT(info.loads[1]), LOAD_FRAC(info.loads[1]),
//            LOAD_INT(info.loads[2]), LOAD_FRAC(info.loads[2]));

    return 0;//EXIT_SUCCESS
}




///sys/class/hwmon/hwmon0/temp1_input
///
///

//****************************************************************************************************************

