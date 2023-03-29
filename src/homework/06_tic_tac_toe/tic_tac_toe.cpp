//cpp
#include <tic_tac_toe.h> // include .h file for class TTT
#include <iostream> // include input/output stream
#include <string> // include std::string
#include <vector> // include std::vector

using std::cout; using std::cin; using std::string; using std::vector;
// tell c++ specifically which cout, cin, string, and vector to use 
// from standard library

bool TicTacToe::game_over() // returns check board full function return value
{
    bool full = false; // initialize full = false 
    full = check_board_full(); // assign full to return value of check board full
    return full; // return bool value to function
}

void TicTacToe::start_game(std::string first_player) // accepts first player parameter and gets game ready to start
{
    player = first_player; // assign private string varaiable player the value of first_player
    clear_board(); // call clear board function to reset vector
}

void TicTacToe::mark_board(int position) // accepts position pararmeter and marks vector with position selected by player
{
    pegs[position -1] = player; // position -1 = pegs index to be marked. user sees 1-9 c++ sees 0-8
    set_next_player(); // call set next player private function
}

string TicTacToe::get_player() // return private variable player 
{
    return player; // returns player
}

void TicTacToe::display_board() // iterate vector of strings to display a board shape
{
    for(int i = 0; i <= pegs.size(); i++) // iterate over entire vector of pegs
    {
        if(i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7)
        {
            std::cout<<pegs[i]<<" | "; // puts vertical lines where necessary 
        }
        else
        {
            std::cout<<pegs[i]<<std::endl; // starts a new line where necessary
        }
    }
}

void TicTacToe::set_next_player() // uses if/else structure to assign private player variable to next player
{
    if(player == "X") // if x just went, o is up
    {
        player = "O";
    }
    else if (player == "O") // if o just went, x is up
    {
        player = "X";
    } // no return value becasue -player has been modified 
}

bool TicTacToe::check_board_full() // iterate over vector pegs with boolean logic to determine if board is full
{
    bool full = true; // initialize full to true then test whether full is actually true or not
    for(int i = 0; i <= pegs.size(); i++) // iterate over vector to test each index location
    {
        if(pegs[i] == " ")
        {
            full = false; // if even one blank space exists, the board is not full
        }
    }
    return full; // return bool value to game_over() to determine if game is over or not
}   

void TicTacToe::clear_board() // sets all 9 elements of vector pegs to blank space
{
    for(int i = 0; i < pegs.size(); i++) // iterate over vector pegs
    {
        pegs[i] = " "; // assign each element to blank space 
    }
}

void run_menu()
{
    std::string first_player = " ";
    std::cout<<"\nEnter X or O. Capital leters only...\t";
    cin>>first_player;
    if(first_player == "X" || first_player == "O")
    // validate user input to ensure they entered an acceptable value for first_player
    {
        run_game(first_player);
    }
    else
    // if acceptable value not provided, display instructions and re run menu function
    {
        std::cout<<"Invalid choice, please enter X or O....\n";
        run_menu();
    }
}

void run_game(std::string first_player) // take validated input from user and feed into run game function
{
    bool over = false; // initialize over = false for do while loop
    int position = 0; // initialize postion = 0 for mark board function
    char choice = ' '; // initialize choice = ' ' for user choice of whether or not to play again

    TicTacToe game; // create instance of TicTacToe class named game
    game.start_game(first_player); // game calls start game function from TTT class
    do
    {
        std::cout<<"Please enter a postion to mark...1-9\t";
        std::cin>>position;
        if(position > 0 && position < 10)
        // validate position input. if acceptable, pass to mark board function
        {
            game.mark_board(position);
            over = game.game_over();
            game.display_board();
        }
        else
        // handle bad data. avoid garbage in garbage out
        {
            game.start_game(first_player); // if bad input is given, call start game function and try again
        }
    } while (over != true); // continue looping while over is not equal to true

    std::cout<<"Game over!!!\nWould you like to play again?...Y/N\t";
    std::cin>>choice;
    if(choice == 'y' || choice == 'Y')
    {
        run_menu();
    }
    else
    {
        std::cout<<"Exiting....\n";
    }
}