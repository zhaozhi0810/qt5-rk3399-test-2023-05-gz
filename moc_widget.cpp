/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[67];
    char stringdata0[1807];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 38), // "on_pushButton_start_color_tes..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 28), // "timer_key_leds_slot_Function"
QT_MOC_LITERAL(4, 76, 28), // "timer_net_stat_slot_Function"
QT_MOC_LITERAL(5, 105, 32), // "timer_cpu_mem_info_slot_Function"
QT_MOC_LITERAL(6, 138, 18), // "ifconfig_info_show"
QT_MOC_LITERAL(7, 157, 3), // "ret"
QT_MOC_LITERAL(8, 161, 16), // "iicspi_info_show"
QT_MOC_LITERAL(9, 178, 14), // "uart_info_show"
QT_MOC_LITERAL(10, 193, 15), // "ping1_info_show"
QT_MOC_LITERAL(11, 209, 15), // "ping2_info_show"
QT_MOC_LITERAL(12, 225, 15), // "ping3_info_show"
QT_MOC_LITERAL(13, 241, 19), // "ping1_finished_slot"
QT_MOC_LITERAL(14, 261, 19), // "ping2_finished_slot"
QT_MOC_LITERAL(15, 281, 19), // "ping3_finished_slot"
QT_MOC_LITERAL(16, 301, 18), // "play_finished_slot"
QT_MOC_LITERAL(17, 320, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(18, 342, 37), // "on_pushButton_start_lcd_touch..."
QT_MOC_LITERAL(19, 380, 26), // "on_pushButton_Play_clicked"
QT_MOC_LITERAL(20, 407, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(21, 431, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(22, 455, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(23, 479, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(24, 503, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(25, 527, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(26, 547, 7), // "checked"
QT_MOC_LITERAL(27, 555, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(28, 579, 30), // "on_pushButton_ifconfig_clicked"
QT_MOC_LITERAL(29, 610, 27), // "on_radioButton_loop_toggled"
QT_MOC_LITERAL(30, 638, 32), // "on_radioButton_playmusic_toggled"
QT_MOC_LITERAL(31, 671, 30), // "on_radioButton_playrec_toggled"
QT_MOC_LITERAL(32, 702, 26), // "on_radioButton_rec_toggled"
QT_MOC_LITERAL(33, 729, 44), // "on_horizontalScrollBar_SpeakV..."
QT_MOC_LITERAL(34, 774, 5), // "value"
QT_MOC_LITERAL(35, 780, 43), // "on_horizontalScrollBar_HandVo..."
QT_MOC_LITERAL(36, 824, 44), // "on_horizontalScrollBar_EarphV..."
QT_MOC_LITERAL(37, 869, 43), // "on_verticalScrollBar_lightpwm..."
QT_MOC_LITERAL(38, 913, 30), // "on_pushButton_FlowLEDS_clicked"
QT_MOC_LITERAL(39, 944, 41), // "on_horizontalScrollBar_light_..."
QT_MOC_LITERAL(40, 986, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(41, 1010, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(42, 1034, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(43, 1059, 31), // "on_radioButton_micpanel_clicked"
QT_MOC_LITERAL(44, 1091, 30), // "on_radioButton_michand_clicked"
QT_MOC_LITERAL(45, 1122, 31), // "on_radioButton_SpeakVol_toggled"
QT_MOC_LITERAL(46, 1154, 30), // "on_radioButton_HandVol_toggled"
QT_MOC_LITERAL(47, 1185, 37), // "on_pushButton_start_cpustress..."
QT_MOC_LITERAL(48, 1223, 30), // "on_checkBox_cpu_stress_toggled"
QT_MOC_LITERAL(49, 1254, 29), // "on_checkBox_gpio_flow_toggled"
QT_MOC_LITERAL(50, 1284, 29), // "on_checkBox_keyLights_toggled"
QT_MOC_LITERAL(51, 1314, 38), // "on_comboBox_memory_currentInd..."
QT_MOC_LITERAL(52, 1353, 5), // "index"
QT_MOC_LITERAL(53, 1359, 35), // "on_comboBox_cpu_currentIndexC..."
QT_MOC_LITERAL(54, 1395, 25), // "on_checkBox_cpu_n_toggled"
QT_MOC_LITERAL(55, 1421, 25), // "on_checkBox_mem_n_toggled"
QT_MOC_LITERAL(56, 1447, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(57, 1479, 31), // "on_pushButton_disk_info_clicked"
QT_MOC_LITERAL(58, 1511, 31), // "on_radioButton_Uarttest_toggled"
QT_MOC_LITERAL(59, 1543, 35), // "on_pushButton_clear_display_c..."
QT_MOC_LITERAL(60, 1579, 34), // "on_pushButton_lcd_mcu_info_cl..."
QT_MOC_LITERAL(61, 1614, 34), // "on_pushButton_key_mcu_info_cl..."
QT_MOC_LITERAL(62, 1649, 33), // "on_pushButton_drv_so_info_cli..."
QT_MOC_LITERAL(63, 1683, 32), // "on_pushButton_jc_ko_info_clicked"
QT_MOC_LITERAL(64, 1716, 31), // "on_pushButton_Last_page_clicked"
QT_MOC_LITERAL(65, 1748, 31), // "on_pushButton_Next_page_clicked"
QT_MOC_LITERAL(66, 1780, 26) // "on_pushButton_Help_clicked"

    },
    "Widget\0on_pushButton_start_color_test_clicked\0"
    "\0timer_key_leds_slot_Function\0"
    "timer_net_stat_slot_Function\0"
    "timer_cpu_mem_info_slot_Function\0"
    "ifconfig_info_show\0ret\0iicspi_info_show\0"
    "uart_info_show\0ping1_info_show\0"
    "ping2_info_show\0ping3_info_show\0"
    "ping1_finished_slot\0ping2_finished_slot\0"
    "ping3_finished_slot\0play_finished_slot\0"
    "on_pushButton_clicked\0"
    "on_pushButton_start_lcd_touch_clicked\0"
    "on_pushButton_Play_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0on_checkBox_toggled\0"
    "checked\0on_pushButton_3_clicked\0"
    "on_pushButton_ifconfig_clicked\0"
    "on_radioButton_loop_toggled\0"
    "on_radioButton_playmusic_toggled\0"
    "on_radioButton_playrec_toggled\0"
    "on_radioButton_rec_toggled\0"
    "on_horizontalScrollBar_SpeakVol_valueChanged\0"
    "value\0on_horizontalScrollBar_HandVol_valueChanged\0"
    "on_horizontalScrollBar_EarphVol_valueChanged\0"
    "on_verticalScrollBar_lightpwm2_valueChanged\0"
    "on_pushButton_FlowLEDS_clicked\0"
    "on_horizontalScrollBar_light_valueChanged\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_radioButton_micpanel_clicked\0"
    "on_radioButton_michand_clicked\0"
    "on_radioButton_SpeakVol_toggled\0"
    "on_radioButton_HandVol_toggled\0"
    "on_pushButton_start_cpustress_clicked\0"
    "on_checkBox_cpu_stress_toggled\0"
    "on_checkBox_gpio_flow_toggled\0"
    "on_checkBox_keyLights_toggled\0"
    "on_comboBox_memory_currentIndexChanged\0"
    "index\0on_comboBox_cpu_currentIndexChanged\0"
    "on_checkBox_cpu_n_toggled\0"
    "on_checkBox_mem_n_toggled\0"
    "on_comboBox_currentIndexChanged\0"
    "on_pushButton_disk_info_clicked\0"
    "on_radioButton_Uarttest_toggled\0"
    "on_pushButton_clear_display_clicked\0"
    "on_pushButton_lcd_mcu_info_clicked\0"
    "on_pushButton_key_mcu_info_clicked\0"
    "on_pushButton_drv_so_info_clicked\0"
    "on_pushButton_jc_ko_info_clicked\0"
    "on_pushButton_Last_page_clicked\0"
    "on_pushButton_Next_page_clicked\0"
    "on_pushButton_Help_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  319,    2, 0x08 /* Private */,
       3,    0,  320,    2, 0x08 /* Private */,
       4,    0,  321,    2, 0x08 /* Private */,
       5,    0,  322,    2, 0x08 /* Private */,
       6,    1,  323,    2, 0x08 /* Private */,
       8,    1,  326,    2, 0x08 /* Private */,
       9,    0,  329,    2, 0x08 /* Private */,
      10,    0,  330,    2, 0x08 /* Private */,
      11,    0,  331,    2, 0x08 /* Private */,
      12,    0,  332,    2, 0x08 /* Private */,
      13,    1,  333,    2, 0x08 /* Private */,
      14,    1,  336,    2, 0x08 /* Private */,
      15,    1,  339,    2, 0x08 /* Private */,
      16,    1,  342,    2, 0x08 /* Private */,
      17,    0,  345,    2, 0x08 /* Private */,
      18,    0,  346,    2, 0x08 /* Private */,
      19,    0,  347,    2, 0x08 /* Private */,
      20,    0,  348,    2, 0x08 /* Private */,
      21,    0,  349,    2, 0x08 /* Private */,
      22,    0,  350,    2, 0x08 /* Private */,
      23,    0,  351,    2, 0x08 /* Private */,
      24,    0,  352,    2, 0x08 /* Private */,
      25,    1,  353,    2, 0x08 /* Private */,
      27,    0,  356,    2, 0x08 /* Private */,
      28,    0,  357,    2, 0x08 /* Private */,
      29,    1,  358,    2, 0x08 /* Private */,
      30,    1,  361,    2, 0x08 /* Private */,
      31,    1,  364,    2, 0x08 /* Private */,
      32,    1,  367,    2, 0x08 /* Private */,
      33,    1,  370,    2, 0x08 /* Private */,
      35,    1,  373,    2, 0x08 /* Private */,
      36,    1,  376,    2, 0x08 /* Private */,
      37,    1,  379,    2, 0x08 /* Private */,
      38,    0,  382,    2, 0x08 /* Private */,
      39,    1,  383,    2, 0x08 /* Private */,
      40,    0,  386,    2, 0x08 /* Private */,
      41,    0,  387,    2, 0x08 /* Private */,
      42,    0,  388,    2, 0x08 /* Private */,
      43,    0,  389,    2, 0x08 /* Private */,
      44,    0,  390,    2, 0x08 /* Private */,
      45,    1,  391,    2, 0x08 /* Private */,
      46,    1,  394,    2, 0x08 /* Private */,
      47,    0,  397,    2, 0x08 /* Private */,
      48,    1,  398,    2, 0x08 /* Private */,
      49,    1,  401,    2, 0x08 /* Private */,
      50,    1,  404,    2, 0x08 /* Private */,
      51,    1,  407,    2, 0x08 /* Private */,
      53,    1,  410,    2, 0x08 /* Private */,
      54,    1,  413,    2, 0x08 /* Private */,
      55,    1,  416,    2, 0x08 /* Private */,
      56,    1,  419,    2, 0x08 /* Private */,
      57,    0,  422,    2, 0x08 /* Private */,
      58,    1,  423,    2, 0x08 /* Private */,
      59,    0,  426,    2, 0x08 /* Private */,
      60,    0,  427,    2, 0x08 /* Private */,
      61,    0,  428,    2, 0x08 /* Private */,
      62,    0,  429,    2, 0x08 /* Private */,
      63,    0,  430,    2, 0x08 /* Private */,
      64,    0,  431,    2, 0x08 /* Private */,
      65,    0,  432,    2, 0x08 /* Private */,
      66,    0,  433,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_start_color_test_clicked(); break;
        case 1: _t->timer_key_leds_slot_Function(); break;
        case 2: _t->timer_net_stat_slot_Function(); break;
        case 3: _t->timer_cpu_mem_info_slot_Function(); break;
        case 4: _t->ifconfig_info_show((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->iicspi_info_show((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->uart_info_show(); break;
        case 7: _t->ping1_info_show(); break;
        case 8: _t->ping2_info_show(); break;
        case 9: _t->ping3_info_show(); break;
        case 10: _t->ping1_finished_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->ping2_finished_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->ping3_finished_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->play_finished_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_pushButton_clicked(); break;
        case 15: _t->on_pushButton_start_lcd_touch_clicked(); break;
        case 16: _t->on_pushButton_Play_clicked(); break;
        case 17: _t->on_pushButton_6_clicked(); break;
        case 18: _t->on_pushButton_7_clicked(); break;
        case 19: _t->on_pushButton_2_clicked(); break;
        case 20: _t->on_pushButton_4_clicked(); break;
        case 21: _t->on_pushButton_5_clicked(); break;
        case 22: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_pushButton_3_clicked(); break;
        case 24: _t->on_pushButton_ifconfig_clicked(); break;
        case 25: _t->on_radioButton_loop_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_radioButton_playmusic_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_radioButton_playrec_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_radioButton_rec_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->on_horizontalScrollBar_SpeakVol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_horizontalScrollBar_HandVol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_horizontalScrollBar_EarphVol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_verticalScrollBar_lightpwm2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_pushButton_FlowLEDS_clicked(); break;
        case 34: _t->on_horizontalScrollBar_light_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_pushButton_8_clicked(); break;
        case 36: _t->on_pushButton_9_clicked(); break;
        case 37: _t->on_pushButton_10_clicked(); break;
        case 38: _t->on_radioButton_micpanel_clicked(); break;
        case 39: _t->on_radioButton_michand_clicked(); break;
        case 40: _t->on_radioButton_SpeakVol_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_radioButton_HandVol_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_pushButton_start_cpustress_clicked(); break;
        case 43: _t->on_checkBox_cpu_stress_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_checkBox_gpio_flow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_checkBox_keyLights_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_comboBox_memory_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_comboBox_cpu_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_checkBox_cpu_n_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->on_checkBox_mem_n_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->on_pushButton_disk_info_clicked(); break;
        case 52: _t->on_radioButton_Uarttest_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->on_pushButton_clear_display_clicked(); break;
        case 54: _t->on_pushButton_lcd_mcu_info_clicked(); break;
        case 55: _t->on_pushButton_key_mcu_info_clicked(); break;
        case 56: _t->on_pushButton_drv_so_info_clicked(); break;
        case 57: _t->on_pushButton_jc_ko_info_clicked(); break;
        case 58: _t->on_pushButton_Last_page_clicked(); break;
        case 59: _t->on_pushButton_Next_page_clicked(); break;
        case 60: _t->on_pushButton_Help_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
