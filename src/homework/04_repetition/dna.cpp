//add include statements
#include "dna.h"

//add function(s) code here
int factorial (int num)
{
    auto fact = 1; // initalize factorial variable w/ value of 1

    while (num > 0) // use while loop to find factorial of num 
    {
        fact = fact * num; // have loop calculate factorial of num as long as num > 0
        num = num - 1; // decrease num value so loop ends as it should
    }

    return fact; // return value to factorial function
}

int gcd(int num1, int num2)
{
    int a, b, r; 

    if(num1 > num2) // assign greater number to a and lower to b
    {
        a = num1;
        b = num2;
    }
    else{ // assign greater number to a and lower to b
        a = num2;
        b = num1;
    }
    while(b != 0){ // determine gcd as long as b is not 0
        r = a % b;
        a = b;
        b = r;
    }
    return a; //return gcd
}

void menu_choice(int choice)
{
    auto num = 0; //initalize variables 
    auto num_factorial = 0;
    auto num1 = 0;
    auto num2 = 0;
    auto num1_num2_gcd = 0;

    if(choice == 1)//get user input, call factorial function and display factorial
    {
        cout<<"Please enter a number:\t";
        cin>>num;
        num_factorial = factorial(num);
        cout<<"\nThe factorial of "<<num<<" is "<<num_factorial<<".\n\n";
    }
    else if(choice == 2)//get user input, call gcd function and display gcd
    {
        cout<<"Please enter a number:\t";
        cin>>num1;
        cout<<"\nPlease enter a second number:\t";
        cin>>num2;
        num1_num2_gcd = gcd(num1, num2);
        cout<<"\nThe greatest common divisor of "<<num1<<" and "<<num2<<" is "<<num1_num2_gcd<<".\n\n";
    }
    else if(choice == 3)//get user input,determine whether or not user wants to end loop
    {
        auto exit = 'n';

        do
        {
            cout<<"Are you sure you wish to exit?\nEnter y to exit.\n";
            cin>>exit;

        } while(exit != 'y' || exit != 'y');
    }
}