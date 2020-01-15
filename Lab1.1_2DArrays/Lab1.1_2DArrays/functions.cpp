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
	int numInfo = 0;
	string infoBiteStr{ " " };
	int infoBiteInt{ 0 };

	ifstream input(filename);
	if (input.is_open())
	{
		while (!input.eof() || numInfo <= numLanguages){
			getline(input, infoBiteStr, ' ');
			infoArray[0][numInfo] = std::stoi(infoBiteStr);

			getline(input, infoBiteStr, '\n');
			infoArray[1][numInfo] = std::stoi(infoBiteStr);

			numInfo++;
			if (numInfo == numLanguages) {
				break;
			}
		}
		input.close();
	}
   
   return true;
}


string formatReportLine( int languageRank, int infoArray[][INFO], string names[] )
{
	// just a stub
   // modify to build each output line for each language, and align the output so its organized
   // hint: to return a string that concatenates strings and ints, use a stringstream
   
   return " ";
}