/**
* @file daily.h
* @brief  produces a daily event
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

#ifndef DAILY_H
#define DAILY_H

#include "eventItem.h"

class DailyEvent : public CalenderEvent
{
private:
public:
    DailyEvent() {}; // ctor
    /**
    * @brief returns the event name and time
    */
    std::string print() const;
    ~DailyEvent(); // dtor
};
#endif