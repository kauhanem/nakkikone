#ifndef NAKKI_H
#define NAKKI_H

#include <string>

class Nakki
{
public:
    Nakki();
    Nakki(std::string name);

    ~Nakki();

private:
    std::string name_;
};

#endif // NAKKI_H
