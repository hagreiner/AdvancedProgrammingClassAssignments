/**
* @file : main.cpp
* @brief : reads information from a file and creates an array of objects that contain song information
* @author : Hannah Greiner
* @credit : Benjamin Roberts
* @assignment : Lab 4.2 Dynamic Memory Allocation
* @date : Feb 6, 2020
*/

#include"definition.h"


int main(int argc, char* argv[]){

	bool win = false;
	std::string br = " | ";

	std::string fileName = "song.txt";
	int fileLineSize = getLineCount(fileName);
	Song* songArray = getPlayList(fileName, fileLineSize);
	
	for (int i = 0; i < fileLineSize; i++){
		std::cout << songArray[i].formatSong();
		std::cout << std::endl;
	}
	delete[] songArray;
	songArray = nullptr;
		
	return EXIT_SUCCESS;
}