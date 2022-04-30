#include "commandlinkbutton.h"

CommandLinkButton::CommandLinkButton(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(300,200);

    cmmBtn = new QCommandLinkButton("Version", "Version Project", this);
    cmmBtn->setFlat(true);

    connect(cmmBtn,SIGNAL(clicked()),SLOT(clickFunc()));
}

CommandLinkButton::~CommandLinkButton()
{

}

void CommandLinkButton::clickFunc()
{
    qDebug("QCommandLinkButton Click.");
}
