//cpp
#include <tic_tac_toe.h> // include .h file for class TTT
#include <iostream> // include input/output stream
#include <string> // include std::string
#include <vector> // include std::vector

using std::cout; using std::cin; using std::string; using std::vector;
// tell c++ specifically which cout, cin, string, and vector to use 
// from standard library

//
// *** TICTACTOE CLASS FUNCTIONS AND FREE FUNCTIONS ***
// 
bool TicTacToe::game_over() 
{
    bool is_game_over = false;
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        is_game_over = true;
        set_winner();
    }
    else if (check_board_full())
    {
        is_game_over = true;
        winner = "C";
    }
    return is_game_over;
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

string TicTacToe::get_player() const // return private variable player 
{
    return player; // returns player
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
    for(int i = 0; i < pegs.size(); i++) // iterate over vector to test each index location
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

std::string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    bool cwin = false; // initialize bool variable cwin to false
    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") // check left column for all X's
    {
        cwin = true; // if all values X, assign cwin to true, return cwin
        return cwin;
    }
    else if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") // check left column for all O's
    {
        cwin = true; // if all values O, assign cwin to true, return cwin
        return cwin;
    }
    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") // check middle column for all X's
    {
        cwin = true; // if all values X, assign to true, return cwin
        return cwin;
    }
    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") // check middle column for all O's
    {
        cwin = true; // if all values O, assign to true, return cwin
        return cwin;
    }
    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") // check right column for all X's
    {
        cwin = true; // if all values X, assign to true, return cwin
        return cwin;
    }
    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O") // check right column for all O's
    {
        cwin = true; // if all values O, assign to true, return cwin
        return cwin;
    }
    else
    {
        cwin = false; // if no column checks return true, assign cwin to false, return cwin
        return cwin;
    }
}

bool TicTacToe::check_row_win()
{
    bool rwin = false; // initialize bool variable rwin to false
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") // check top row for all X's
    {
        rwin = true; // if all values X, assign to true, return rwin
        return rwin;
    }
    else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") // check top row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin;
    }
    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") // check middle row for all X's
    {
        rwin = true; // if all values x, assign to true, return rwin
        return rwin;
    }
    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") // check middle row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin;
    }
    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") // check bottom row for all X's
    {
        rwin = true; // if all values x, assign to true, return rwin
        return rwin;
    }
    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") // check bottom row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin; 
    }   
    else // if no row checks return true, assign rwin to false, return rwin
    {
        rwin = false; 
        return rwin; 
    }
}

