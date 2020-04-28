#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "eventItem.h"
#include "weekly.h"
#include "daily.h"
#include "calBuilder.h"

#ifndef MENU_H
#define MENU_H

int mainMenu();
void eventBasics(CalenderEvent* event);
void timeInformation(CalenderEvent* event);
void weeklyInformation(WeeklyEvent* event);
void mainMenuText();

int calenderMenu();

void calenderText();

#endif