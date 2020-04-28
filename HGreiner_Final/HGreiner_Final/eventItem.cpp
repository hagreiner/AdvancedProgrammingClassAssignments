#include "eventItem.h"

CalenderEvent::CalenderEvent(std::string name, float taskLength) : name{ name }, taskLength { taskLength } {}

std::string CalenderEvent::print() const
{
	std::stringstream retVal;
	retVal << name << "\n";
	retVal << taskLength;
	return retVal.str();
}

CalenderEvent::~CalenderEvent()
{
}

void CalenderEvent::setName(std::string name) { this->name = name; }

void CalenderEvent::setLens(float taskLength) { this->taskLength = taskLength; }

std::ostream& operator<<(std::ostream& os, const CalenderEvent& p)
{
	os << p.print();
	return os;
}

std::string CalenderEvent::findEndTime() const {
	std::stringstream retVal;
	float timeInMin = taskLength * 60.0;
	float minFloat = ((float)startMin) + timeInMin;
	int minInt = startMin + (int)timeInMin;
	float endHour = startHour;

	int retMin = minInt % 60;
	int retHour = (minInt / 60) + startHour;
	if (retHour > 24) {
		retHour = 0;
		retVal << "into the next day at ";
	}

	if (retHour < 10) { retVal << "0" << retHour; }
	else { retVal << retHour; }
	retVal << ":";
	if (retMin < 10) { retVal << "0" << retMin; }
	else { retVal << retMin; }

	return retVal.str();
}
