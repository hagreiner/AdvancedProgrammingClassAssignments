#include <iostream>
#include "Square.h"

using namespace std;

int main(){
	Square mySquare;
	mySquare.setSide(3);
	cout << mySquare.getSide() << endl;
	cout << mySquare.area() << endl;
	cout << mySquare.perimeter() << endl;

	Square mySquare2(5);
	
	return EXIT_SUCCESS;
}