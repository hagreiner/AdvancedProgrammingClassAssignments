#include "daily.h"

std::string DailyEvent::print() const {
	std::stringstream retVal;
	retVal << "Daily Event\n";
	retVal << name << "\n";
	retVal << taskLength << "\n";

	if (startHour < 10) { retVal << "0" << startHour; }
	else { retVal << startHour; }
	retVal << ":";
	if (startMin < 10) { retVal << "0" << startMin; }
	else { retVal << startMin; }
	retVal << " to ";

	retVal <<findEndTime() << "\n";
	return retVal.str();
}

DailyEvent::~DailyEvent() {}

