//  functions.h
//  lab1
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//

#ifndef __lab1__functions__
#define __lab1__functions__

#include <string>

using namespace std;

const int INFO = 2;

 /**
  * @brief load language names from a file into the names array - return number of languages read
  * @author Bilbo B. Baggins
  * @assignment Lab 1.1_2DArrays
  * @date 12/16/2019
  * @param filename - the name of the file being open and read in
  * @param names[] - an empty array that will be loaded with the names from the file
  * @param maxLanguages - the maximum number of languages that will be read in
  * @return int - the number of languages found
  */
int loadLanguages( const string& filename, string names[], int maxLanguages );

 /**
  * @brief load language info from a file into a 2d array of ints, return true if successfully processed
  * @author Hannah Greiner
  * @assignment Lab 1.1_2DArrays
  * @date 12/16/2019
  * @param filename - the name of the file being open and read in
  * @param infoArray[][INFO] - 2D array that the information from the file is being loaded into
  * @param numLanguages - the number of items found in the previous file
  * @return bool - true if info is processed
  * @credit Bilbo B. Baggins
  */
bool loadInfo( const string& filename, int infoArray[][INFO], int numLanguages );

/**
  * @brief formats and returns a string which contains the language name and the info for
  a particular language (indicated by languageRank)
  * @author Hannah Greiner
  * @assignment Lab 1.1_2DArrays
  * @date 12/16/2019
  * @param languageRank - corresponds to the position in the arrays where information will be called from
  * @param infoArray[][INFO] - 2D array with the data for year and rank
  * @param names[] - an array that contains the names of the languages
  * @return string - contains the language, rank, and year
  * @credit Bilbo B. Baggins
  */
string formatReportLine( int languageRank, int infoArray[][INFO], string names[] );

#endif /* defined(__lab1__functions__) */
