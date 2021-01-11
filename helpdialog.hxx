/*********************************Project Report********************************

Nano Compress

Name : Pinaki Das and Kushal Poddar
Subject : Object Oriented Programming
Supervised B
y :  Dr Mukesh Kumar Giluka,  Assistant Professor, CSE
Computer Science and Engineering
School of Engineering
Jawaharlal Nehru University
New Delhi 110067


Topic : Nano Compress  : A tool for compression using C++

Please find the link to the report here
https://docs.google.com/presentation/d/1tR-VtD5DP9qoRi20wdlXQgLjodeaWK1l1Uw-vz4shCw/edit?usp=sharing
*/
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
