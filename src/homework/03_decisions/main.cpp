//write include statements
#include <iostream>  //include input output stream
#include "decisions.h" //include decisions.h

//specify which library cout, cin, string should come from
using std::cout; using std::cin; using std::string;

int main() 
{
	int num = 0; //initialize num variable for menu choice function
	int grade = 0; // initialize grade variable for grade functions
	string letter = " "; //initialize letter for grade functions

	cout<<"\t\t\tMain Menu\n\n";
	cout<<"Please make a selection from the following options:";
	cout<<"\n1 - Letter grade using if\n2 - Letter grade using switch\n3 - Exit\n\n";
	cin>>num;

  	if (num == 1)
	{	
		cout<<"\nPlease enter the grade as a whole number:\t";
		cin>>grade;

		if(grade > 100 || grade < 0)
		{
			cout<<"Invalid entry, number is out of range\n";
		}
		else
		{
			letter = get_letter_grade_using_if(grade);
			cout<<"The grade is "<<letter<<".\n";
		}
		  
	}
	else if (num == 2)
	{
		cout<<"\nPlease enter the grade as a whole number:\t";
		cin>>grade;
		
		if(grade > 100 || grade < 0)
		{
			cout<<"Invalid entry, number is out of range\n";
		}
		else
		{
			letter = get_letter_grade_using_switch(grade);
			cout<<"The grade is "<<letter<<".\n";
		}
	}
	else if (num == 3)
	{
		cout<<"\nExiting program.\n";
	}
	else
	{
		cout<<"\nInvalid entry, please enter a number between 1 and 3\n";
	}
	
	return 0;
}