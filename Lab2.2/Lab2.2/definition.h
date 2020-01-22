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
	float length;
	int bpm;
	bool liked;
	int rating;
	int bitRate;
	int trackNumber;
	int year;

public:
	Song();
	Song(std::string t, std::string a, std::string al, float len, int b, 
		int br, int tn, int yr);
	float toMinutes(float seconds);
	
	void setLike(bool like) { liked = like; }
	void setTrackNum(int trackLocation) { trackNumber = trackLocation; }
	void setRating(int newRating) { rating = newRating; }

	std::string getTitle() { return title; }
	std::string getArtist() { return artist; }
	std::string getAlbum() { return album; }

	std::string songInformation();

	~Song();
};

#endif
