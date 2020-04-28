#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "eventItem.h"

#ifndef UTILITY_H
#define UTILITY_H

int verifyData(int min, int max);
float verifyData(float min, float max);
int* verifyTime();
bool checkVectEmpty(std::vector<std::vector<std::string>> inputVec);

void logEvent(CalenderEvent* event);

void clear();

#endif
