/*********************************************************************
** Program Filename : Encryption Header
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Encryptions a file
** Input : Read in File 
** Output : Write into file
** Citations :
********************************************************************/
#ifndef ENCRYPTION_HPP
#define ENCRYPTION_HPP
#include "Transformer.hpp"

class Encryption : public Transformer {
private:
	int key; 
public:
	Encryption(int); 
	char transform(char ch);
};

#endif 
