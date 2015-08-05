#ifndef TROOPS_H
#define TROOPS_H

#include <QMainWindow>

namespace Ui {
class troops;
}

class troops : public QMainWindow
{
    Q_OBJECT

public:
    explicit troops(QWidget *parent = 0);
    ~troops();

private slots:
    void on_actionQuit_triggered();

    void on_nextButton_1_clicked();

    void on_nextButton_2_clicked();

    void on_homeButton_1_clicked();

    void on_paintButton_clicked();

    void on_actionOptions_triggered();

private:
    Ui::troops *ui;
};

#endif // TROOPS_H
