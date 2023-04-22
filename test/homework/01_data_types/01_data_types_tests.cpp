#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

//Homework notes:
//create test case named "Test multiply numbers", create assertion using REQUIRE to verify 
//calling fn w/ parameter of 10 returns value of 50
//create second assertion using REQUIRE to verify calling fn w/ parameter of 2 returns value of 10
//test code as written
TEST_CASE("Test multiply numbers", "Validate math operation within function") //Step A
{
	REQUIRE(multiply_numbers(10) == 50); //Step B
	REQUIRE(multiply_numbers(2) == 10);  //Step C
}

//ALL TESTS PASSED
