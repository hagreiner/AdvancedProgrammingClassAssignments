#ifndef DAILY_H
#define DAILY_H

#include "eventItem.h"

class DailyEvent : public CalenderEvent
{
private:
public:
    DailyEvent() {};
    std::string print() const;
    ~DailyEvent();
};
#endif