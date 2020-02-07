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

std::string Song::formatSong(){
	std::string returnStr{""};
	
	title.resize(25);
	artist.resize(25);
	lengthStr.resize(10);
	std::string bmpStr{ std::to_string(bpm) };
	bmpStr.resize(7);
	std::string likeStr{ std::to_string(liked) };
	likeStr.resize(5);
	std::string ratingStr{ std::to_string(rating) + " stars" };
	ratingStr.resize(10);
	std::string bitRateStr{ std::to_string(bitRate) };
	bitRateStr.resize(5);
	std::string trackStr{ std::to_string(trackNumber) };
	trackStr.resize(5);
	std::string yearStr{ std::to_string(year) };
	yearStr.resize(7);


	returnStr = title + artist + lengthStr + bmpStr + likeStr
		+ ratingStr + bitRateStr + trackStr + yearStr;
	return returnStr;
}

Song::~Song(){}

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
	bool like;

	Song* songArray = new Song[size];

	std::ifstream input(fileName);
	if (input.good()) {

		getline(input, header);
		std::cout << header << std::endl;

		for (int i = 0; i < size; i++) {
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

			std::istringstream(liked) >> std::boolalpha >> like;

			songArray[i].setAlbum(album);
			songArray[i].setArtist(artist);
			songArray[i].setBPM(stoi(bpm));
			songArray[i].setLength(stoi(length));
			songArray[i].setLike(like);
			songArray[i].setRating(stoi(rating));
			songArray[i].setTitle(title);
			songArray[i].setTrackNum(stoi(bitrate));
			songArray[i].setTrackNum(stoi(trackNum));
			songArray[i].setYear(stoi(year));
		}
		input.close();
	}
	return songArray;
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
