/**
* @file coordinate.h
* @brief  This is a lecture program that illustrates operator overloading.  Coordinate class declarations
*
* @author Hannah Greiner
* @credits Bilbo B. Baggins
* @credits Gaddis Chapter 11
* @assignment Lecture 6.1
* @date 2/17/2020
*
*/
#ifndef COORDINATE_H
#define COORDINATE_H
//4.1 ostream

#include <ostream>

class Coordinate
{
private:
	int x;
	int y;
	std::string* label;
public:
	//getters
	int getX()const { return x; }
	int getY()const { return y; }
	std::string getLabel() const { return *label; }
	std::string printCoordinate() const;
	//setters
	void setLabel(std::string label) { *(this->label) = label; }
	Coordinate(int x, int y, std::string label);
	~Coordinate();
	//copy constructor
	Coordinate(const Coordinate& rhs);
	//**********Lecture 6.1 **************
	//1.1.  The declaration
	Coordinate& operator=(const Coordinate& rhs); //operator = override, returns a coordinate reference
	
	//2.1.  The declaration
	bool operator==(const Coordinate& rhs); //operator ==, returns a boolean
	
	//3.1 the declaration
	Coordinate operator+(const Coordinate& rhs); //returns a coordinate

	//4.1 the declaration <<
	friend std::ostream& operator<<(std::ostream& out, Coordinate& coord);

	//4.4 the declaration >>
	friend std::istream& operator>>(std::istream& in, Coordinate& coord); //extraction

	//5.1
	Coordinate operator-(const Coordinate& rhs);

};
#endif


