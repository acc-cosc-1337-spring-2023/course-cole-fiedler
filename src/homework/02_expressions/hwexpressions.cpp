#include "expressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
//In file hwexpressions.cpp  write function code, multiply tax_rate and meal_amount and return their product
double get_sales_tax_amount(double meal_amount) // Write Code Step B
{
	double TAX_RATE = 0.0675; //TAX_RATE a named constant because it won't be changing outside of test cases
	return meal_amount * TAX_RATE;
}
// In file hwexpressions.cpp, write function code to multiply  meal_amount and tip_rate, return their product.
double get_tip_amount (double meal_amount, double tip_rate) // Write Code Step D
{
	return meal_amount * tip_rate;
}
                 




