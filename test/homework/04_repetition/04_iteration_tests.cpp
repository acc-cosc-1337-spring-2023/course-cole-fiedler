#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h" // include dna.h

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

// Write unit test for factorial function
TEST_CASE("Test factorial function", "Verify function produces accurate factorials for num value")
{
	REQUIRE(factorial(3) == 6); // red green go
	REQUIRE(factorial(5) == 120); // red green go
	REQUIRE(factorial(6) == 720); // red green go
}
// All 3 assertions pass 

// Write unit test for gcd function
TEST_CASE("Test gcd function", "Verify function produces accurate gcd for num1 and num2 values")
{
	REQUIRE(gcd(5,15) == 5); // red green go
	REQUIRE(gcd(21,28) == 7); // red green go
	REQUIRE(gcd(25, 100) == 25); // red green go
}
// All 3 assertions pass