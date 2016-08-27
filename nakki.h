#ifndef NAKKI_H
#define NAKKI_H

#include "time.h"

#include <string>

class Nakki
{
public:
    Nakki();
    Nakki(std::string name, Time start, Time end);

    ~Nakki();

private:
    std::string name_;

    Time start_;
    Time end_;
};

#endif // NAKKI_H
