#include<ctime>
#include<string>
#include <fstream>
#include<vector>
#include <algorithm>

#ifndef CALBUILDER_H
#define CALBUILDER_H

std::string currentDay();
std::string nextDay();
std::string dayAfter();

std::string findFutureDay(std::string today, int dayInTheFuture);
int dayToNum(std::string day);
std::string numToDay(int day);

std::vector<std::vector<std::string>> dayEvents(std::string day);
std::string printEvents(std::vector<std::vector<std::string>> events);

void orderVector(int vectLen, std::vector<std::string>& intVec, std::vector<std::string>& strVec);
void Swap(int*, int*);
void Swap(std::string*, std::string*);
#endif