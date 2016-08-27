#ifndef NAKKIKONE_HH
#define NAKKIKONE_HH

#include <QMainWindow>

namespace Ui {
class NakkiKone;
}

class NakkiKone : public QMainWindow
{
    Q_OBJECT

public:
    explicit NakkiKone(QWidget *parent = 0);
    ~NakkiKone();

private:
    Ui::NakkiKone *ui;
};

#endif // NAKKIKONE_HH
