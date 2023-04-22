//write include statements
#include <iostream> //include input output stream
#include "dna.h" //include header file w/ function prototypes

//write using statements
using std::cout; //tell c++ which specific cout and cin to use 
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() //call main
{
	int choice = 0; //initialize variables
	auto continue_menu = 'n'; 

	do
	{
		cout<<"Please choose from the following menu options:\n\t\t1-Factorial\n\t\t2-Greatest Common Divisor\n\t\t3-Exit\n";
		cin>>choice;
		menu_choice(choice); //pass choice to menu function 
		cout<<"Enter y to continue...\n"; //prompt user for input
		cin>>continue_menu;
	}while (continue_menu == 'y' || continue_menu == 'Y'); // repeat loop as long as user enters y or Y

	return 0;
}