#include "activityLogger.h"

int ActivityLogger::addItem(DailyReminder* item) {
	itemList.push_back(item);
	return itemList.size();
}
