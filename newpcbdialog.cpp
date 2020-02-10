#include "newpcbdialog.h"
#include "ui_newpcbdialog.h"

NewPCBDialog::NewPCBDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewPCBDialog)
{
    ui->setupUi(this);
}

NewPCBDialog::~NewPCBDialog()
{
    delete ui;
}

QString NewPCBDialog::getPCBName()
{
    // Return the PCB name field as a Qstring
    return ui->pcbNameLineEdit->text();
}
