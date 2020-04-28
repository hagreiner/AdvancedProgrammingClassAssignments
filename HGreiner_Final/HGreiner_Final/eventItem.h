#ifndef EVENTITEM_H
#define EVENTITEM_H

#include <string>
#include <iostream>
#include <sstream>
#include <vector>

class CalenderEvent 
{
protected:
    std::string name;
    float taskLength;
    int startHour;
    int startMin;
public:
    CalenderEvent() { name = "none", taskLength = 0; };
    CalenderEvent(std::string name, float taskLength);
    ~CalenderEvent();

    virtual void setName(std::string name);
    virtual void setLens(float taskLength);

    virtual std::string getName() const { return name; }
    virtual float getTask() const { return taskLength; }

    std::string findEndTime() const;
    virtual void setStartHour(int startHour) { this->startHour = startHour; }
    virtual void setStartMin(int startMin) { this->startMin = startMin; }

    virtual std::string print() const; 
    friend std::ostream& operator<<(std::ostream& os, const CalenderEvent& p);
};
#endif