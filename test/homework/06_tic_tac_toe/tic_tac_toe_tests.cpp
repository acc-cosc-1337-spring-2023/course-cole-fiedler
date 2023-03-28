#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify tic tac toe program fills vector and terminates when full")
{
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
}