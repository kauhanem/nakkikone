#include "event.h"

Event::Event()
{

}

Event::Event(QString name, int year, QTime start, QTime end) :
    name_(name), year_(year), start_(start), end_(end)
{

}

Event::~Event()
{

}

QString Event::giveName()
{
    return name_;
}

void Event::addNakki()
{
    QString name;
    QTime start;
    QTime end;

    // nakin nimi = inputKenttä1
    // nakin alku = inputKenttä2
    // nakin loppu = inputKenttä3
    // nakin vuoron pituus = inputKenttä4 (voi olla tyhjä)
    Nakki* nakki = new Nakki(name,start,end);
    nakkiList_.push_back(nakki);
}

