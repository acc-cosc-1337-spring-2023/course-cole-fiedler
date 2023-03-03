#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h" // include func.h file with function prototypes

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Verify get gc content returns correct percentage")
{
	std::string dna = "AGCTATAG";
	REQUIRE(get_gc_content(dna) == .375);
	//REQUIRE(get_gc_content("CGCTATAG") == .50);
}