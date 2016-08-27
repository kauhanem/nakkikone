#include "time.h"

Time::Time()
{

}

Time::Time(int hours) :
    hours_(hours)
{

}

Time::Time(int hours, int minutes) :
    hours_(hours), minutes_(minutes)
{

}

Time::~Time()
{

}
