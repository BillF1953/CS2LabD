/*********************************************************************
** Program Filename : Encryption File
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Encryptions a file
** Input : Read in File
** Output : Write into file
** Citations :
********************************************************************/


#include "encryption.hpp"

/*********************************************************************
** Function: Encryption Constructor
** Description: Sets Key for Class
** Parameters:  none
** Pre-Conditions: file "example.txt" must be present in directory
** Post-Conditions: All Derived Classes
** Citation:
*********************************************************************/


Encryption::Encryption(int key1)
{
	
	key = key1; 


}

/*********************************************************************
** Function: Transform
** Description: Modified ASCII Cypher divide by 93
** Parameters: char ch
** Pre-Conditions: file "example.txt" must be present in directory
** Post-Conditions: All Derived Classes
** Citation:
*********************************************************************/


char Encryption::transform(char ch)
{

		ch = (ch + key) % 93;  // The range of printable characters from 33 to 126 in the ASCII Table 
		ch = ch + 33;  // moving chars out the unprintable ASCII character range


	return ch;
}
