#ifndef WEEKLY_H
#define WEEKLY_H
#include "eventItem.h"
class WeeklyEvent : public CalenderEvent
{
private:
    std::string day;
public:
    WeeklyEvent() { day = "None"; }
    std::string print() const;
    ~WeeklyEvent();
    void setDay(std::string day) { this->day = day; }
};
#endif