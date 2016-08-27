#include "nakkiworker.hh"

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
