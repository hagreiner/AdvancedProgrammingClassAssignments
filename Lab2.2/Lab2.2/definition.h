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
#include <fstream>
#include <sstream>
#include <iomanip>  


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
	void setLike(bool liked) { this->liked = liked; }
	void setTrackNum(int trackNumber) { this->trackNumber = trackNumber; }
	void setRating(int rating) {this-> rating = rating; }
	void setTitle(std::string title) { this->title = title; }
	void setArtist(std::string artist) { this->artist = artist; }
	void setAlbum(std::string album) { this->album = album; }
	void setLength(int sec) { this->lengthStr = toMinutes(sec); }
	void setBPM(int bpm) { this->bpm = bpm; }
	void setYear(int year) { this->year = year; }
	void setBitRate(int bitrate) { this->bitRate = bitRate; }

	/**
	* @file : definition.h
	* @brief : brief get important song information
	* @author : Benjamin Roberts and Hannah Greiner
	* @assignment : Lab 2.2 - I Wanna Rock
	* @date : January 27, 2020
	*/
	std::string getTitle() { return title; }
	std::string getArtist() { return artist; }
	std::string getLength() { return lengthStr; }
	std::string getBPM() { return std::to_string(bpm); }
	std::string getLiked() { return std::to_string(liked); }
	std::string getRating() { return std::to_string(rating) + " stars"; }
	std::string getBitRate() { return std::to_string(bitRate); }
	std::string getTrackNum() { return std::to_string(trackNumber); }
	std::string getYear() { return std::to_string(year); }

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

Song* getPlayList(std::string fileName, int size); //new

int getLineCount(std::string fileName); //new

void printItem(std::string line, int lineSize); //new

#endif
