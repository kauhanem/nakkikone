#ifndef NAKKIWORKER_H
#define NAKKIWORKER_H

#include <QString>

class Nakkiworker
{
public:
    Nakkiworker();

    Nakkiworker(QString name);

    ~Nakkiworker();

    QString giveName();

private:
    QString name_;
};

#endif // NAKKIWORKER_H
