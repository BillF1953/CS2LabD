/*********************************************************************
** Program Filename : OrderedOutput Header
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Makes chars all upper case
** Input : User Input
** Output : Verified types
** Citations :
********************************************************************/
#ifndef ORDEREDOUTPUT_HPP
#define ORDEREDOUTPUT_HPP

#include <string>
#include "ToUpper.hpp"
#include "Transformer.hpp"
#include "encryption.hpp"
#include "InputValid.hpp"

class OrderedOutput : public Transformer {
private:
	char * oneArray(char * itemList, int size);
	int key; 

public:
	OrderedOutput(); 
	void doFilter(ifstream &in, ofstream &out);
	
	char transform(char ch);
};

#endif 
