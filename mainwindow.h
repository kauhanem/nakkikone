#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "event.h"

#include <QMainWindow>
#include <QVector>

#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_createEvent_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Event*> eventList_;
};

#endif // MAINWINDOW_H
