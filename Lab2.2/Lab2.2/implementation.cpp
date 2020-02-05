#include "definition.h"

Song::Song() {
	objectCount++;

	title = "";
	artist = "";
	album = "";
	length = 0;
	bpm = 0;
	liked = true;
	rating = 0;
	bitRate = 0;
	trackNumber = 0;
	year = 0;
}

Song::Song(std::string t, std::string a, std::string al, int len, int b,
	int br, int tn, int yr) {
	objectCount++;

	title = t;
	artist = a;
	album = al;
	length = len;
	bpm = b;
	bitRate = br;
	trackNumber = tn;
	year = yr;
	
	lengthStr = toMinutes(length);
}

std::string Song::toMinutes(int seconds) {
	return std::to_string(seconds/60) + ":" + std::to_string(seconds % 60);
}


std::vector<std::string> Song::songInformation() {
	std::vector<std::string> resultVector{"Title: " + title, "Artist: " + artist, "Album: " + album, 
		"Length:" + lengthStr, "BMP: " + std::to_string(bpm), "Liked: " + boolToString(liked), "Rating: " + std::to_string(rating) + " stars",
		"Bitrate:" + std::to_string(bitRate), "Track Number: " + std::to_string(trackNumber), "Year: " + std::to_string(year)};
	return resultVector;
}

Song::~Song(){
	objectCount--;
}

Song* getPlayList(std::string fileName, int size){
	std::string header;
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

	std::ifstream input(fileName);
	if (input.good()) {

		getline(input, header);
		std::cout << header << std::endl;

		for (int index = 0; index < size; index++) {
			getline(input, title, ',');
			getline(input, album, ',');
			getline(input, artist, ',');
			getline(input, length, ',');
			getline(input, bpm, ',');
			getline(input, liked, ',');
			getline(input, rating, ',');
			getline(input, bitrate, ',');
			getline(input, trackNum, ',');
			getline(input, year);
		}
		input.close();

	return nullptr;
}

void outputVector(std::vector<std::string> songData) {
	for (int i = 0; i < 9; i++) {
		std::cout << songData[i] << std::endl;
	}
}

std::string boolToString(bool oldBool) {
	if (oldBool == false) {
		return "</3";
	}
	else {
		return "<3";
	}
}

int getLineCount(std::string fileName) {
	std::ifstream input(fileName);
	std::string line{""};
	int lineCount{ 0 };

	if (input.good()) {
		while (!input.eof()) {
			getline(input, line);
			if (line != "") { lineCount += 1; }
		}
	}

	input.close();
	return lineCount - 1;
}
