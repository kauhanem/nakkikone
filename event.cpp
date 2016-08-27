#include "event.h"

Event::Event()
{

}

Event::~Event()
{

}

std::string Event::giveName()
{
    return name_;
}

void Event::addNakki()
{
    // nakin nimi = inputKenttä1
    // nakin alku = inputKenttä2
    // nakin loppu = inputKenttä3
    // nakin vuoron pituus = inputKenttä4 (voi olla tyhjä)
    Nakki* nakki = new Nakki();
    nakkiList_.push_back(nakki);
}

