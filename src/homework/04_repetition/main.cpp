//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using std::cout; 
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
	int choice = 0;
	auto continue_menu = 'n';

	do
	{
		cout<<"Please choose from the following menu options:\n\t\t1-Factorial\n\t\t2-Greatest Common Divisor\n\t\t3-Exit\n";
		cin>>choice;
		menu_choice(choice);
		cout<<"Enter y to continue...\n";
		cin>>continue_menu;
	}while (continue_menu == 'y' || continue_menu == 'Y');

	return 0;
}