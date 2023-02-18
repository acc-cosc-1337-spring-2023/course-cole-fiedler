#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"	   // Include function prototypes

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Verify letter grade using if returns correct results" , "verification of decision structure")
{
	REQUIRE(get_letter_grade_using_if(95) == "A"); // red green go
	REQUIRE(get_letter_grade_using_if(85) == "B"); // red green go
	REQUIRE(get_letter_grade_using_if(75) == "C"); // red green go
	REQUIRE(get_letter_grade_using_if(65) == "D"); // red green go 
	REQUIRE(get_letter_grade_using_if(55) == "F"); // red green go
	// All 5 assertions pass, continue to next function
}

TEST_CASE("Verify letter grade using switch returns correct results" , "verification of decision structure")
{
	REQUIRE(get_letter_grade_using_switch(95) == "A"); // red green go
	REQUIRE(get_letter_grade_using_switch(85) == "B"); // red green go
	REQUIRE(get_letter_grade_using_switch(75) == "C"); // red green go
	REQUIRE(get_letter_grade_using_switch(65) == "D"); // red green go
	REQUIRE(get_letter_grade_using_switch(55) == "F"); // red green go
	// All 5 assertions pass, continue to next function
}

TEST_CASE("Verify menu options using switch return correct results" , "verification of decision structure")
{
	REQUIRE(menu(1) == "Option 1"); // red green go
	REQUIRE(menu(2) == "Option 2"); // red green go
	REQUIRE(menu(3) == "Option 3"); // red green go
	// All 3 assertions pass 
}