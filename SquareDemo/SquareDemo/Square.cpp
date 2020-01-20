#include "Square.h"
#include <iostream> // only for demo

Square::Square(){
	side = 0;
	std::cout << "in the constructor where the side is: " << side << std::endl;
}

Square::Square(int s){
	side = s;
	std::cout << "In custom ctor side is: " << side << std::endl;
}

Square::~Square(){
	std::cout << "in the dtor" << std::endl;
}

int Square::area() {
	return side * side;
}

int Square::perimeter(){
	return side *4;
}
