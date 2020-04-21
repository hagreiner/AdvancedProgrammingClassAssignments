#ifndef DAILY_H
#define DAILY_H
#include "eventItem.h"
class DailyEvent : public CalenderEvent
{
private:
    int timesPerDay;
public:
    DailyEvent(std::string name, double taskLength, int timesPerDay);
    std::string print() const;
    ~DailyEvent();
};
#endif