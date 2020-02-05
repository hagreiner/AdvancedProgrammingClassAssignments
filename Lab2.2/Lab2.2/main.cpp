/**
* @file : main.cpp
* @brief : create song objects and call functions to populate parameters and variables
* @author : Benjamin Roberts and Hannah Greiner
* @assignment : Lab 2.2 - I Wanna Rock
* @date : January 27, 2020
*/

#include"definition.h"


int main(int argc, char* argv[]){

	bool win = false;
	std::string br = " | ";

	std::string fileName = "song.txt";
	int fileLineSize = getLineCount(fileName);
	getPlayList(fileName, fileLineSize);
	
	
		
		/*Song song0(songTitles[0], artists[0], albums[0], songLengths[0], bpms[0],
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

		*/
		
	return EXIT_SUCCESS;
}