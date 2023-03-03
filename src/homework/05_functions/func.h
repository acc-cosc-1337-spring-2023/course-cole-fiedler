//add function(s) prototype here
#include <string> // include string

using std::string; // specify where to find string
double get_gc_content(const string& dna);// evaluate string and output percentage of G and C values in the string
                                         // ex: AGCTATAG is 3/8 or 37.5%
string get_dna_complement(string dna);// output matching dna sequence by converting complementary values to matching value
                                      // ex: AAAACCCGGT becomes ACCGGGTTTT (A becomes T, T becomes A, C becomes G, G becomes C)
string reverse_string(string dna);// output the opposite string that would complement the string as string is input
                                  // ex: input GTCA outpu TGAC (mirror image)
void display_menu(); // this function displays menu and keeps excess code out of main

void run_menu(int choice); // this function runs the menu and evaluates user input to call correct function based on input