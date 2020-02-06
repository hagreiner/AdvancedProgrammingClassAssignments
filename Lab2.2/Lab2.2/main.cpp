/**
* @file : main.cpp
* @brief : create song objects and call functions to populate parameters and variables
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
		printItem(songArray[i].getTitle(), 25);
		printItem(songArray[i].getArtist(), 25);
		printItem(songArray[i].getLength(), 10);
		printItem(songArray[i].getBPM(), 7);
		printItem(songArray[i].getLiked(), 5);
		printItem(songArray[i].getRating(), 10);
		printItem(songArray[i].getBitRate(), 5);
		printItem(songArray[i].getTrackNum(), 5);
		printItem(songArray[i].getYear(), 7);
		std::cout << std::endl;
	}
	delete[] songArray;
	songArray = nullptr;
		
	return EXIT_SUCCESS;
}