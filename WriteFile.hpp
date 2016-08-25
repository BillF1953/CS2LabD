/*********************************************************************
** Program Filename : WriteFile
** Author : Tyler Forrester
** Date : 7/ 17 / 2016
* * Description : Reads in Files and Writes to Files 
** Input : File
** Output : Char Array and File
** Citations : Lab C 7/10/2016
********************************************************************/



#ifndef WRITEFILE_HPP
#define WRITEFILE_HPP

#include <algorithm>
#include <fstream>
#include <iostream>

using std::ifstream;
using std::cout;
using std::ofstream;
using std::endl;

class WriteFile {

public:
	char * read(ifstream & fin);
	void write(char * array, ofstream & myfile1);

};

#endif
