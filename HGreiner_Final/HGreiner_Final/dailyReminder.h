/**
* @file dailyReminder.h
* @brief  class that has events multiple times a week with no set time
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

#ifndef DAILYREMINDER_H
#define DAILYREMINDER_H

#include "eventItem.h"

#include <vector>
#include <string>

class DailyReminder
{
private:
	std::vector<std::string> days;
	std::string name;
public:
	DailyReminder() {}  // ctor
	~DailyReminder() {}  // dtor

	/**
	* @brief adds a day to the vector of days that the reminder will happen on
	* @param day - what day it will happen on
	*/
	void addDays(std::string day);
	/**
	* @brief sets the variable name
	* @param name - is set to the class variable name
	*/
	void setName(std::string name) { this->name = name; }

	/**
	* @brief returns the name of the event
	*/
	std::string getName() const { return name; }
	/**
	* @brief returns the vector of days that the event will occur on
	*/
	std::vector<std::string> getDays() const { return days; }
};

#endif