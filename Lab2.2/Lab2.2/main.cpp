/**
* @file : main.cpp
* @brief : create song objects and call functions to populate parameters and variables
* @author : Benjamin Roberts and Hannah Greiner
* @assignment : Lab 2.2 - I Wanna Rock
* @date : January 27, 2020
*/

#include"definition.h"


int main(){
	std::vector<std::string> songTitles{"One Foot", "Augment", "Rise", "A Single Day", 
		"Palladio"};
	std::vector<std::string> albums{"What if Nothing", "Getaway-EP", "Conquer", 
		"Approaching Nirvana", "Escala"};
	std::vector<std::string> artists{"WALK THE MOON", "Zircon", "OVERWERK", "ANimals", 
		"Escala" };
	std::vector<int> songLengths{261, 249, 395, 271, 234};
	std::vector<int> bpms{120, 124, 130, 100, 115};
	std::vector<bool> liked{true, false, true, false, true};
	std::vector<int> ratings{4, 3, 5, 2, 5};
	std::vector<int> bitRates{256, 256, 256, 320, 256};
	std::vector<int> trackNumbers{3, 1, 1, 23, 2};
	std::vector<int> years{2017, 2014, 2013, 2014, 2009};

	Song song0(songTitles[0], artists[0], albums[0], songLengths[0], bpms[0],
		bitRates[0], trackNumbers[0], years[0]);
	song0.setLike(liked[0]);
	song0.setTrackNum(trackNumbers[0]);
	song0.setRating(ratings[0]);

	Song song1(songTitles[1], artists[1], albums[1], songLengths[1], bpms[1],
		bitRates[1], trackNumbers[1], years[1]);
	song1.setLike(liked[1]);
	song1.setTrackNum(trackNumbers[1]);
	song1.setRating(ratings[1]);

	Song song2(songTitles[2], artists[2], albums[2], songLengths[2], bpms[2],
		bitRates[2], trackNumbers[2], years[2]);
	song2.setLike(liked[2]);
	song2.setTrackNum(trackNumbers[2]);
	song2.setRating(ratings[2]);
	
	// these need all variables to be set
	Song song3;
	song3.setAlbum(albums[3]);
	song3.setArtist(artists[3]);
	song3.setBPM(bpms[3]);
	song3.setLength(songLengths[3]);
	song3.setLike(liked[3]);
	song3.setRating(ratings[3]);
	song3.setTitle(songTitles[3]);
	song3.setTrackNum(trackNumbers[3]);
	song3.setYear(years[3]);


	Song song4;
	song4.setAlbum(albums[4]);
	song4.setArtist(artists[4]);
	song4.setBPM(bpms[4]);
	song4.setLength(songLengths[4]);
	song4.setLike(liked[4]);
	song4.setRating(ratings[4]);
	song4.setTitle(songTitles[4]);
	song4.setTrackNum(trackNumbers[4]);
	song4.setYear(years[4]);

	// printing to terminal loop

	std::vector<std::string> song0Info{ song0.songInformation() };
	std::vector<std::string> song1Info{ song1.songInformation() };
	std::vector<std::string> song2Info{ song2.songInformation() };
	std::vector<std::string> song3Info{ song3.songInformation() };
	std::vector<std::string> song4Info{ song4.songInformation() };

	for (int i=0; i < 9; i++) {
		std::cout << song0Info[i] << std::endl;
	}
	std::cout << std::endl;
	for (int i=0; i < 9; i++) {
		std::cout << song1Info[i] << std::endl;
	}
	std::cout << std::endl;
	for (int i=0; i < 9; i++) {
		std::cout << song2Info[i] << std::endl;
	}
	std::cout << std::endl;
	for (int i=0; i < 9; i++) {
		std::cout << song3Info[i] << std::endl;
	}
	std::cout << std::endl;
	for (int i=0; i < 9; i++) {
		std::cout << song4Info[i] << std::endl;
	}


	return EXIT_SUCCESS;
}