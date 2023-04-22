//write include statements
#include <iostream>		//include input/output stream
#include "data_types.h" //show c++ where to find the function

//write namespace using statement for cout
using std::cout; using std::cin;  //specify which cin and cout c++ should use
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num = 0; //Step A
	cout<<"Enter a value for the variable num: ";
	cin>>num; //Step B

	int result = multiply_numbers(num); //Step C
	cout<<"The result is: "<<result<<"\n"; 

	int num1 = 4; //Step D
	result = multiply_numbers(num1);
	cout<<"When num = 4, the result is "<<result<<"\n";



	return 0;
}
