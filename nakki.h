#ifndef NAKKI_H
#define NAKKI_H

#include "time.h"

#include <QTime>
#include <QString>

class Nakki
{
public:
    Nakki();
    Nakki(QString name, QTime start, QTime end);

    ~Nakki();

private:
    QString name_;

    QTime start_;
    QTime end_;
};

#endif // NAKKI_H
