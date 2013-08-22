/********************************************************************************
** Form generated from reading UI file 'simple_uml_editor.ui'
**
** Created: Thu Nov 29 16:23:03 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLE_UML_EDITOR_H
#define UI_SIMPLE_UML_EDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_simple_uml_editorClass
{
public:
    QAction *actionFile;
    QAction *Change_object_name;
    QAction *Group;
    QAction *Ungroup;
    QWidget *centralWidget;
    QPushButton *select_Button;
    QPushButton *ass_line_Button;
    QPushButton *gen_line_Button;
    QPushButton *com_line_Button;
    QPushButton *class_Button;
    QPushButton *usecase_Button;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *simple_uml_editorClass)
    {
        if (simple_uml_editorClass->objectName().isEmpty())
            simple_uml_editorClass->setObjectName(QString::fromUtf8("simple_uml_editorClass"));
        simple_uml_editorClass->resize(884, 674);
        actionFile = new QAction(simple_uml_editorClass);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        Change_object_name = new QAction(simple_uml_editorClass);
        Change_object_name->setObjectName(QString::fromUtf8("Change_object_name"));
        Group = new QAction(simple_uml_editorClass);
        Group->setObjectName(QString::fromUtf8("Group"));
        Ungroup = new QAction(simple_uml_editorClass);
        Ungroup->setObjectName(QString::fromUtf8("Ungroup"));
        centralWidget = new QWidget(simple_uml_editorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        select_Button = new QPushButton(centralWidget);
        select_Button->setObjectName(QString::fromUtf8("select_Button"));
        select_Button->setGeometry(QRect(20, 10, 40, 40));
        select_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("mouse.png"), QSize(), QIcon::Normal, QIcon::Off);
        select_Button->setIcon(icon);
        select_Button->setIconSize(QSize(50, 50));
        select_Button->setCheckable(true);
        select_Button->setChecked(false);
        select_Button->setAutoRepeat(false);
        select_Button->setAutoExclusive(false);
        ass_line_Button = new QPushButton(centralWidget);
        ass_line_Button->setObjectName(QString::fromUtf8("ass_line_Button"));
        ass_line_Button->setGeometry(QRect(80, 10, 40, 40));
        ass_line_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("line.png"), QSize(), QIcon::Normal, QIcon::Off);
        ass_line_Button->setIcon(icon1);
        ass_line_Button->setIconSize(QSize(35, 35));
        ass_line_Button->setCheckable(true);
        ass_line_Button->setAutoExclusive(false);
        gen_line_Button = new QPushButton(centralWidget);
        gen_line_Button->setObjectName(QString::fromUtf8("gen_line_Button"));
        gen_line_Button->setGeometry(QRect(140, 10, 40, 40));
        gen_line_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("generalization_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        gen_line_Button->setIcon(icon2);
        gen_line_Button->setIconSize(QSize(35, 35));
        gen_line_Button->setCheckable(true);
        gen_line_Button->setAutoExclusive(false);
        com_line_Button = new QPushButton(centralWidget);
        com_line_Button->setObjectName(QString::fromUtf8("com_line_Button"));
        com_line_Button->setGeometry(QRect(200, 10, 40, 40));
        com_line_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("composition_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        com_line_Button->setIcon(icon3);
        com_line_Button->setIconSize(QSize(35, 35));
        com_line_Button->setCheckable(true);
        com_line_Button->setAutoExclusive(false);
        class_Button = new QPushButton(centralWidget);
        class_Button->setObjectName(QString::fromUtf8("class_Button"));
        class_Button->setGeometry(QRect(260, 10, 40, 40));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        class_Button->setPalette(palette);
        class_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("class.png"), QSize(), QIcon::Normal, QIcon::Off);
        class_Button->setIcon(icon4);
        class_Button->setIconSize(QSize(35, 35));
        class_Button->setCheckable(true);
        class_Button->setAutoExclusive(false);
        usecase_Button = new QPushButton(centralWidget);
        usecase_Button->setObjectName(QString::fromUtf8("usecase_Button"));
        usecase_Button->setGeometry(QRect(320, 10, 40, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        usecase_Button->setPalette(palette1);
        usecase_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("use_case.png"), QSize(), QIcon::Normal, QIcon::Off);
        usecase_Button->setIcon(icon5);
        usecase_Button->setIconSize(QSize(35, 35));
        usecase_Button->setCheckable(true);
        usecase_Button->setChecked(false);
        usecase_Button->setAutoExclusive(false);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 90, 811, 501));
        simple_uml_editorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(simple_uml_editorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 884, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        simple_uml_editorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(simple_uml_editorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        simple_uml_editorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(simple_uml_editorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        simple_uml_editorClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(Change_object_name);
        menuEdit->addAction(Group);
        menuEdit->addAction(Ungroup);

        retranslateUi(simple_uml_editorClass);
        QObject::connect(select_Button, SIGNAL(clicked()), simple_uml_editorClass, SLOT(select_button_clicked()));
        QObject::connect(ass_line_Button, SIGNAL(clicked()), simple_uml_editorClass, SLOT(ass_line_button_clicked()));
        QObject::connect(gen_line_Button, SIGNAL(clicked()), simple_uml_editorClass, SLOT(gen_line_button_clicked()));
        QObject::connect(com_line_Button, SIGNAL(clicked()), simple_uml_editorClass, SLOT(com_line_button_clicked()));
        QObject::connect(class_Button, SIGNAL(clicked()), simple_uml_editorClass, SLOT(class_button_clicked()));
        QObject::connect(usecase_Button, SIGNAL(clicked()), simple_uml_editorClass, SLOT(usecase_button_clicked()));

        QMetaObject::connectSlotsByName(simple_uml_editorClass);
    } // setupUi

    void retranslateUi(QMainWindow *simple_uml_editorClass)
    {
        simple_uml_editorClass->setWindowTitle(QApplication::translate("simple_uml_editorClass", "simple_uml_editor", 0, QApplication::UnicodeUTF8));
        actionFile->setText(QApplication::translate("simple_uml_editorClass", "file", 0, QApplication::UnicodeUTF8));
        Change_object_name->setText(QApplication::translate("simple_uml_editorClass", "change object name", 0, QApplication::UnicodeUTF8));
        Group->setText(QApplication::translate("simple_uml_editorClass", "group", 0, QApplication::UnicodeUTF8));
        Ungroup->setText(QApplication::translate("simple_uml_editorClass", "ungroup", 0, QApplication::UnicodeUTF8));
        select_Button->setText(QString());
        ass_line_Button->setText(QString());
        gen_line_Button->setText(QString());
        com_line_Button->setText(QString());
        class_Button->setText(QString());
        usecase_Button->setText(QString());
        menuFile->setTitle(QApplication::translate("simple_uml_editorClass", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("simple_uml_editorClass", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class simple_uml_editorClass: public Ui_simple_uml_editorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLE_UML_EDITOR_H
