#ifndef NAKKIWORKER_HH
#define NAKKIWORKER_HH

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

#endif // NAKKIWORKER_HH
