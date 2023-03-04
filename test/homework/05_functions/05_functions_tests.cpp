#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h" // include func.h file with function prototypes

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

// write test case for get_gc_content 
TEST_CASE("Verify get gc content returns correct percentage")
{
	REQUIRE(get_gc_content("AGCTATAG")== 37.5); // red green go
	REQUIRE(get_gc_content("CGCTATAG") == 50);  // red green go
	REQUIRE(get_gc_content("CGCTACCG") == 75);	// red green go
}
// all test cases pass

// write test case for get_dna_complement
TEST_CASE("Verify get dna complement returns correct string")
{
	REQUIRE(get_dna_complement("AAAACCCGGT") == " ACCGGGTTTT"); // red
	REQUIRE(get_dna_complement("CCCGGAAAAT") == " ATTTTCCGGG"); // red
}

// write test case for reverse_string
TEST_CASE("Verify reverse string returns mirror of string entered")
{
	REQUIRE(reverse_string("AGCTATAG") == " GATATCGA"); // red green go
	REQUIRE(reverse_string("CGCTATAG") == " GATATCGC"); // red green go
}
// all test cases pass