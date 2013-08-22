#include "simple_uml_editor.h"
#include "enum.h"

simple_uml_editor::simple_uml_editor(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	initialize();
}

simple_uml_editor::~simple_uml_editor()
{
	
}

void simple_uml_editor::initialize()
{
	QObject::connect(ui.Change_object_name, SIGNAL(triggered()),this, SLOT(change_object_name_clicked()));
	QObject::connect(ui.Group, SIGNAL(triggered()),this, SLOT(group_clicked()));
	QObject::connect(ui.Ungroup, SIGNAL(triggered()),this, SLOT(ungroup_clicked()));
	ui.select_Button->setChecked(true);
	graphicscene.setSceneRect(0,0,1000,600);
	graphicscene.set_mode(SELECT);
	ui.graphicsView->setScene(&graphicscene);
}


void simple_uml_editor::select_button_clicked()
{
	ui.select_Button->setChecked(true);
	ui.ass_line_Button->setChecked(false);
	ui.gen_line_Button->setChecked(false);
	ui.com_line_Button->setChecked(false);
	ui.class_Button->setChecked(false);
	ui.usecase_Button->setChecked(false);
	graphicscene.set_mode(SELECT);
}

void simple_uml_editor::ass_line_button_clicked()
{
	ui.select_Button->setChecked(false);
	ui.ass_line_Button->setChecked(true);
	ui.gen_line_Button->setChecked(false);
	ui.com_line_Button->setChecked(false);
	ui.class_Button->setChecked(false);
	ui.usecase_Button->setChecked(false);
	graphicscene.set_mode(LINK);
	graphicscene.set_link(ASS);
}

void simple_uml_editor::gen_line_button_clicked()
{
	ui.select_Button->setChecked(false);
	ui.ass_line_Button->setChecked(false);
	ui.gen_line_Button->setChecked(true);
	ui.com_line_Button->setChecked(false);
	ui.class_Button->setChecked(false);
	ui.usecase_Button->setChecked(false);
	graphicscene.set_mode(LINK);
	graphicscene.set_link(GEN);
}

void simple_uml_editor::com_line_button_clicked()
{
	ui.select_Button->setChecked(false);
	ui.ass_line_Button->setChecked(false);
	ui.gen_line_Button->setChecked(false);
	ui.com_line_Button->setChecked(true);
	ui.class_Button->setChecked(false);
	ui.usecase_Button->setChecked(false);
	graphicscene.set_mode(LINK);
	graphicscene.set_link(COM);
}

void simple_uml_editor::class_button_clicked()
{
	ui.select_Button->setChecked(false);
	ui.ass_line_Button->setChecked(false);
	ui.gen_line_Button->setChecked(false);
	ui.com_line_Button->setChecked(false);
	ui.class_Button->setChecked(true);
	ui.usecase_Button->setChecked(false);
	graphicscene.set_mode(ITEM);
	graphicscene.set_item(CLASS);
}

void simple_uml_editor::usecase_button_clicked()
{
	ui.select_Button->setChecked(false);
	ui.ass_line_Button->setChecked(false);
	ui.gen_line_Button->setChecked(false);
	ui.com_line_Button->setChecked(false);
	ui.class_Button->setChecked(false);
	ui.usecase_Button->setChecked(true);
	graphicscene.set_mode(ITEM);
	graphicscene.set_item(USE_CASE);
}

void simple_uml_editor::change_object_name_clicked()
{
	graphicscene.change_object_name();
}

void simple_uml_editor::group_clicked()
{
	graphicscene.group_select_items();
}

void simple_uml_editor::ungroup_clicked()
{
	graphicscene.ungroup_select_items();
}
