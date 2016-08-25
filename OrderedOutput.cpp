/*********************************************************************
** Program Filename : OrderedOutput File
** Author : Tyler Forrester
** Date : 7 / 16 / 2016
* * Description : Makes chars all upper case
** Input : User Input
** Output : Verified types
** Citations :
********************************************************************/


#include "OrderedOutput.hpp"
/*********************************************************************
** Function: Constructor OrderedOutput
** Description: Intializes k to Zero
** Parameters: none
** Pre-Conditions: OrderedOutput Object Created
** Post-Conditions: OrderOutput being used
** Citation: 
*********************************************************************/

OrderedOutput::OrderedOutput()
{
	key = 0; 
}

/*********************************************************************
** Function: doFilter
** Description: Different dofilter from Transfomer used to shrink the array and lengthen it. 
** Parameters: ifstream & in, ofstream & out
** Pre-Conditions: Switch Case 4 in Main
** Post-Conditions: Transform()
** Citation:
*********************************************************************/



void OrderedOutput::doFilter(ifstream & in, ofstream & out)
{
	char * charArray = read(in);
	
	int length = 0;
	int position = 0; 

	for (int i = 0; charArray[i] != '\0'; i++)  // this deletes spaces and new lines and counts array length. 
	{	
		length++;
		if (isspace(charArray[i])) {

			for (int j = 0; charArray[i + j] != '\0'; j++) {
		
				charArray[i + j] = charArray[j + i + 1];
				
			}
			
		}
	//	cout << charArray[i]; 
	}
	InputValid valid = InputValid();   // input object ot accept array key
	key = valid.validateInt();
	Encryption e = Encryption(key); 
	for (int k = 0; k < length; k++) {


	charArray[k] = e.transform(charArray[k]); // encrypts array
	
	}

	charArray = oneArray(charArray, length); // increases size of array to accomodate new characters


	//cout << "This is the Length: " << length << endl;
	for (int i = 0; i < length; i++)
	{ 

		if ((i) % 6 == 0 && charArray[i] != '\0') 
		{
			for (int j = length; j > (i); j--) {

				charArray[j] = charArray[j - 1];  //Inserts Space Every 5 Letters
				
			}
			
			charArray[i] = ' ';
			length++;
			//cout << "This is the Length: " << length << endl; Testing
		}
	//	cout << charArray[i];

	}


	for (int j = 0; j < length - 1; j++)
	{
		charArray[j] = charArray[j + 1];  // shrinks array removing first space. 
		
	}
	
	charArray[length - 1] = '\0';
	
	// cout << "This is the Length: " << length << endl;
	
	for (int i = 0; i < (length); i++)
	{
			
		charArray[i] = transform(charArray[i]);   // sends array to transform function to make upper case
	//	cout << charArray[i];
	}
	
	cout << endl; 
	write(charArray, out);  // write to file 


}

/*********************************************************************
** Function: oneArray
** Description: Increases size of array by 25% for blank character insert
** Parameters: char * itemList, int size
** Pre-Conditions:  OrderedOutput DoFilter()
** Post-Conditions: Transform()
** Citation: Assignment1 6/30/2016
*********************************************************************/


char * OrderedOutput::oneArray(char * itemList, int size) {
	
	int oldSize = size;   
	size = size * 1.25;
	char * array2 = new char[size];

	for (int i = 0; i < oldSize; i++) {

		array2[i] = itemList[i];

	}

	delete[] itemList; 
	itemList = array2;

	return itemList; 

	
}

/*********************************************************************
** Function: oneArray
** Description: Increases size of array by 20% for blank character insert
** Parameters: char * itemList, int size
** Pre-Conditions:  OrderedOutput DoFilter()
** Post-Conditions: write()
** Citation:
*********************************************************************/


char OrderedOutput::transform(char ch)
{	
	

	ToUpper u = ToUpper();  
	ch = u.transform(ch); // call ToUpper to uppercase file
	return ch;
}
