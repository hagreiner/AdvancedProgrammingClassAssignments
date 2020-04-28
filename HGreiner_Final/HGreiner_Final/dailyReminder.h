#ifndef DAILYREMINDER_H
#define DAILYREMINDER_H

#include "eventItem.h"
#include "activityLogger.h"

#include <vector>
#include <string>

class DailyReminder
{
private:
	std::vector<int> days;
	std::string name;
public:
	DailyReminder() {}
	~DailyReminder() {}

	void addDays(int day);
	void setName(std::string name) { this->name = name; }
};

#endif