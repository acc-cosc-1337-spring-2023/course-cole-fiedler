#include "decimals.h"//tells c++ where to find add to double 1 function

#include <iostream>//allows us to use cout

using std::cout; //explicitly using cout from std library. nowhere else

int main()
{
    //double num = 0;
    //cout<<"Adding to a double: " <<add_to_double_1(num)<< "\n";
    //you can either assign num the value of 0 or just use 0 in the function. same result 
    cout<<"Adding to a double: " <<add_to_double_1(0)<< "\n";
    return 0;
}