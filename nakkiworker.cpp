#include "nakkiworker.h"

Nakkiworker::Nakkiworker()
{

}

Nakkiworker::Nakkiworker(std::__cxx11::string name) :
    name_(name)
{

}

std::string Nakkiworker::giveName()
{
    return name_;
}
