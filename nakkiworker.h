#ifndef NAKKIWORKER_H
#define NAKKIWORKER_H

#include <string>

class Nakkiworker
{
public:
    Nakkiworker();

    Nakkiworker(std::string name);

    ~Nakkiworker();

    std::string giveName();

private:
    std::string name_;
};

#endif // NAKKIWORKER_H
