#ifndef EVENT_H
#define EVENT_H

#include "nakki.h"

#include <QTime>
#include <QString>
#include <QVector>

class Event
{
public:
    Event();

    Event(QString name, int year, QTime start, QTime end);

    ~Event();

    QString giveName();

    void addNakki();


private:
    QString name_;

    int year_;

    QTime start_;
    QTime end_;

    QVector<Nakki*> nakkiList_;
};

#endif // EVENT_H
