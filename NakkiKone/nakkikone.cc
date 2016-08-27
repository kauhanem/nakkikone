#include "nakkikone.hh"
#include "ui_nakkikone.h"

NakkiKone::NakkiKone(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NakkiKone)
{
    ui->setupUi(this);
}

NakkiKone::~NakkiKone()
{
    delete ui;
}
