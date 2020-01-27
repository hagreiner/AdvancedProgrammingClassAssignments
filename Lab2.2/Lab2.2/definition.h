/*
@file
@brief
@author
@assignment
@date
*/
#include <string>
#include<iostream>
#include <vector> 


#ifndef SQUARE_H
#define SQUARE_H
class Song {
private:
	std::string title;
	std::string artist;
	std::string album;
	int length;
	int bpm;
	bool liked;
	int rating;
	int bitRate;
	int trackNumber;
	int year;

	std::string lengthStr;

public:
	Song();
	Song(std::string t, std::string a, std::string al, int len, int b, 
		int br, int tn, int yr);
	std::string toMinutes(int seconds);
	
	void setLike(bool like) { liked = like; }
	void setTrackNum(int trackLocation) { trackNumber = trackLocation; }
	void setRating(int newRating) { rating = newRating; }

	void setTitle(std::string t) { title = t; }
	void setArtist(std::string a) { artist = a; }
	void setAlbum(std::string a) { album = a; }
	void setLength(int sec) { lengthStr = toMinutes(sec); }
	void setBPM(int b) { bpm = b; }
	void setYear(int yr) { year = yr; }

	std::string getTitle() { return title; }
	std::string getArtist() { return artist; }
	std::string getAlbum() { return album; }

	std::vector<std::string> songInformation(); // needs to push all info to the vector

	~Song();
};

std::string boolToString(bool oldBool);

#endif
