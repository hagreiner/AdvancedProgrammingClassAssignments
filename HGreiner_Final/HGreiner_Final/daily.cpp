#include "daily.h"

DailyEvent::DailyEvent(std::string name, double taskLength, int timesPerDay) : CalenderEvent { name, taskLength },
timesPerDay {timesPerDay} {

}

std::string DailyEvent::print() const
{
	return std::string();
}

DailyEvent::~DailyEvent()
{
}
