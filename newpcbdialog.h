#ifndef NEWPCBDIALOG_H
#define NEWPCBDIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class NewPCBDialog;
}

class NewPCBDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewPCBDialog(QWidget *parent = nullptr);
    ~NewPCBDialog();
    QString getPCBName();

private:
    Ui::NewPCBDialog *ui;

private slots:
};

#endif // NEWPCBDIALOG_H
