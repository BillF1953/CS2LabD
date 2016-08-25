/*********************************************************************
** Program Filename : ToUpper File
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Makes chars all upper case
** Input : Read in File
** Output : Output File
** Citations :
********************************************************************/


#include "ToUpper.hpp"

/*********************************************************************
** Function: Transform
** Description: Turns all Characters Upper Case
** Parameters: char ch
** Pre-Conditions: doFilter
** Post-Conditions: doFilter
** Citation:
*********************************************************************/

char ToUpper::transform(char ch)
{
	if (islower(ch))
	{
		ch = toupper(ch);

	}
	
	return ch;
}
