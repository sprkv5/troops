#include "troops.h"
#include "ui_troops.h"
#include "troopscolour.h"

#define STR_EQUAL 0

troops::troops(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::troops)
{
    ui->setupUi(this);

    QWidget *page_1 = new QWidget;
    QWidget *page_2 = new QWidget;
    QWidget *page_3 = new QWidget;

    QStackedWidget *stackedWidget = new QStackedWidget;
    setCentralWidget(ui->stackedWidget);
    stackedWidget->addWidget(page_1);
    stackedWidget->addWidget(page_2);
    stackedWidget->addWidget(page_3);

    troopsColour *obj = new troopsColour(page_3);
    obj->show();

    //ui->page_1->set;

    connect(ui->nextButton_1, SIGNAL(clicked()), this, SLOT(on_nextButton_1_clicked()));
    connect(ui->nextButton_2, SIGNAL(clicked()), this, SLOT(on_nextButton_2_clicked()));
    connect(ui->homeButton_1, SIGNAL(clicked()), this, SLOT(on_homeButton_1_clicked()));
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(on_actionQuit_triggered()));
    connect(ui->actionOptions, SIGNAL(triggered()), this, SLOT(on_actionOptions_triggered()));
    connect(ui->paintButton, SIGNAL(clicked()), this, SLOT(on_paintButton_clicked()));
}

troops::~troops()
{
    delete ui;
}

void troops::on_actionQuit_triggered()
{
    qApp->quit();
}

void troops::on_nextButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void troops::on_homeButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void troops::on_nextButton_2_clicked()
{
    QString matchType = ui->typeComboBox->currentText();
    if(QString::compare(matchType, "Colour Match") == STR_EQUAL) {
        ui->stackedWidget->setCurrentIndex(2);
    }  else {
        ui->stackedWidget->setCurrentIndex(3);
    }
}

void troops::on_paintButton_clicked(){
    //troopsColour ob;
    //this->obj.show();
    //new troopsColour();
}

void troops::on_actionOptions_triggered()
{
    //optionsDialog options;
}
