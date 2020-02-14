#include<iostream>
#include<string>

#ifndef PERSON_H
#define PERSON_H

class Person {
public:
	Person();
	Person(const Person& rhs);

	~Person();
	void printPersonInfo();

	void setName(std::string name) { this->name = name; } //FIX: added this-> in front of name variable
	std::string getName() const { return name; }  //FIX: added const after function name

	void setBirthYear(int birthYear) { *(this->birthYear) = birthYear; } // DO NOT CHANGE THE VARIABLE NAME
	int getBirthYear() const { return *birthYear; }  //FIX: added const after function name

private:
	std::string name;      // DO NOT CHANGE VARIABLE NAME
	int* birthYear; // DO NOT CHANGE VARIABLE NAME
};

void outputTest(const Person& x);


#endif

