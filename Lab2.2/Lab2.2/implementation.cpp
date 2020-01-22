#include "definition.h"

Song::Song() {
	title = "";
	artist = "";
	album = "";
	length = 0.0;
	bpm = 0;
	liked = true;
	rating = 0;
	bitRate = 0;
	trackNumber = 0;
	year = 0;
}

Song::Song(std::string t, std::string a, std::string al, float len, int b,
	int br, int tn, int yr) {
	title = t;
	artist = a;
	album = al;
	length = len;
	bpm = b;
	bitRate = br;
	trackNumber = tn;
	year = yr;
}

float Song::toMinutes(float seconds) { // need to finish
	return 1.1;
}

std::string Song::songInformation() { // pack into vector of str statements
	return "";
}

Song::~Song(){
}
