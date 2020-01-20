#include "book.h"

Book::Book(){
}

Book::Book(const string& name, Type type, int pages, float ounces){
	bName = name;
	bType = type;
	bPages = pages;
	bOunces = ounces;
}

string Book::formatReportLine(){
	return "tempStr";
}

float Book::getWeightLbs(){
	return bOunces*16;
}

string Book::getTypeName(){
	return TYPE_WORDS[bType];
}
