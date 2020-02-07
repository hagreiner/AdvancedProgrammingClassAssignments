/**
* @file : definition.h
* @brief : defines the song class and function and variables within the class
* @author : Hannah Greiner
* @credit : Benjamin Roberts
* @assignment : Lab 4.2 Dynamic Memory Allocation
* @date : Feb 6, 2020
*/

#include <string>
#include <iostream>
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
	* @author : Hannah Greiner
	* @credit : Benjamin Roberts
	* @assignment : Lab 4.2 Dynamic Memory Allocation
	* @date : Feb 6, 2020
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
	* @author : Hannah Greiner
	* @credit : Benjamin Roberts
	* @assignment : Lab 4.2 Dynamic Memory Allocation
	* @date : Feb 6, 2020
	*/
	Song(std::string t, std::string a, std::string al, int len, int b, 
		int br, int tn, int yr);

	/**
	* @file : definition.h
	* @brief : converts seconds to minutes:seconds
	* @author : Hannah Greiner
	* @credit : Benjamin Roberts
	* @assignment : Lab 4.2 Dynamic Memory Allocation
	* @date : Feb 6, 2020
	*/
	std::string toMinutes(int seconds);
	
	/**
	* @file : definition.h
	* @brief : set all private variables 
	* @author : Hannah Greiner
	* @credit : Benjamin Roberts
	* @assignment : Lab 4.2 Dynamic Memory Allocation
	* @date : Feb 6, 2020
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
	* @brief : get important song information
	* @author : Hannah Greiner
	* @credit : Benjamin Roberts
	* @assignment : Lab 4.2 Dynamic Memory Allocation
	* @date : Feb 6, 2020
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
	* @brief : returns song information in a formated string
	* @author : Hannah Greiner
	* @assignment : Lab 4.2 Dynamic Memory Allocation
	* @date : Feb 6, 2020
	*/
	std::string formatSong(); //new

	~Song();
};

/**
* @file : definition.h
* @brief : returns creates an array of all the song objects while creating them with the information a .txt file
* @param fileName : the name of the .txt file
* @param size : the number of songs in the file
* @author : Hannah Greiner
* @assignment : Lab 4.2 Dynamic Memory Allocation
* @date : Feb 6, 2020
*/
Song* getPlayList(std::string fileName, int size); //new

/**
* @file : definition.h
* @brief : gets the number of lines in the the text file and subtracts one for the header
* @param fileName : the name of the .txt file
* @author : Hannah Greiner
* @assignment : Lab 4.2 Dynamic Memory Allocation
* @date : Feb 6, 2020
*/
int getLineCount(std::string fileName); //new

#endif
