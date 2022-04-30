#ifndef COMMANDLINKBUTTON_H
#define COMMANDLINKBUTTON_H

#include <QTWidgets/QCommandLinkButton>

class CommandLinkButton : public QWidget
{
    Q_OBJECT

public:
    CommandLinkButton(QWidget *parent = 0);
    ~CommandLinkButton();

private:
    QCommandLinkButton *cmmBtn;

private slots:
    void clickFunc();

};

#endif // COMMANDLINKBUTTON_H
