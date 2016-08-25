/*********************************************************************
** Program Filename : Copy Header
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Copys a file
** Input : Character
** Output : Character
** Citations :
********************************************************************/
#ifndef COPY_HPP
#define COPY_HPP

#include "Transformer.hpp"

class Copy : public Transformer{

public:
	 char transform(char ch);
};

#endif  