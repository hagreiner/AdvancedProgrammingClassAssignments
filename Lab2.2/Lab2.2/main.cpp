/*
@file
@brief
@author
@assignment
@date
*/

#include"definition.h"


int main(){
	std::vector<std::string> songTitles{"One Foot", "Augment", "Rise", "A Single Day", 
		"Palladio"};
	std::vector<std::string> albums{"What if Nothing", "Getaway-EP", "Conquer", 
		"Approaching Nirvana", "Escala"};
	std::vector<std::string> artists{"WALK THE MOON", "Zircon", "OVERWERK", "ANimals", 
		"Escala" };
	std::vector<float> songLengths{261.0, 249.0, 395.0, 271.0, 234.0};
	std::vector<int> bpms{120, 124, 130, 100, 115};
	std::vector<bool> liked{true, false, true, false, true};
	std::vector<int> ratings{4, 3, 5, 2, 5};
	std::vector<int> bitRates{256, 256, 256, 320, 256};
	std::vector<int> trackNumbers{3, 1, 1, 23, 2};
	std::vector<int> years{2017, 2014, 2013, 2014, 2009};

	Song song0(songTitles[0], artists[0], albums[0], songLengths[0], bpms[0],
		bitRates[0], trackNumbers[0], years[0]);
	Song song1(songTitles[1], artists[1], albums[1], songLengths[1], bpms[1],
		bitRates[1], trackNumbers[1], years[1]);
	Song song2(songTitles[2], artists[2], albums[2], songLengths[2], bpms[2],
		bitRates[2], trackNumbers[2], years[2]);
	//Song song3(songTitles[3], artists[3], albums[3], songLengths[3], bpms[3],
		//bitRates[3], trackNumbers[3], years[3]);
	//Song song4(songTitles[4], artists[4], albums[4], songLengths[4], bpms[4],
		//bitRates[4], trackNumbers[4], years[4]);
	
	// these need all variables to be set
	Song song3;
	Song song4;

	// printing to terminal loop


	return EXIT_SUCCESS;
}