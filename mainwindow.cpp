#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createEvent_clicked()
{
    QString name = "Kiltojen avajaissauna"; //eventNameLineEdit.text();
    int year = 2016;
    QTime start(0,0,0);// self.eventStartTimeEdit.time();
    QTime end(12,0,0); // self.eventEndTimeEdit.time();

    Event* event = new Event(name,year,start,end);
    eventList_.push_back(event);

    // std::cout << "uusi event: " << eventList_[eventList_.size()-1]->giveName() << std::endl;
}
