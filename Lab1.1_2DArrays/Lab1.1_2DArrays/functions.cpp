//
//  functions.cpp
//  lab1
//
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//


#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "functions.h"

#include <iostream>

using namespace std;


int loadLanguages( const string& filename, string names[], int maxLanguages )
{
	int numNames = 0;
   
	ifstream input(filename);
	if( input.is_open() )
	{
		while( !input.eof() && numNames < maxLanguages )
		{
			getline( input, names[numNames] );
			numNames++;
		}
		input.close();
	}
	return numNames;
}


bool loadInfo( const string& filename, int infoArray[][INFO], int numLanguages )
{
	int numInfo = 0, rank, year;
	string infoBiteStr{ " " }, junk;

	ifstream input(filename);
	if (input.is_open())
	{
		while (!input.eof() && numInfo < numLanguages){
			getline(input, infoBiteStr);
			if (infoBiteStr == "") { break; }
			
			stringstream sst(infoBiteStr);
			sst >> rank >> year;
			infoArray[numInfo][0] = rank;
			infoArray[numInfo][1] = year;

			numInfo++;
		}
		input.close();
	}
   
   return true;
}


string formatReportLine( int languageRank, int infoArray[][INFO], string names[] ){
	string year{ to_string(infoArray[languageRank][1]) };
	string rank{ to_string(infoArray[languageRank][0]) };
	string name = names[languageRank];

	name.resize(16);
	rank.resize(10);
   
   return name + rank + year;
}