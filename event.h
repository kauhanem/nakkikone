#ifndef EVENT_H
#define EVENT_H

#include "nakki.h"
#include "time.h"

#include <string>
#include <vector>

class Event
{
public:
    Event();

    Event(std::string name, int year, Time start, Time end);

    ~Event();

    std::string giveName();

    void addNakki();



private:
    std::string name_;

    int year_;

    Time start_;
    Time end_;

    std::vector<Nakki*> nakkiList_;
};

#endif // EVENT_H
