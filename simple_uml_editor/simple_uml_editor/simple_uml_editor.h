#ifndef SIMPLE_UML_EDITOR_H
#define SIMPLE_UML_EDITOR_H

#include <QtGui/QMainWindow>
#include "ui_simple_uml_editor.h"
#include "UMLgraphicscene.h"

class simple_uml_editor : public QMainWindow
{
	Q_OBJECT

public:
	simple_uml_editor(QWidget *parent = 0, Qt::WFlags flags = 0);
	~simple_uml_editor();
	void initialize();
private slots:
	void select_button_clicked();
	void ass_line_button_clicked();
	void gen_line_button_clicked();
	void com_line_button_clicked();
	void class_button_clicked();
	void usecase_button_clicked();
	void change_object_name_clicked();
	void group_clicked();
	void ungroup_clicked();
private:
	Ui::simple_uml_editorClass ui;
	UMLgraphicscene graphicscene;
};

#endif // SIMPLE_UML_EDITOR_H
