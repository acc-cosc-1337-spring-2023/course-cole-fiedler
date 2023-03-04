//add include statements
#include "func.h"
#include <iostream>

using std::string; using std::cout; using std::cin;

//add function code here
double get_gc_content(const string& dna)         // evaluate string and output percentage of G and C values in the string
                                                 // ex: AGCTATAG is 3/8 or 37.5%
{
    double cg_count = 0;
    double percent = 0;

    for(int i = 0; i < dna.size(); i++)
    {
        if(dna[i] == 'c' || dna[i] == 'C' || dna[i] == 'g' || dna[i] == 'G') // evaluate dna[i] char value
        {
            cg_count++;
        }
    }
    return percent = (cg_count / dna.length()) * 100;
}

string get_dna_complement(string dna) // output matching dna sequence by converting complementary values to matching value
                                      // ex: AAAACCCGGT becomes ACCGGGTTTT (A becomes T, T becomes A, C becomes G, G becomes C)
                                      // Maintain alphabetical order in output
{   
    std::string comp = "          "; // initialize comp to store complement string
    std::string rev_comp = " "; // initialize reverse complement to store new string
    int n = dna.length();
   
    for(int i = dna.length() - 1; i >= 0; i--)
    {
        if(dna[i] == 't' || dna[i] == 'T')
        {
            comp[i] = 'A';
        }
        else if(dna[i] == 'g' || dna[i] == 'G')
        {
            comp[i] = 'C';
        }
        else if(dna[i] == 'c' || dna[i] == 'C')
        {
            comp[i] = 'G';
        }
        else if(dna[i] == 'a' || dna[i] == 'A')
        {
            comp[i] = 'T';
        }
    }
    for (int i = n - 1; i >= 0; i--) // use for loop to evaluate dna and populate rev
        rev_comp.push_back(comp[i]);
    return rev_comp;
}

string reverse_string(string dna) // output the opposite string that would complement the string as string is input
                                  // ex: input GTCA outpu TGAC (mirror image)
{
    
    std::string rev = " "; // initialize reverse to store new string
    int n = dna.length();
   
    for (int i = n - 1; i >= 0; i--) // use for loop to evaluate dna and populate rev
        rev.push_back(dna[i]);
    return rev;
}

void display_menu() // this function displays menu and keeps excess code out of main
{
    auto choice = 0;

    do
    {
        cout<<"Please select from the following Menu options:";
        cout<<"\nMain Menu:";
        cout<<"\n\n1 - Get GC Content Percentage\n2 - Get DNA Complement\n3 - Exit\n\n";
        cin>>choice;
        run_menu(choice);
    }while (choice != 3); // exit do while loop if user enters 3 
}

void run_menu(int choice) // this function runs the menu and evaluates user input to call correct function based on input
{
    string dna = " "; // 

    if(choice == 1)
    {
        double GC_percent = 0; // initialize double returned by get_gc_content
       
        cout<<"\nPlease enter the DNA sequence you wish to evaluate:\t\t"; // prompt user for string input
        cin>>dna; // capture input and assign to string dna
        GC_percent = get_gc_content(dna); // assign double value to value returned by function
        cout<<"\nThe GC content of "<<dna<<" is "<<GC_percent<<"%\n\n"; // display the original input and the returned value
    }
    else if(choice == 2)
    {
        string dna_complement = " "; // initialize string returned by get_dna_complement

        cout<<"\nPlease enter the DNA sequence you wish to evaluate:\t\t"; // prompt user for string input
        cin>>dna; // capture input and assign to string dna
        dna_complement = get_dna_complement(dna); // assign string value to value returned by function 
        cout<<"\nThe DNA complement of "<<dna<<" is "<<dna_complement<<".\n\n"; // display origninal input and returned value
    }
    else if(choice == 3) 
    {
        cout<<"\nExiting.......\n";
    }
    else // handle invalid menu entry
    {
        cout<<"\nInvalid menu entry....\n";
        display_menu(); // call display menu to allow user to run menu again
    }
}