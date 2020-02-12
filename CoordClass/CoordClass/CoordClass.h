#include<iostream>
#include<string>

#ifndef COORDCLASS_H
#define COORDCLASS_H

class Coordinates
{
private:
	int x;
	int y;

	std::string* label;
	
public:
	//ctor
	Coordinates() { x = 0; y = 0; std::cout << "In ctor default" << std::endl; }
	Coordinates(int x, int y, std::string label);
	Coordinates(const Coordinates& rhs); //copy constructor
	
	//dtor
	~Coordinates();

	//get
	int getXValue()const { return x; }
	int getYValue()const { return y; }

	std::string coordString() { return (*label + "(" + std::to_string(x) + ", " + std::to_string(y) + ")"); }
	std::string getLabel()const { return *label; }
	
	//set
	void setXValue(int x) { this-> x = x; }
	void setYValue(int y) { this->y = y; }
	void setLabel(std::string label) { *(this->label) = label; }

	//other

			
};
#endif
