#include "simple_uml_editor.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	simple_uml_editor w;
	w.show();
	return a.exec();
}
