#include "eventItem.h"

CalenderEvent::CalenderEvent(std::string name, double taskLength) : name{ name }, taskLength { taskLength } {

}

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

std::ostream& operator<<(std::ostream& os, const CalenderEvent& p)
{
	os << p.print();
	return os;
}
