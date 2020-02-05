#include<iostream>

int main(){
	int num = 55;
	std::cout << num << std::endl;
	std::cout << &num << std::endl;

	int* intPrnt = nullptr;	 // this variable is pointer that can hold an int
	intPrnt = &num;  // address value assigned to varibale

	std::cout << intPrnt << std::endl;  // prints address
	std::cout << *intPrnt << std::endl;  // print value (dereferences)

	*intPrnt += 1;  // modifies address value

	return EXIT_SUCCESS;
}