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
	// just a stub
   // modify to load the 2D array (infoArray) with the data stored in info.txt
   
   return true;
}


string formatReportLine( int languageRank, int infoArray[][INFO], string names[] )
{
	// just a stub
   // modify to build each output line for each language, and align the output so its organized
   // hint: to return a string that concatenates strings and ints, use a stringstream
   
   return " ";
}