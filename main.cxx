//This is  mianwindow 

#include "mainwindow.hxx"
#include <QApplication>

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	MainWindow mainwindow;
	mainwindow.show();

	return app.exec();
}
