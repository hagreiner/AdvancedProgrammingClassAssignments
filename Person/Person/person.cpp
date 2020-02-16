#include "person.h"


void outputTest(const Person& x) { // DO NOT CHANGE THIS FUNCTION AT ALL
	x.printPersonInfo();
}

Person::Person(){
	name = new std::string("Name is not set");
	birthYear = new int(2025); // FIX: combined two lines
}

Person::Person(const Person& rhs){
	this->birthYear = new int(*(rhs.birthYear)); // FIX: added a copy constructor
	this->name = new std::string(*(rhs.name));
}

Person::~Person(){
	delete birthYear; //FIX: deletes pointer
	delete name;
}

void Person::printPersonInfo() const {  //FIX: changed to const
	std::cout << "Person       Name:\t" << *name << std::endl;
	std::cout << "Person Birth Year:\t" << *birthYear << std::endl; // Error  //FIX: added * in front of birthYear
}
