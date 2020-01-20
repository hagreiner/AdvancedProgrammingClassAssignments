#ifndef SQUARE_H
#define SQUARE_H
class Square
{
private:
	int side;
public:
	//constructors
	Square(); // as soon as the class is called - this is triggered
	Square(int s);
	//destructor 
	~Square(); // when class is closed
	int getSide() { return side; }  // this is inline
	void setSide(int s) { side = s; } //without the ';' means in is done in the header
	int area();
	int perimeter();
};
#endif
