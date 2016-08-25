/*********************************************************************
** Program Filename : Transformer File
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Transforms a file
** Input : File
** Output : Mutated File
** Citations :
********************************************************************/


#include "Transformer.hpp"
/*********************************************************************
** Function: Do Filter
** Description: Reads File, transforms file , writes file
** Parameters: ifstream & in, ofstream & out
** Pre-Conditions: file "example.txt" must be present in directory
** Post-Conditions: All Derived Classes
** Citation: 
*********************************************************************/


void Transformer::doFilter(ifstream & in, ofstream & out)
{   
	char * charArray = read(in);
	
	for (int i = 0; charArray[i] != '\0'; i++)
	{
	charArray[i] = transform(charArray[i]);
	}
	
	write(charArray, out);


}
