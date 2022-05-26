#include "dialog.h"
#include <QFileDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QFileDialog::Options options;
    options = QFileDialog::DontResolveSymlinks | QFileDialog::ShowDirsOnly;
    options |= QFileDialog::DontUseNativeDialog;

    QString directory = QFileDialog::getExistingDirectory(this, "파일 다이얼로그", "C://", options);
}

Dialog::~Dialog()
{

}
