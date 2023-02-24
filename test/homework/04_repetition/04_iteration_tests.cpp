#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h" // include dna.h

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test factorial function", "Verify function produces accurate factorials for num value")
{
	REQUIRE(factorial(3) == 6); // red green go
	REQUIRE(factorial(5) == 120); // red green go
	REQUIRE(factorial(6) == 720); // red green go
}
// All 3 assertions pass 

TEST_CASE("Test gdc function", "Verify function produces accurate gcd for two num values")
{
	REQUIRE(get_gcd(5,15) == 5);
}