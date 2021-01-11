
#include <QtWidgets>

#include "aboutdialog.hxx"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) : QDialog(parent), ui(new Ui::AboutDialog) {
	ui->setupUi(this);
	connect(ui->closeButton, &QAbstractButton::clicked, this, &QDialog::close);
}

AboutDialog::~AboutDialog() {
	delete ui;
}
