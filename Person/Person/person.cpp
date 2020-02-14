#include "person.h"


void outputTest(const Person& x) { // DO NOT CHANGE THIS FUNCTION AT ALL
	x.printPersonInfo();
}

Person::Person(){
	name = "Name is not set";
	birthYear = new int(2025); // FIX: combined two lines
}

Person::Person(const Person& rhs){
	this->birthYear = new int(*(rhs.birthYear)); // FIX: added a copy constructor
}

Person::~Person(){
	delete birthYear; //FIX: deletes pointer
}

void Person::printPersonInfo(){
	std::cout << "Person       Name:\t" << name << std::endl;
	std::cout << "Person Birth Year:\t" << *birthYear << std::endl; // Error  //FIX: added * in front of birthYear
}
