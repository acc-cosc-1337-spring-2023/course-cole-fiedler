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

    if(num1 > num2)
    {
        a = num1;
        b = num2;
    }
    else{
        a = num2;
        b = num1;
    }
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int menu_choice()
{
    int choice = 0;
    int num_factorial = 0;
    int greatest_divisor = 0;
    int num = 0;
    int num1 = 0;
    int num2 = 0;
    char exit = ' ';

    do
    {
        cout<<"Please choose from the following options:\n\t1 - Factorial\n\t2 - Greatest Common Divisor\n\t3 - Exit\n";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            cout<<"Please enter a number:\t";
            cin>>num;
            num_factorial = factorial(num);
            cout<<"\n\nYou entered:\t"<<num<<".\nWhich has a factorial of:\t"<<num_factorial;
            break;

            case 2:
            cout<<"Please enter a number:\t";
            cin>>num1;
            cout<<"Please enter a second number:\t";
            cin>>num2;
            greatest_divisor = gcd(num1, num2);
            cout<<"\n\nYou entered:\t"<<num1<<" and "<<num2;
            cout<<"\nThe greatest common divisor between those numbers is:\t"<<greatest_divisor;
            break;

            case 3:
            cout<<"nter 'Y' if you wish to exit this program. Any other choice will run the menu again.\n";
            cin>>exit;
                if(exit == 'Y' || exit == 'y')
                {
                    cout<<"Exiting program";
                }
                else
                {
                    menu_choice();
                }
            break;
        }
    }
    while(exit != 'Y' || exit != 'y');

    return 0;
}