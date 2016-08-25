
/*********************************************************************
** Program Filename: main Lab D
** Author: Tyler Forrester
** Date: 7/17/2016
** Description: A file Filter program
** Input: text file
** Output: transfomred text file
** Citations:http://www.cplusplus.com/doc/tutorial/files/ and http://www.cplusplus.com/forum/general/76107/ and http://code.runnable.com/UpSpP5ymsslIAAFo/reading-a-file-into-an-array-for-c%2B%2B-and-fstream
********************************************************************/


#include "encryption.hpp"
#include "OrderedOutput.hpp"
#include "copy.hpp"
#include "ToUpper.hpp"
#include "InputValid.hpp"

using std::ifstream;
using std::cout;
using std::ofstream;
using std::endl;


int main() {
	void displayMenu();
	int getChoice(InputValid);
	void continueOn(InputValid);
	int choice;
	InputValid valid = InputValid();  // creates validation
	

	do {
		


		char b[75];
		char b1[75];
		displayMenu();
		choice = getChoice(valid);
		if (choice == 5) {

			break;
		}
		cout << "Please enter file name. This file will be opened." << endl;

		std::cin.getline(b, 75);
		ifstream in(b);   // read in File
					
		cout << endl;


		cout << "Please enter a file name. The output will be saved in this file. " << endl;
		std::cin.getline(b1, 75);
		ofstream out(b1);  // Readout File

			
			switch(choice)
			{
			case 1: {
				Copy c = Copy();  //
				c.doFilter(in, out);  // copy version of doFilter
				cout << "File has been successfully written" << std::endl;
				continueOn(valid);
				break;
			}
			case 2: {
				
				int key = valid.validateInt();
				Encryption e = Encryption(key); // encyption version of doFilter
				e.doFilter(in, out);
				cout << "File has been successfully written" << std::endl;
				continueOn(valid);
				break;
			
			}
			case 3: {
				ToUpper u = ToUpper();
				u.doFilter(in, out); // ToUpper version of doFilter
				cout << "File has been successfully written" << std::endl;
				continueOn(valid);
				break;
			}
			case 4: {
				OrderedOutput o = OrderedOutput();
				o.OrderedOutput::doFilter(in, out); // OrderedOutput version of doFilter
				cout << "File has been successfully written" << std::endl;
				continueOn(valid);
				break;
			}
			
			}

			
			cout << "returning to main menu. " << endl << endl;

		}while (true);

		return 0;
	
} 

/*********************************************************************
** Function: displayMenu
** Description: Displays Menu of Options 
** Parameters: void
** Pre-Conditions: Start of Program
** Post-Conditions: getChoice()
** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352
*********************************************************************/


void displayMenu() {


	cout << "\nWelcome to Lab D\nPlease Select a Number\n\n";
	cout << "1. Copy File to Another Location.\n";
	cout << "2. Encrypt a File.\n";
	cout << "3. SHOUT! (Uppercase a File).\n";
	cout << "4. Encrypt a File in the Traditional Formatting.\n";
	cout << "5. Quit the Program\n\n";


}
/*********************************************************************
** Function:  getChoice
** Description: gets number of Choice
** Parameters:  InputValid
** Pre-Conditions: DisplayMenu()
** Post-Conditions: Switch and Array Entry
** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352
*********************************************************************/


int getChoice(InputValid valid) {

	int choice;
	choice = valid.validateInt();
	while (choice < 1 || choice > 5) {
		
		cout << "The only valid choices are 1 - 5. Please re-enter.\n";
		choice = valid.validateInt();

	}

	return choice;



}


/*********************************************************************
** Function:  continueOn
** Description: Pauses program after tasks
** Parameters: InputValid
** Pre-Conditions: switch case 1, case 2 and case 3
** Post-Conditions: displaymenu()
** Citation:
*********************************************************************/

void continueOn(InputValid valid) {
	char entry = '0';
	do {


		cout << "Please enter 'c' to continue.\n";
		entry = valid.validateChar();



	} while (entry != 'c');

}

