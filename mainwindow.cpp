#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    testifilu.open(":/files/nakkiworkers.csv");
    testifilu << "a;b;" << std::endl;
    testifilu.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
