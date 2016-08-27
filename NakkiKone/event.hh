#ifndef EVENT_HH
#define EVENT_HH

#include "nakki.hh"

#include <QTime>
#include <QDate>
#include <QString>
#include <QVector>

class Event
{
public:
    Event();

    Event(QString name, QDate date, QTime start, QTime end);

    ~Event();

    QString giveName();

    void addNakki();


private:
    QString name_;

    QDate date_;

    QTime start_;
    QTime end_;

    QVector<Nakki*> nakkiList_;
};

#endif // EVENT_H
