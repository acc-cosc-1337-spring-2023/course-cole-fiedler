#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"

TEST_CASE("Verify operator_precedence_1", "validate order of operations") 
{
	REQUIRE(operator_precedence_1(3, 6, 3) == 5);
}

TEST_CASE("Verify operator_precedence_2", "validate use of parenthesis") 
{
	REQUIRE(operator_precedence_2(3, 6, 3) == 3);
}

TEST_CASE("Verify convert int to double", "validate conversion of int to double") 
{
	REQUIRE(convert_to_double(10, .5) == 5);
}

TEST_CASE("Verify convert double to int", "validate conversion of double to int")
{
	REQUIRE(convert_double_to_int(10.5) == 10);
}
