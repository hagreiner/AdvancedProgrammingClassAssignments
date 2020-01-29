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
	std::ifstream input(fileName);
	if (input.good()) {
		win = true;

		std::string title;
		std::string album;
		std::string artist;
		std::string length;
		std::string bpm;
		std::string liked;
		std::string rating;
		std::string bitrate;
		std::string trackNum;
		std::string year;

		std::string header;
		getline(input, header);
		std::cout << header << std::endl;

		while (!input.eof()) {
			getline(input, title, ',');
			if (title == "") { break; }
			getline(input, album, ',');
			getline(input, artist, ',');
			getline(input, length, ',');
			getline(input, bpm, ',');
			getline(input, liked, ',');
			getline(input, rating, ',');
			getline(input, bitrate, ',');
			getline(input, trackNum, ',');
			getline(input, year);

			std::cout << title << br << album << br << artist << br << length
				<< br << bpm << br << liked << br << rating << br << bitrate << br
				<< trackNum << br << year << std::endl;
		}
		input.close();

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

		std::vector < std::vector<std::string> > allInfo{};

		outputVector(song0.songInformation());
		outputVector(song1.songInformation());
		outputVector(song2.songInformation());
		outputVector(song3.songInformation());
		outputVector(song4.songInformation());
		*/
	}
	else {
		win = false;
	}
		return win;
}