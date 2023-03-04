//write include statement for decisions header
#include "decisions.h"      //include function prototypes

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    if (grade <= 100 && grade >= 90) // grade between 90-100 return A
    {
        string letter = "A";
        return letter;
    }
    else if (grade <= 89 && grade >= 80) // grade between 80-89 return B
    {
        string letter = "B";
        return letter;
    }
    else if (grade <= 79 && grade >= 70) // grade betweeen 70-79 return C
    {
        string letter = "C";
        return letter;
    }
    else if (grade <= 69 && grade >= 60) // grade between 60-69 return D
    {
        string letter = "D";
        return letter;
    }
    else if (grade <= 59 && grade >= 00) // grade between 00-59 return F
    {
        string letter = "F";
        return letter;
    }
    else // grade greater than 100 or less than 0 return error message
    {
        string letter = "Invalid entry, number is out of range.";
    }
}

string get_letter_grade_using_switch(int grade)
{
    std::string letter = " ";

    switch(grade <= 100 && grade >= 90)
    {
     case 1:
        letter = "A";
        return letter;
        break;
            case 0:
            switch(grade <= 89 && grade >= 80)
            {
             case 1:
                letter = "B";
                return letter;
                break;
                    case 0:
                    switch(grade <= 79 && grade >= 70)
                    {
                     case 1:
                     letter = "C";
                     return letter;
                     break;
                        case 0:
                        switch(grade <= 69 && grade >= 60)
                        {
                         case 1:
                         letter = "D";
                         return letter;
                         break;
                            case 0:
                            switch(grade <= 59 && grade >= 00)
                            {
                                case 1:
                                letter = "F";
                                return letter; 
                                break;
                                    case 0:
                                    switch(grade < 0 || grade > 100)
                                    {
                                        case 1:
                                        letter = "Invalid entry, number is out of range.";
                                        return letter;
                                        break;
                                    }
                            }
                        }
                    }
            }
    }
    
     
}
// The following function definition is for a switch that will interprete the user's
// selection from the main menu. 
string menu(int num)
{
    string option;

    switch(num)
    {
     case 1:
        option = "Option 1";
        return option;
        break;
     case 2:
        option = "Option 2";
        return option;
        break;
     case 3:
        option = "Option 3";
        return option;
        break;
    }
}