#ifndef DATE_H
#define DATE_H


class Date
{
public:
    Date();

    Date(int day, int month, int year);

private:
    int day_ = 1;
    int month_ = 1;
    int year_ = 1970;
};

#endif // DATE_H
