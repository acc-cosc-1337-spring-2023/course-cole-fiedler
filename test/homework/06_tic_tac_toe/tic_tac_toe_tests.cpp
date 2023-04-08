#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_player returns proper value when X is passed as first player")
{
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.get_player() == "X"); // require player x
}

TEST_CASE("Verify get_player returns proper value when O is passed as first player")
{
	TicTacToe game;
	std::string first_player = "O";
	game.start_game(first_player);
	REQUIRE(game.get_player() == "O");  // require player O
}

TEST_CASE("Verify check board full executes properly and returns C in the result of a tie")
{
	// Verify full board ends game with winner "C"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C"); // require c winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 1, 4, 7")
{
	// Verify 3 X's in first column ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 2, 5, 8")
{
	// Verify 3 X's in second column ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 3, 6, 9")
{
	// Verify 3 X's in third column ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 1, 2, 3")
{
	// Verify 3 X's in first row ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 4, 5, 6")
{
	// Verify 3 X's in second row ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 7, 8, 9")
{
	// Verify 3 X's in third row ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(7); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify win by diagonal executes properly when X is in postion 1, 5, 9")
{
	// Verify 3 X's diagonal left to right ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify win by diagonal executes properly when X is in postion 3, 5, 7")
{
	// Verify 3 X's diagonal right to left ends game with winner "X"
	TicTacToe game;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}

TEST_CASE("Verify that x win counter increments properly")
{
	TicTacToe game;
	TicTacToeManager mgr;
	std::string first_player = "X";
	game.start_game(first_player);
	REQUIRE(game.game_over() == false);
	game.mark_board(1); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); // X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); // O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); // X
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X"); // require x winner
}
