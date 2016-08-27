#include "event.hh"

Event::Event()
{

}

Event::Event(QString name, QDate date, QTime start, QTime end) :
    name_(name), date_(date), start_(start), end_(end)
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

