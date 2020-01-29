#include "definition.h"

Song::Song() {
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