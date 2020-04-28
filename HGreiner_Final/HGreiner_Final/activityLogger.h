#ifndef ACTIVITYLOGGER_H
#define ACTIVITYLOGGER_H

#include "dailyReminder.h"
#include "daily.h"

#include <string>
#include <iomanip>
#include <vector>

class ActivityLogger
{
protected:
	std::string name;
	std::vector<DailyReminder*> itemList;
public:
	ActivityLogger() {};
	~ActivityLogger() {};
	virtual void setName(std::string name) { this->name = name; };
	int addItem(DailyReminder* item);

	
};

#endif