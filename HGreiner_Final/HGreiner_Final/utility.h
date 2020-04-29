/**
* @file activityLogger.h
* @brief  utility function that verify user input
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "eventItem.h"

#ifndef UTILITY_H
#define UTILITY_H

/**
* @brief returns input if it is between the two desired numbers
* @param min and max - provide a range for input
*/
int verifyData(int min, int max);
float verifyData(float min, float max);
/**
* @brief checks if user provided time is an actual time
*/
int* verifyTime();
/**
* @brief checks to make sure vector contains items before sorting or exporting
* @param inputVec - vector to be checked if empty
*/
bool checkVectEmpty(std::vector<std::vector<std::string>> inputVec);
/**
* @brief writes an object to a file
* @param CalenderEvent* event - event that is being written to a file
*/
void logEvent(CalenderEvent* event);
/**
* @brief clears the terminal
*/
void clear();

#endif
