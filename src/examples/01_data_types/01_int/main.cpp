#include "int.h" // help c++ find echo_variable fn 

#include <iostream>

using std::cout;

int main()
{
    //int num = 5 <-- We can do this instead and assign 5 to num. We would then type:
    //cout<<"Echo variable is: " <<echo_variable(num) << "\n";
    cout<<"Echo variable is: " <<echo_variable(5)<< "\n";
    return 0;
}