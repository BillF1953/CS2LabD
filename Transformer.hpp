
/*********************************************************************
** Program Filename : Transformer Header
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Transforms a file
** Input : File
** Output : Mutated File
** Citations : 
********************************************************************/
#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP

#include "WriteFile.hpp"
#include <cctype>
class Transformer: public WriteFile {

public:
	virtual void doFilter(ifstream &in, ofstream &out);
	virtual char transform(char ch) = 0;
};

#endif 