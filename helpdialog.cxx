

#include <QtWidgets>

#include "helpdialog.hxx"
#include "ui_helpdialog.h"

HelpDialog::HelpDialog(QWidget *parent) : QDialog(parent), ui(new Ui::HelpDialog) {
	ui->setupUi(this);
	connect(ui->closeButton, &QAbstractButton::clicked, this, &QDialog::close);
}

HelpDialog::~HelpDialog() {
	delete ui;
}
