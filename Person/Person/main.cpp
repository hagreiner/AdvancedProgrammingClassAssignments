#include <iostream> 
#include <string> 

//using namespace std; commented out
#include "person.h" // FIX: added header file

// DO NOT CHANGE MAIN FUNCTION AT ALL
int main()
{
	Person firstPerson;
	outputTest(firstPerson);

	firstPerson.setName("Sena");
	if (firstPerson.getName() != "Sena")
		std::cout << "Defect: Name cannot set to Sena \n\n\n";

	Person secondPerson = firstPerson;

	firstPerson.setBirthYear(2030);

	if (secondPerson.getBirthYear() != 2025) {
		std::cout << "Defect: BirthYear of secondPerson also changed \n";
		std::cout << "\t 1st Person Birth Year:\t" << firstPerson.getBirthYear() << std::endl;
		std::cout << "\t 2nd Person Birth Year:\t" << secondPerson.getBirthYear() << std::endl;
	}

	outputTest(firstPerson);
	outputTest(secondPerson);

	return 0;
}
