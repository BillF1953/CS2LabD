/*********************************************************************
** Program Filename : ToUpper Header
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Makes chars all upper case 
** Input : Read in File
** Output : Output File
** Citations :
********************************************************************/
#ifndef TOUPPER_HPP
#define TOUPPER_HPP

#include "Transformer.hpp"

class ToUpper : public Transformer {

public:
	char transform(char ch);
};

#endif  
