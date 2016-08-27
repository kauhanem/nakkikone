#ifndef EVENT_H
#define EVENT_H

#include "nakki.h"

#include <string>
#include <vector>

class Event
{
public:
    Event();
    ~Event();

    void addNakki();

private:
    std::string name_;
    std::vector<Nakki*> nakkiList_;
};

#endif // EVENT_H
