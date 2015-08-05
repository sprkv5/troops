#ifndef TROOPSCOLOUR_H
#define TROOPSCOLOUR_H

#include <QWidget>

class troopsColour : public QWidget
{
    Q_OBJECT
public:
    explicit troopsColour(QWidget *parent = 0);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);


};

#endif // TROOPSCOLOUR_H