bool TicTacToe::check_diagonal_win()
{
    bool dwin = false; // initialize bool variable dwin to false
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") // check diag L to R for all X's
    {
        dwin = true; // if all values X, assign to true, return dwin
        return dwin;
    }
    else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") // check diag L to R for all O's
    {
        dwin = true; // if all values o, assign to true, return dwin
        return dwin;
    }
    else if(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") // check diag R to L for all X's
    {
        dwin = true; // if all values x, assign to true, return dwin
        return dwin;
    }
    else if(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O") // check diag R to L for all O's
    {
        dwin = true; // if all values o, assign to true, return dwin
        return dwin;
    }
    else // if no diag checks return true, assign dwin to false, return dwin
    {
        dwin = false;
        return dwin; 
    }
}

void TicTacToe::set_winner()
{
  if(player == "X") // if player is now X, winner is previous player, O
    {
        winner = "O";
    }
    else if (player == "O") // if player is now O, winner is previous player X
    {
        winner = "X";
    } // no return value becasue winner has been modified 
}

void TicTacToe::display_board() const // iterate vector of strings to display a board shape
{
    for(int i = 0; i < pegs.size(); i++) // iterate over entire vector of pegs
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

// TICTACTOE FREE FUNCTIONS

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
    std::string game_winner = " "; // initialize game winner with empty string 

    TicTacToe game; // create instance of TicTacToe class named game
    TicTacToeManager mgr; // create an instance of TicTacToeManager class named mgr 
    game.start_game(first_player); // game calls start game function from TTT class
    do
    {
        std::cout<<"Please enter a postion to mark...1-9\nEnter 0 to quit the game...\t";
        cin>>position;
        if(position > 0 && position < 10)
        {
            game.mark_board(position);
            over = game.game_over();
            game.display_board();
        }
        else if(position < 0 || position > 9) // if invalid input, prompt for correct input
        {
            std::cout<<"Invalid position entry...Please enter a position 1-9...\n";
            game.start_game(first_player);
        }
        else // over = true if user inputs 0 to end game 
        {
            over = true;
        }
    } while (over != true); // continue looping while over is not equal to true
    game_winner = game.get_winner();
    mgr.save_game(game);
    std::cout<<"Would you like to play again?...Y/N\t";
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


std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    /*
    int size = TicTacToe::pegs.size();

    for(int i = 0; i < size; i++) // iterate over entire vector of pegs
    {
        if(i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7)
        {
            out<<pegs[i]<<" | "; // puts vertical lines where necessary 
        }
        else
        {
            out<<pegs[i]<<std::endl; // starts a new line where necessary
        }
    }
    return out; 
    */
}

std::istream& operator>>(std::istream& in, const TicTacToe& game)
{
    /*
    auto position = 0;
    std::cout<<"Please enter a postion to mark...1-9\nEnter 0 to quit the game...\t";
    cin>>position;
    &game.mark_board(position);
    return in;
    */
}

//
// *** TICTACTOE MANAGER CLASS FUNCTIONS AND FREE FUNCTIONS ***
//

void TicTacToeManager::save_game(TicTacToe game)
{
    string game_winner = game.get_winner();
    TicTacToeManager mgr;
    // add tictactoe to games vector with pushback function 
    // call update winner count, pass winner from tictactoe to update x, o, or tie totals
    mgr.update_winner_count(game_winner);
    games.push_back(game_winner);
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    for(int i = 0; i < games.size(); i++)
    {
        if(winner == "X")
        {
            x_wins ++;
        }
        else if(winner == "O")
        {
            o_wins ++;
        }
        else
        {
            ties ++;
        }
    }
    cout<<"X wins:\t"<<x_wins<<std::endl;
    cout<<"O wins:\t"<<o_wins<<std::endl;
    cout<<"Ties:\t"<<ties<<std::endl;
}

/*
void TicTacToeManager::get_winner_total(int& o_wins, int& x_wins, int& ties)
{
    
}
*/

/* 
***OLD FUNCTIONS***

Delete display_board() const and replace display board code with overloaded ostream function
void TicTacToe::display_board() const // iterate vector of strings to display a board shape
{
    for(int i = 0; i < pegs.size(); i++) // iterate over entire vector of pegs
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

Original run_game code. replaced with overloaded ostream/istream operators 
void run_game(std::string first_player) // take validated input from user and feed into run game function
{
    bool over = false; // initialize over = false for do while loop
    int position = 0; // initialize postion = 0 for mark board function
    char choice = ' '; // initialize choice = ' ' for user choice of whether or not to play again
    std::string game_winner = " "; // initialize game winner with empty string 

    TicTacToe game; // create instance of TicTacToe class named game
    game.start_game(first_player); // game calls start game function from TTT class
    do
    {
        std::cout<<"Please enter a postion to mark...1-9\nEnter 0 to quit the game...\t";
        cin>>position;
        game.mark_board(position);
        over = game.game_over();
        game.display_board(); // replace this with overloaded ostream function. make sure it displays board 
        else if(position < 0 || position > 9) // if invalid input, prompt for correct input
        {
            std::cout<<"Invalid position entry...Please enter a position 1-9...\n";
            game.start_game(first_player);
        }
        else // over = true if user inputs 0 to end game 
        {
            over = true;
        }
    } while (over != true); // continue looping while over is not equal to true
    game_winner = game.get_winner();
    std::cout<<"Game Over!!! Player "<<game_winner<<" wins!\n";
    std::cout<<"Would you like to play again?...Y/N\t";
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

Original game_over() function code
bool TicTacToe::game_over() // returns check board full function return value
{
    bool full = false; // initialize full = false 
    full = check_board_full(); // assign full to return value of check board full
    return full; // return bool value to function
}

Updated game_over
Returned over before setting winner. Overly complicated decision structure 
bool TicTacToe::game_over() // 
{
    bool over = false;
    over = check_column_win();
    if(over == true) // if check column win returns true, return over
    {
        return over;
        set_winner();
    }
    else // if false, continue testing function return values
    {
        over = check_row_win(); // assign bool variable over with return value of row win function
        if(over == true) // if over true, return over, call set winner
        {
            return over;
            set_winner();
        }
        else // if false, continue testing function return values
        {
            over = check_diagonal_win(); // assign bool variable over with return value of diag win function
            if(over == true) // if over true, return over, call set winner
            {
                return over;
                set_winner();
            }
            else // if false, test to see if board is full
            {
                over = check_board_full(); // assign bool variable over with return value of board full function
                if(over == true) // if over true, assign winner to value of C and return over
                {
                    winner = "C";
                    return over;
                }
                else // if all functions return false, over is still false, return over 
                {
                    over = false;
                    return over;
                }
            }
        }
    }
}
*/