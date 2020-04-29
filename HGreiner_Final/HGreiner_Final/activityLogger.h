/**
* @file activityLogger.h
* @brief  class stores a list of DailyReminder objects and loads the file associated with saved ones
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

#ifndef ACTIVITYLOGGER_H
#define ACTIVITYLOGGER_H

#include "dailyReminder.h"

#include <string>
#include <iomanip>
#include <vector>
#include <fstream>

class ActivityLogger
{
protected:
	std::vector<DailyReminder*> itemList;
public:
	ActivityLogger() {}; // ctor
	~ActivityLogger(); // dtor
	
	/**
	* @brief adds an object to the itemList vector
	* @param DailyReminder* item - a DailyReminder object
	*/
	int addItem(DailyReminder* item);
	/**
	* @brief goes through the current objects in the itemList vector to see if there are any that occur on a certain day
	* @param day - the day that the events will have to be on
	*/
	std::string printVect(std::string day);

	/**
	* @brief logs all current objects in vector to a file
	*/
	void logToFile();
	/**
	* @brief loads goals.txt fike to see if there any logged reminders that fall on the desired day
	* @param day - the day that the events will have to be on
	*/
	std::string loadFile(std::string day);
};

#endif