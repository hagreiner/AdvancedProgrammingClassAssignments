#include "book.h"

Book::Book(){
	bName = "";
	bType = UNKNOWN;
	bPages = 0;
	bOunces = 0.0;
}

Book::Book(const string& name, Type type, int pages, float ounces){
	bName = name;
	bType = type;
	bPages = pages;
	bOunces = ounces;
}

string Book::formatReportLine(){
	return "****************\nBook name: " + bName + "\nBook weight (ounces): " 
		+ std::to_string(bOunces) + "\nBook weight (lbs): " + std::to_string(getWeightLbs()) 
		+ "\nNumber of pages: " + std::to_string(bPages) + "\nType of Book: " + getTypeName()
		+ "\n***************\n";
}

float Book::getWeightLbs(){
	return bOunces/16;
}

string Book::getTypeName(){
	return TYPE_WORDS[bType];
}
