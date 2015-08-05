#include "troopscolour.h"
#include <QPainter>
#include <QColor>

troopsColour::troopsColour(QWidget *parent) : QWidget(parent)
{
    /*QPaintEvent *event;
    paintEvent(event);
    this->repaint(); */
    //update();
}

void troopsColour::paintEvent(QPaintEvent *event) {
    QColor col = Qt::yellow;
    QString str = "Yellow";
    QPainter painter(this);
    //testFont = new QFont("Ubuntu", 50);
    QFont testFont("Ubuntu", 50);
    painter.setFont(testFont);
    painter.setPen(col);
    painter.drawText(10, 100, str);
}
