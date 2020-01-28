/**
* @file : definition.h
* @brief : defines the song class and function and variables within the class
* @author : Benjamin Roberts and Hannah Greiner
* @assignment : Lab 2.2 - I Wanna Rock
* @date : January 27, 2020
*/
#include <string>
#include<iostream>
#include <vector> 


#ifndef DEFINITION_H
#define DEFINITION_H
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
	/**
	* @file : definition.h
	* @brief : sets all variables in the class to defaults (0, "", etc)
	* @author : Benjamin Roberts and Hannah Greiner
	* @assignment : Lab 2.2 - I Wanna Rock
	* @date : January 27, 2020
	*/
	Song();
	
	/**
	* @file : definition.h
	* @brief : populates all params with data
	* @param t : variable that will be set equal to title
	* @param a : variable that will be set equal to artist
	* @param al : variable that will be set equal to album
	* @param len : variable that will be set equal to length
	* @param b : variable that will be set equal to bpm
	* @param br : variable that will be set equal to bitRate
	* @param tn : variable that will be set equal to trackNumber
	* @param yr : variable that will be set equal to year
	* @author : Benjamin Roberts and Hannah Greiner
	* @assignment : Lab 2.2 - I Wanna Rock
	* @date : January 27, 2020
	*/
	Song(std::string t, std::string a, std::string al, int len, int b, 
		int br, int tn, int yr);

	/**
	* @file : definition.h
	* @brief : converts seconds to minutes:seconds
	* @author : Benjamin Roberts and Hannah Greiner
	* @assignment : Lab 2.2 - I Wanna Rock
	* @date : January 27, 2020
	*/
	std::string toMinutes(int seconds);
	
	/**
	* @file : definition.h
	* @brief : set all private variables 
	* @author : Benjamin Roberts and Hannah Greiner
	* @assignment : Lab 2.2 - I Wanna Rock
	* @date : January 27, 2020
	*/
	void setLike(bool like) { liked = like; }
	void setTrackNum(int trackLocation) { trackNumber = trackLocation; }
	void setRating(int newRating) { rating = newRating; }
	void setTitle(std::string t) { title = t; }
	void setArtist(std::string a) { artist = a; }
	void setAlbum(std::string a) { album = a; }
	void setLength(int sec) { lengthStr = toMinutes(sec); }
	void setBPM(int b) { bpm = b; }
	void setYear(int yr) { year = yr; }

	/**
	* @file : definition.h
	* @brief : brief get important song information
	* @author : Benjamin Roberts and Hannah Greiner
	* @assignment : Lab 2.2 - I Wanna Rock
	* @date : January 27, 2020
	*/
	std::string getTitle() { return title; }
	std::string getArtist() { return artist; }
	std::string getAlbum() { return album; }

	/**
	* @file : definition.h
	* @brief : returns varibles in a vector with descriptions
	* @author : Benjamin Roberts and Hannah Greiner
	* @assignment : Lab 2.2 - I Wanna Rock
	* @date : January 27, 2020
	*/
	std::vector<std::string> songInformation();

	~Song();
};

std::string boolToString(bool oldBool);

#endif
