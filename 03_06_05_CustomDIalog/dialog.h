#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    QLabel *lbl;
    QLineEdit *edit;
    QPushButton *okbtn;
    QPushButton *cancelbtn;

private slots:
    void slot_okbtn();
    void slot_cancelbtn();
};

#endif // DIALOG_H
