#include "CoordClass.h"

Coordinates::Coordinates(int x, int y, std::string label) : x{ x }, y{ y } {
	this->label = new std::string(label);
	std::cout << "In ctor custom" << std::endl;
}

Coordinates::Coordinates(const Coordinates& rhs){
	this->x = rhs.x;
	this->y = rhs.y;
	this->label = new std::string(*(rhs.label));
}

Coordinates::~Coordinates(){
	std::cout << "Destroying Coord: " << *label << std::endl;
	delete label;
}
