/**
* @file weekly.h
* @brief  produces a weekly event
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

#ifndef WEEKLY_H
#define WEEKLY_H
#include "eventItem.h"
class WeeklyEvent : public CalenderEvent
{
private:
    std::string day;
public:
    WeeklyEvent() { day = "None"; } // ctor
    /**
    * @brief returns the event day, name, taskLength, and the time range it happens in
    */
    std::string print() const;
    ~WeeklyEvent(); // dtor
    /**
    * @brief sets the class member day
    * @param day - sets day to the class member variable day
    */
    void setDay(std::string day) { this->day = day; }
};
#endif