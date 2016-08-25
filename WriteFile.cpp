



#include "WriteFile.hpp"
/*********************************************************************
** Section: Open File and read into Array
** Description: Opens Files stores in a cstring like array
** Parameters: example.txt, array, array_size
** Pre-Conditions: file "example.txt" must be present in directory
** Post-Conditions: recursion and writing array to file.
** Citation: http://code.runnable.com/UpSpP5ymsslIAAFo/reading-a-file-into-an-array-for-c%2B%2B-and-fstream "Reading a File into an Array [C++ and fstream]" Copyright: 2015 Runnable Accessed July 5, 7:30 pm
*********************************************************************/
char * WriteFile::read(ifstream &fin)
{
	//char b[75];
	
	int array_size = 50; // define the size of character array
	char * array = new char[array_size]; // allocating an array of 1kb
	int position = 0; //this will be used incremently to fill characters in the array 
	bool exception = false;
		do {
			exception = false; 
		
		
		//	cout << "Please enter file name. This file will be opened" << endl;

		//	std::cin.getline(b, 75);

		//	cout << endl;


			// ifstream fin(b); //opening an input stream for file test.txt

			try {
				/*checking whether file could be opened or not. If file does not exist or don't have read permissions, file
				stream could not be opened.*/
				if (!(fin.is_open())) {

					throw 10;  // throws error
				}

				//file opened successfully so we are here
				cout << "Reading data from file into array" << endl << endl;
				//this loop run until end of file (eof) does not occur
				while (!fin.eof())  // returns true when the end of the file is reached
				{
					if (position == array_size) {
						// doubles size of array
						int oldSize = array_size;  // for replacement
						array_size = array_size + array_size; // array size doubles
						char * array2 = new char[array_size];   // creates new array of double size

						for (int i = 0; i < oldSize; i++) {

							array2[i] = array[i];  // copy values to new array

						}

						delete[] array; // delete old array
						array = array2; // assign array point to new array of double size

					}

					fin.get(array[position]); //reading one character from file to array
					position++;

				}
				array[position - 1] = '\0'; //placing character array terminating character

				if (array[0] == '\0') {

					throw 'a';
				}
			
			}
			catch (int x) // catches int error
			{
				cout << "File could not be opened." << endl << endl;
				exception = true; 
			}
			catch (char a) { // char for no data in file

				cout << "File has no data." << endl << endl; // throws error for no data
				exception = true; 
			}
		} while (exception == true);

	return array;
}

/*********************************************************************
** Function: writes to file
** Description: writes to file
** Parameters: example.txt, array
** Pre-Conditions: file must be read in and recursed
** Post-Conditions: end of main
** Citation: http://www.cplusplus.com/doc/tutorial/files/ "Input/output with files" Accessed July 5, 8:30 pm
*********************************************************************/

void WriteFile::write(char * array, ofstream &myfile1)
{
//	char b1[75];
//	cout << "Please enter a file name. The string will be saved in this file. " << endl;

//	std::cin.getline(b1, 75);

//	ofstream myfile1(b1);
	try {

		if (!(myfile1.is_open())) // if file cannot be opened throws error
		{
			throw 10;
		}
		{
			for (int i = 0; array[i] != '\0'; i++) {

				myfile1 << array[i];


			}
		//	cout << "Successfully written to file" << endl;
			myfile1.close();
		}
	}
	catch (...)  // catchs any exception type  
	{
		cout << "File could not be opened."; // prints out unable to open file
	
	}
	
	delete[] array; // deallocate memory

}
