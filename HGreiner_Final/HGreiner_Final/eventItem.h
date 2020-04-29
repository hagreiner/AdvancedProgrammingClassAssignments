/**
* @file eventItem.h
* @brief  parent class of daily and weekly events
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

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

    /**
    * @brief sets the name variable
    * @param name - name variable to be set to the class member variable
    */
    virtual void setName(std::string name);
    /**
    * @brief sets the taskLength
    * @param taskLength - taskLength variable to be set to the class member variable
    */
    virtual void setLens(float taskLength);

    /**
    * @brief returns event name
    */
    virtual std::string getName() const { return name; }
    /**
    * @brief returns event length
    */
    virtual float getTask() const { return taskLength; }

    /**
    * @brief returns a time frame when the event will happen
    */
    std::string findEndTime() const;
    virtual void setStartHour(int startHour) { this->startHour = startHour; }
    /**
    * @brief sets the start time of the task
    * @param startMin - startMin variable to be set to the class member variable
    */
    virtual void setStartMin(int startMin) { this->startMin = startMin; }

    /**
    * @brief returns a string of the formatted member variables
    */
    virtual std::string print() const; 
    /**
    * @brief friend operator that creates a stream for outputting and printing variables
    * @param os - stream
    * @param os - class object
    */
    friend std::ostream& operator<<(std::ostream& os, const CalenderEvent& p);
};
#endif