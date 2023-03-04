//write include statements
#include <iostream> // Step 1A Include input/output stream
#include "hwexpressions.h" // Step 1A Include header file and functions

//write namespace using statement for cout
using std::cout; using std::cin; // Step 1A Tell c++ where exactly to pull cout and cin from

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0; // Step 2A All doubles initialized w/ value of zero until user inputs desired values
	double tip_rate = 0; // Step 2A 
	double tip_amount = 0; // Step 2A
	double tax_amount = 0; // Step 2A
	double total = 0; // Step 2A

	cout<<"Please enter the total for your meal:\t"; //Prompt user to enter value associated with meal amount
	cin>>meal_amount; //Step 2B capture meal amount from keyboard

	tax_amount = get_sales_tax_amount(meal_amount); // Step 2C call function, pass meal amount, return result to tax amount variable

	cout<<"Please enter the desired tip rate. (For 15 percent, enter .15):\t"; // Propmt user to enter tip rate
	cin>>tip_rate; // Step 2D capture tip rate from keyboard

	tip_amount = get_tip_amount(meal_amount, tip_rate); // Step 2E call function, pass meal amount and tip rate, return result to tip amount variable
	total = tip_amount + tax_amount + meal_amount;

	cout<<"Here is your receipt:\nMeal Amount:\t\t"<<meal_amount<<"\nSales Tax:\t\t"
	<<tax_amount<<"\nTip Amount:\t\t"<<tip_amount<<"\nTotal:\t\t"<<total<<"\n"; // Step 2G display receipt

	return 0;
}


/*
1) In the folder src/homework/02_expressions, open main.cpp. 
a) Add the include statements for hwexpressions.h  and cin and cout
2) In the main function, write code to use the functions get_sales_tax_amount and get_tip_amount.
a) Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total.
b) Use the cin object to capture the number from the keyboard, assign the number to meal_amount.
c) Call the get_sales_tax_amount with meal_amount as its parameter, 
   assign the return value of the function get_sales_tax_amount to the tax_amount variable. 
d) Capture the tip rate from keyboard and assign the value to tip_rate variable.
e) Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
   set function get_tip_amount return value to tip_amount.
f) Add tip_amount, tax_amount and meal_amount , and save result to total variable.
g) Display a receipt (formatting the number decimal spaces is optional): 
     Meal Amount:           20
     Sales Tax:             1.35       
     Tip Amount:            3
     Total:                 24.35
*/