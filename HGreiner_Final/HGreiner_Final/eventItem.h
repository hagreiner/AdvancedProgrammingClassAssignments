#ifndef EVENTITEM_H
#define EVENTITEM_H
#include <string>
#include <iostream>
#include <sstream>
class CalenderEvent
{
protected:
    std::string name;
    double taskLength;
public:
    CalenderEvent(std::string name, double taskLength);
    virtual std::string print() const;
    virtual ~CalenderEvent();
    friend std::ostream& operator<<(std::ostream& os, const CalenderEvent& p);
};
#endif