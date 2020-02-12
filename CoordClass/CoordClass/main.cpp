#include "CoordClass.h"


int main() {

	Coordinates a(8, 9, "CoordA");
	std::cout << a.coordString() << std::endl;

	Coordinates b = a;
	std::cout << b.coordString() << std::endl;
	b.setLabel("CoordB");

	std::cout << b.coordString() << std::endl;
	std::cout << a.coordString() << std::endl;
	
	return EXIT_SUCCESS;
}

