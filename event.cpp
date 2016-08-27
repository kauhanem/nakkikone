#include "event.h"

Event::Event()
{

}

Event::~Event()
{

}

void Event::addNakki()
{
    Nakki* nakki = new Nakki();
    nakkiList_.push_back(nakki);
}

