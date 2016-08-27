#ifndef TIME_H
#define TIME_H


class Time
{
public:
    Time();

    Time(int hours);

    Time(int hours, int minutes);

    ~Time();

private:
    int hours_ = 0;
    int minutes_ = 0;
};

#endif // TIME_H
