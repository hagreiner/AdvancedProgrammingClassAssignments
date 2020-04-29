/**
* @file menu.h
* @brief  the functions declared here take in class objects and assign their member variables through taking in user input
*
* @author Hannah Greiner
* @assignment Final
* @date 4/28/2020
*
*/

#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "eventItem.h"
#include "weekly.h"
#include "daily.h"
#include "calBuilder.h"
#include "dailyReminder.h"

#ifndef MENU_H
#define MENU_H

/**
* @brief returns in a number to decide what type of event object will be created
*/
int mainMenu();
/**
* @brief the next two functions take in user data for the member variables in the base class CalanderEvents
* @param CalenderEvent* event - could be a WeeklyEvent or DailyEvent based on the user input in main
*/
void eventBasics(CalenderEvent* event);
void timeInformation(CalenderEvent* event);
/**
* @brief adds the specific day that the event will be on
* @param WeeklyEvent* event - a WeeklyEvent object
*/
void weeklyInformation(WeeklyEvent* event);
/**
* @brief loads in all the information that the DailyReminder object needs
* @param DailyReminder* event - a DailyReminder object
*/
void reminderMenu(DailyReminder* event);

/**
* @brief contains the text for the main menu
*/
void mainMenuText();

/**
* @brief returns in a number to decide what day's events will be displayed
*/
int calenderMenu();
/**
* @brief contains the text for the calender menu
*/
void calenderText();

#endif