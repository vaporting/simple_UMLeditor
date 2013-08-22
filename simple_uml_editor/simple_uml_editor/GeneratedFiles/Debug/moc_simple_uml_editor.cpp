/****************************************************************************
** Meta object code from reading C++ file 'simple_uml_editor.h'
**
** Created: Thu Nov 29 17:33:41 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../simple_uml_editor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simple_uml_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_simple_uml_editor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      43,   18,   18,   18, 0x08,
      69,   18,   18,   18, 0x08,
      95,   18,   18,   18, 0x08,
     121,   18,   18,   18, 0x08,
     144,   18,   18,   18, 0x08,
     169,   18,   18,   18, 0x08,
     198,   18,   18,   18, 0x08,
     214,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_simple_uml_editor[] = {
    "simple_uml_editor\0\0select_button_clicked()\0"
    "ass_line_button_clicked()\0"
    "gen_line_button_clicked()\0"
    "com_line_button_clicked()\0"
    "class_button_clicked()\0usecase_button_clicked()\0"
    "change_object_name_clicked()\0"
    "group_clicked()\0ungroup_clicked()\0"
};

void simple_uml_editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        simple_uml_editor *_t = static_cast<simple_uml_editor *>(_o);
        switch (_id) {
        case 0: _t->select_button_clicked(); break;
        case 1: _t->ass_line_button_clicked(); break;
        case 2: _t->gen_line_button_clicked(); break;
        case 3: _t->com_line_button_clicked(); break;
        case 4: _t->class_button_clicked(); break;
        case 5: _t->usecase_button_clicked(); break;
        case 6: _t->change_object_name_clicked(); break;
        case 7: _t->group_clicked(); break;
        case 8: _t->ungroup_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData simple_uml_editor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject simple_uml_editor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_simple_uml_editor,
      qt_meta_data_simple_uml_editor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &simple_uml_editor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *simple_uml_editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *simple_uml_editor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_simple_uml_editor))
        return static_cast<void*>(const_cast< simple_uml_editor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int simple_uml_editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
