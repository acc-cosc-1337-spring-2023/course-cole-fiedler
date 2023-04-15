#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_player returns proper value when X is passed as first player")
{
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.get_player_3() == "X"); // require player x
}

TEST_CASE("Verify get_player returns proper value when O is passed as first player")
{
	TicTacToe3 game;
	std::string first_player = "O";
	game.start_game_3(first_player);
	REQUIRE(game.get_player_3() == "O");  // require player O
}

TEST_CASE("Verify check board full executes properly and returns C in the result of a tie")
{
	// Verify full board ends game with winner "C"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(9);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(7);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(8);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(6);
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "C"); // require c winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 1, 4, 7")
{
	// Verify 3 X's in first column ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(7); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 2, 5, 8")
{
	// Verify 3 X's in second column ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(8); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 3, 6, 9")
{
	// Verify 3 X's in third column ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(6); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(9); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 1, 2, 3")
{
	// Verify 3 X's in first row ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 4, 5, 6")
{
	// Verify 3 X's in second row ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(6); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 7, 8, 9")
{
	// Verify 3 X's in third row ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(7); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(8); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(9); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify win by diagonal executes properly when X is in postion 1, 5, 9")
{
	// Verify 3 X's diagonal left to right ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(9); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify win by diagonal executes properly when X is in postion 3, 5, 7")
{
	// Verify 3 X's diagonal right to left ends game with winner "X"
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(7); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify that x win counter increments properly")
{
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "X"); // require x winner
}

TEST_CASE("Verify that o win counter increments properly")
{
	TicTacToe3 game;
	std::string first_player = "O";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2); // X
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5); // O
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3); // X
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "O"); // require O winner
}

TEST_CASE("Verify that ties counter increments properly")
{
	TicTacToe3 game;
	std::string first_player = "X";
	game.start_game_3(first_player);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(1);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(5);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(9);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(3);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(7);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(8);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(2);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(4);
	REQUIRE(game.game_over_3() == false);
	game.mark_board_3(6);
	REQUIRE(game.game_over_3() == true);
	REQUIRE(game.get_winner_3() == "C"); // require c winner
}

//===============================================================================//
//========================== Tic Tac Toe 4 Test Cases ===========================//
//===============================================================================//

TEST_CASE("Verify get_player returns proper value when X is passed as first player in 4x4")
{
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.get_player_4() == "X"); // require player x
}

TEST_CASE("Verify get_player returns proper value when O is passed as first player in 4x4")
{
	TicTacToe4 game;
	std::string first_player = "O";
	game.start_game_4(first_player);
	REQUIRE(game.get_player_4() == "O");  // require player O
}

TEST_CASE("Verify check board full 4x4 executes properly and returns C in the result of a tie")
{
	// Verify full board ends game with winner "C"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(3);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(4);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(6);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(5);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(7);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(8);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(9);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(10);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(12);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(11);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(13);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(14);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(16);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(15);
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "C"); // require c winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 1, 5, 9, 13")
{
	// Verify 4 X's in first column ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(5); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(6); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(9); // x
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(10); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(13); // x
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 2, 6, 10, 14")
{
	// Verify 4 X's in second column ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(6); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(5); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(10); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(9); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(14); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 3, 7, 11, 15")
{
	// Verify 4 X's in third column ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(3); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(7); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(6); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(11); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(10); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(15); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by column executes properly when X is in postion 4, 8, 12, 16")
{
	// Verify 4 X's in fourth column ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(4); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(3); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(8); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(7); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(12); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(11); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(16); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 1, 2, 3, 4")
{
	// Verify 4 X's in first row ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(5); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(6); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(3); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(7); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(4); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 5, 6, 7, 8")
{
	// Verify 4 X's in second row ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(5); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(6); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(7); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(3); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(8); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 9, 10, 11, 12")
{
	// Verify 4 X's in third row ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(9); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(10); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(11); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(3); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(12); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by row executes properly when X is in postion 13, 14, 15, 16")
{
	// Verify 4 X's in fourth row ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(9); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(10); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(11); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(3); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(12); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by diagonal executes properly when X is in postion 1, 6, 11, 16")
{
	// Verify 4 X's diagonal left to right ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(6); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(7); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(11); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(9); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(16); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}

TEST_CASE("Verify win by diagonal executes properly when X is in postion 4, 7, 10, 13")
{
	// Verify 4 X's diagonal right to left ends game with winner "X"
	TicTacToe4 game;
	std::string first_player = "X";
	game.start_game_4(first_player);
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(4); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(1); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(7); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(2); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(10); // X
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(9); // O
	REQUIRE(game.game_over_4() == false);
	game.mark_board_4(13); // X
	REQUIRE(game.game_over_4() == true);
	REQUIRE(game.get_winner_4() == "X"); // require x winner
}
