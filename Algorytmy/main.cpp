#include "MainWindows/Header/Algorytmy.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Algorytmy w;
	w.show();
	return a.exec();
}
