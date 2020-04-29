/**
* @file calBuilder.h
* @brief  functions that help compare user input and format it for output for the desired day
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

#include<ctime>
#include<string>
#include <fstream>
#include<vector>
#include <algorithm>

#ifndef CALBUILDER_H
#define CALBUILDER_H

/**
* @brief finds today's day
*/
std::string currentDay();
/**
* @brief finds the day after today
*/
std::string nextDay();
/**
* @brief finds the day after tomorrow
*/
std::string dayAfter();

/**
* @brief finds the desired day in the future
* @param today - the current day
* @param dayInTheFuture - how many days in the future the return day will be
*/
std::string findFutureDay(std::string today, int dayInTheFuture);
/**
* @brief converts the string day to an int
* @param day - string version of the day
*/
int dayToNum(std::string day);
/**
* @brief converts the int day to a string
* @param day - int version of the day
*/
std::string numToDay(int day);

/**
* @brief read the days and times of the events from the file in and return them in a vector of two vectors
* @param day - a key that will see if the event should be added to the vector 
*/
std::vector<std::vector<std::string>> dayEvents(std::string day);
/**
* @brief formats the events into a printable string
* @param events - formatted vector of event names and times
*/
std::string printEvents(std::vector<std::vector<std::string>> events);

/**
* @brief orders the items in the vectors according to event time
* @param vectLen - length of the vectors
* @param intVec - holds the times of the events
* @param strVec - holds the names of the events
*/
void orderVector(int vectLen, std::vector<std::string>& intVec, std::vector<std::string>& strVec);
/**
* @brief swaps the values of the variables
* @param variables that values will be swapped
*/
void Swap(int*, int*);
void Swap(std::string*, std::string*);
#endif