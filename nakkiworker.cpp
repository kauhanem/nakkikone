#include "nakkiworker.h"

Nakkiworker::Nakkiworker()
{

}

Nakkiworker::Nakkiworker(QString name) :
    name_(name)
{

}

QString Nakkiworker::giveName()
{
    return name_;
}
