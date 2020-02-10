#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasehandler.h"
#include "newpcbdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = new DatabaseHandler();
}

MainWindow::~MainWindow()
{
    delete db;
    delete ui;
}

void MainWindow::onMenuNewPCBClick()
{
    NewPCBDialog *dialog = new NewPCBDialog();
    Qt::WindowFlags flags(Qt::WindowTitleHint);
    dialog->setWindowFlags(flags);
    if (dialog->exec() == QDialog::Accepted)
    {
        // Okay button was pressed on the dialog so get the data from it
        QString pcbName = dialog->getPCBName();
        // Make a new table in the database if it doesn't exist already

    }
}
