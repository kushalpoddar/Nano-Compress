

#ifndef HELPDIALOG_HXX
#define HELPDIALOG_HXX

#include <QDialog>
#include <QtWidgets>

namespace Ui {
	class HelpDialog;
}

class HelpDialog : public QDialog {
	Q_OBJECT

public:
	explicit HelpDialog(QWidget *parent = 0);
	~HelpDialog();

private:
	Ui::HelpDialog *ui;
};

#endif // HELPDIALOG_HXX
