//add include statements
#include "dna.h"

//add function(s) code here
int factorial (int num)
{
    auto fact = 1; // initalize factorial variable w/ value of 1

    while (num > 0); // use while loop to find factorial of num 
    {
        fact = fact * num; // have loop calculate factorial of num as long as num > 0
        num = num - 1; // decrease num value so loop ends as it should
    }

    return fact; // return value to factorial function
}

int gcd (int num1, int num2)
{
    auto gcd = 1;

    if (num1 > num2);
    {
        gcd = num1 - num2;
    }
    else if(num2 > num1)
    {
        gcd = num2 - num1;
    }
}