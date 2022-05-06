#include "widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    edit = new QLineEdit("", this);
    edit->setGeometry(120, 20, 100, 30);
}

Widget::~Widget()
{

}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    QString img_full_name = QString(":resources/browser.png");
    QImage image(img_full_name);
    painter.drawPixmap(0, 0, QPixmap::fromImage(image.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));

    painter.end();
}

void Widget::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "[Resize Event call]";
    qDebug("width : %d, height : %d", this->width(), this->height());
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "[Mouse Press] x, y :" << event->x() << ", " <<event->y();
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    qDebug("[Mouse Release] x, y: %d, %d", event->x(), event->y());
}

void Widget::mouseDoubleClickedEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    qDebug("[Mouse Double Click] x, y: %d, %d", event->x(), event->y());
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    qDebug("[Mouse Move] x, y: %d, %d", event->x(), event->y());
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    Q_UNUSED(event);
    qDebug("Key Press Event.");

    switch (event->key()) {
    case Qt::Key_A :
        if(event->modifiers())
            qDebug("A");
        else
            qDebug("a");

        qDebug("%x", event->key());
    break;
    default : break;

    }
}

void Widget::keyReleaseEvent(QKeyEvent *event)
{
    Q_UNUSED(event);
    qDebug("Key Release Event.");
}

void Widget::focusInEvent(QKeyEvent *event)
{
    Q_UNUSED(event);
    qDebug("FocusInEvent Event.");
}

void Widget::focusOutEvent(QKeyEvent *event)
{
    Q_UNUSED(event);
    qDebug("FocusOutEvent Event.");
}
