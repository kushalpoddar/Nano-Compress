

#ifndef ABOUTDIALOG_HXX
#define ABOUTDIALOG_HXX

#include <QDialog>
#include <QtWidgets>

namespace Ui {
	class AboutDialog;
}

class AboutDialog : public QDialog {
	Q_OBJECT

public:
	explicit AboutDialog(QWidget *parent = 0);
	~AboutDialog();

private:
	Ui::AboutDialog *ui;
};

#endif // ABOUTDIALOG_HXX
