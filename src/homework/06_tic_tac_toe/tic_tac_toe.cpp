//cpp
#include <tic_tac_toe.h> // include .h file for class TTT
#include <iostream> // include input/output stream
#include <string> // include std::string
#include <vector> // include std::vector

using std::cout; using std::cin; using std::string; using std::vector;
// tell c++ specifically which cout, cin, string, and vector to use 
// from standard library

bool TicTacToe3::game_over_3()
{
    bool is_game_over = false;
    if (check_column_win_3() || check_row_win_3() || check_diagonal_win_3())
    {
        is_game_over = true;
        set_winner_3();
    }
    else if (check_board_full_3())
    {
        is_game_over = true;
        winner_3 = "C";
    }
    return is_game_over;
}

bool TicTacToe4::game_over_4()
{
    bool is_game_over = false;
    if (check_column_win_4() || check_row_win_4() || check_diagonal_win_4())
    {
        is_game_over = true;
        set_winner_4();
    }
    else if (check_board_full_4())
    {
        is_game_over = true;
        winner_4 = "C";
    }
    return is_game_over;
}

void TicTacToe3::start_game_3(std::string first_player) // accepts first player parameter and gets game ready to start
{
    player_3 = first_player; // assign private string varaiable player the value of first_player
    clear_board_3(); // call clear board function to reset vector
}

void TicTacToe4::start_game_4(std::string first_player) // accepts first player parameter and gets game ready to start
{
    player_4 = first_player; // assign private string varaiable player the value of first_player
    clear_board_4(); // call clear board function to reset vector
}

void TicTacToe3::mark_board_3(int position) // accepts position pararmeter and marks vector with position selected by player
{
    pegs_3[position -1] = player_3; // position -1 = pegs index to be marked. user sees 1-9 c++ sees 0-8
    set_next_player_3(); // call set next player private function
}

void TicTacToe4::mark_board_4(int position) // accepts position pararmeter and marks vector with position selected by player
{
    pegs_4[position -1] = player_4; // position -1 = pegs index to be marked. user sees 1-9 c++ sees 0-8
    set_next_player_4(); // call set next player private function
}

string TicTacToe3::get_player_3() const // return private variable player 
{
    return player_3; // returns player
}

string TicTacToe4::get_player_4() const // return private variable player 
{
    return player_4; // returns player
}

std::string TicTacToe3::set_next_player_3()
{
    if(player_3 == "X") // if x just went, o is up
    {
        player_3 = "O";
    }
    else if (player_3 == "O") // if o just went, x is up
    {
        player_3 = "X";
    } // no return value becasue player has been modified 
    return player_3;
}

std::string TicTacToe4::set_next_player_4()
{
    if(player_4 == "X") // if x just went, o is up
    {
        player_4 = "O";
    }
    else if (player_4 == "O") // if o just went, x is up
    {
        player_4 = "X";
    } // no return value becasue player has been modified 
    return player_4;
}

bool TicTacToe3::check_board_full_3() // iterate over vector pegs with boolean logic to determine if board is full
{
    bool full = true; // initialize full to true then test whether full is actually true or not
    for(int i = 0; i < pegs_3.size(); i++) // iterate over vector to test each index location
    {
        if(pegs_3[i] == " ")
        {
            full = false; // if even one blank space exists, the board is not full
        }
    }
    return full; // return bool value to game_over() to determine if game is over or not
}   

bool TicTacToe4::check_board_full_4() // iterate over vector pegs with boolean logic to determine if board is full
{
    bool full = true; // initialize full to true then test whether full is actually true or not
    for(int i = 0; i < pegs_4.size(); i++) // iterate over vector to test each index location
    {
        if(pegs_4[i] == " ")
        {
            full = false; // if even one blank space exists, the board is not full
        }
    }
    return full; // return bool value to game_over() to determine if game is over or not
}   

void TicTacToe3::clear_board_3() // sets all 9 elements of vector pegs to blank space
{
    for(int i = 0; i < pegs_3.size(); i++) // iterate over vector pegs
    {
        pegs_3[i] = " "; // assign each element to blank space 
    }
}

void TicTacToe4::clear_board_4() // sets all 9 elements of vector pegs to blank space
{
    for(int i = 0; i < pegs_4.size(); i++) // iterate over vector pegs
    {
        pegs_4[i] = " "; // assign each element to blank space 
    }
}

std::string TicTacToe3::get_winner_3()
{
    return winner_3;
}

std::string TicTacToe4::get_winner_4()
{
    return winner_4;
}

bool TicTacToe3::check_column_win_3()
{
    bool cwin = false; // initialize bool variable cwin to false
    if(pegs_3[0] == "X" && pegs_3[3] == "X" && pegs_3[6] == "X") // check left column for all X's
    {
        cwin = true; // if all values X, assign cwin to true, return cwin
        return cwin;
    }
    else if(pegs_3[0] == "O" && pegs_3[3] == "O" && pegs_3[6] == "O") // check left column for all O's
    {
        cwin = true; // if all values O, assign cwin to true, return cwin
        return cwin;
    }
    else if(pegs_3[1] == "X" && pegs_3[4] == "X" && pegs_3[7] == "X") // check middle column for all X's
    {
        cwin = true; // if all values X, assign to true, return cwin
        return cwin;
    }
    else if(pegs_3[1] == "O" && pegs_3[4] == "O" && pegs_3[7] == "O") // check middle column for all O's
    {
        cwin = true; // if all values O, assign to true, return cwin
        return cwin;
    }
    else if(pegs_3[2] == "X" && pegs_3[5] == "X" && pegs_3[8] == "X") // check right column for all X's
    {
        cwin = true; // if all values X, assign to true, return cwin
        return cwin;
    }
    else if(pegs_3[2] == "O" && pegs_3[5] == "O" && pegs_3[8] == "O") // check right column for all O's
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

bool TicTacToe4::check_column_win_4()
{
    bool cwin = false; // initialize bool variable cwin to false
    if(pegs_4[0] == "X" && pegs_4[4] == "X" && pegs_4[8] == "X" && pegs_4[12] == "X") // check left column for all X's
    {
        cwin = true; // if all values X, assign cwin to true, return cwin
        return cwin;
    }
    else if(pegs_4[0] == "O" && pegs_4[4] == "O" && pegs_4[8] == "O" && pegs_4[12] == "O") // check left column for all O's
    {
        cwin = true; // if all values O, assign cwin to true, return cwin
        return cwin;
    }
    else if(pegs_4[1] == "X" && pegs_4[5] == "X" && pegs_4[9] == "X" && pegs_4[13] == "X") // check middle column for all X's
    {
        cwin = true; // if all values X, assign to true, return cwin
        return cwin;
    }
    else if(pegs_4[1] == "O" && pegs_4[5] == "O" && pegs_4[9] == "O" && pegs_4[13] == "O") // check middle column for all O's
    {
        cwin = true; // if all values O, assign to true, return cwin
        return cwin;
    }
    else if(pegs_4[2] == "X" && pegs_4[6] == "X" && pegs_4[10] == "X" && pegs_4[14] == "X") // check right column for all X's
    {
        cwin = true; // if all values X, assign to true, return cwin
        return cwin;
    }
    else if(pegs_4[2] == "O" && pegs_4[6] == "O" && pegs_4[10] == "O" && pegs_4[14] == "O") // check right column for all O's
    {
        cwin = true; // if all values O, assign to true, return cwin
        return cwin;
    }
    else if(pegs_4[3] == "X" && pegs_4[7] == "X" && pegs_4[11] == "X" && pegs_4[15] == "X") // check right column for all X's
    {
        cwin = true; // if all values X, assign to true, return cwin
        return cwin;
    }
    else if(pegs_4[3] == "O" && pegs_4[7] == "O" && pegs_4[11] == "O" && pegs_4[15] == "O") // check right column for all O's
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

bool TicTacToe3::check_row_win_3()
{
    bool rwin = false; // initialize bool variable rwin to false
    if(pegs_3[0] == "X" && pegs_3[1] == "X" && pegs_3[2] == "X") // check top row for all X's
    {
        rwin = true; // if all values X, assign to true, return rwin
        return rwin;
    }
    else if(pegs_3[0] == "O" && pegs_3[1] == "O" && pegs_3[2] == "O") // check top row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin;
    }
    else if(pegs_3[3] == "X" && pegs_3[4] == "X" && pegs_3[5] == "X") // check middle row for all X's
    {
        rwin = true; // if all values x, assign to true, return rwin
        return rwin;
    }
    else if(pegs_3[3] == "O" && pegs_3[4] == "O" && pegs_3[5] == "O") // check middle row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin;
    }
    else if(pegs_3[6] == "X" && pegs_3[7] == "X" && pegs_3[8] == "X") // check bottom row for all X's
    {
        rwin = true; // if all values x, assign to true, return rwin
        return rwin;
    }
    else if(pegs_3[6] == "O" && pegs_3[7] == "O" && pegs_3[8] == "O") // check bottom row for all O's
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

bool TicTacToe4::check_row_win_4()
{
    bool rwin = false; // initialize bool variable rwin to false
    if(pegs_4[0] == "X" && pegs_4[1] == "X" && pegs_4[2] == "X" && pegs_4[3] == "X") // check top row for all X's
    {
        rwin = true; // if all values X, assign to true, return rwin
        return rwin;
    }
    else if(pegs_4[0] == "O" && pegs_4[1] == "O" && pegs_4[2] == "O" && pegs_4[3] == "O") // check top row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin;
    }
    else if(pegs_4[4] == "X" && pegs_4[5] == "X" && pegs_4[6] == "X" && pegs_4[7] == "X") // check middle row for all X's
    {
        rwin = true; // if all values x, assign to true, return rwin
        return rwin;
    }
    else if(pegs_4[4] == "O" && pegs_4[5] == "O" && pegs_4[6] == "O" && pegs_4[7] == "O") // check middle row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin;
    }
    else if(pegs_4[8] == "X" && pegs_4[9] == "X" && pegs_4[10] == "X" && pegs_4[11] == "X") // check bottom row for all X's
    {
        rwin = true; // if all values x, assign to true, return rwin
        return rwin;
    }
    else if(pegs_4[8] == "O" && pegs_4[9] == "O" && pegs_4[10] == "O" && pegs_4[11] == "O") // check bottom row for all O's
    {
        rwin = true; // if all values o, assign to true, return rwin
        return rwin; 
    }   
    else if(pegs_4[12] == "X" && pegs_4[13] == "X" && pegs_4[14] == "X" && pegs_4[15] == "X") // check bottom row for all X's
    {
        rwin = true; // if all values x, assign to true, return rwin
        return rwin;
    }
    else if(pegs_4[12] == "O" && pegs_4[13] == "O" && pegs_4[14] == "O" && pegs_4[15] == "O") // check bottom row for all O's
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

bool TicTacToe3::check_diagonal_win_3()
{
    bool dwin = false; // initialize bool variable dwin to false
    if(pegs_3[0] == "X" && pegs_3[4] == "X" && pegs_3[8] == "X") // check diag L to R for all X's
    {
        dwin = true; // if all values X, assign to true, return dwin
        return dwin;
    }
    else if(pegs_3[0] == "O" && pegs_3[4] == "O" && pegs_3[8] == "O") // check diag L to R for all O's
    {
        dwin = true; // if all values o, assign to true, return dwin
        return dwin;
    }
    else if(pegs_3[2] == "X" && pegs_3[4] == "X" && pegs_3[6] == "X") // check diag R to L for all X's
    {
        dwin = true; // if all values x, assign to true, return dwin
        return dwin;
    }
    else if(pegs_3[2] == "O" && pegs_3[4] == "O" && pegs_3[6] == "O") // check diag R to L for all O's
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

bool TicTacToe4::check_diagonal_win_4()
{
    bool dwin = false; // initialize bool variable dwin to false
    if(pegs_4[0] == "X" && pegs_4[5] == "X" && pegs_4[10] == "X" && pegs_4[15] == "X") // check diag L to R for all X's
    {
        dwin = true; // if all values X, assign to true, return dwin
        return dwin;
    }
    else if(pegs_4[0] == "O" && pegs_4[5] == "O" && pegs_4[10] == "O" && pegs_4[15] == "O") // check diag L to R for all O's
    {
        dwin = true; // if all values o, assign to true, return dwin
        return dwin;
    }
    else if(pegs_4[3] == "X" && pegs_4[6] == "X" && pegs_4[9] == "X" && pegs_4[12] == "X") // check diag R to L for all X's
    {
        dwin = true; // if all values x, assign to true, return dwin
        return dwin;
    }
    else if(pegs_4[3] == "O" && pegs_4[6] == "O" && pegs_4[9] == "O" && pegs_4[12] == "O") // check diag R to L for all O's
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

void TicTacToe3::set_winner_3()
{
  if(player_3 == "X") // if player is now X, winner is previous player, O
    {
        winner_3 = "O";
    }
    else if (player_3 == "O") // if player is now O, winner is previous player X
    {
        winner_3 = "X";
    } // no return value becasue winner has been modified 
}

void TicTacToe4::set_winner_4()
{
  if(player_4 == "X") // if player is now X, winner is previous player, O
    {
        winner_4 = "O";
    }
    else if (player_4 == "O") // if player is now O, winner is previous player X
    {
        winner_4 = "X";
    } // no return value becasue winner has been modified 
}

void TicTacToe3::display_board_3() const // iterate vector of strings to display a board shape
{
    for(int i = 0; i < pegs_3.size(); i++) // iterate over entire vector of pegs
    {
        if(i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7)
        {
            std::cout<<pegs_3[i]<<" | "; // puts vertical lines where necessary 
        }
        else
        {
            std::cout<<pegs_3[i]<<std::endl; // starts a new line where necessary
        }
    }
}

void TicTacToe4::display_board_4() const // iterate vector of strings to display a board shape
{
    for(int i = 0; i < pegs_4.size(); i++) // iterate over entire vector of pegs
    {
        if(i == 0 || i == 1 || i == 2 || i == 4 || i == 5 || i == 6 || i == 8 || i == 9 || i == 10 || i == 12 || i == 13 || i == 14)
        {
            std::cout<<pegs_4[i]<<" | "; // puts vertical lines where necessary 
        }
        else
        {
            std::cout<<pegs_4[i]<<std::endl; // starts a new line where necessary
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
    int size = 0;
    char choice = ' '; // initialize choice = ' ' for user choice of whether or not to play again
    std::string game_winner = " "; // initialize game winner with empty string 
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;

    std::cout<<"Would you like to play on a 3x3 board or 4x4 board?\nEnter 3 or 4...\t";
    std::cin>>size;
    if(size == 3)
    {
        TicTacToe3 game;
        TicTacToeManager mgr;
        game.start_game_3(first_player); // game calls start game function from TTT class
        do
        {
            std::cout<<"Please enter a postion to mark...1-9\nEnter 0 to quit the game...\t";
            cin>>position;
            if(position > 0 && position < 10)
            {
                game.mark_board_3(position);
                over = game.game_over_3();
                game.display_board_3();
            }
            else if(position < 0 || position > 9) // if invalid input, prompt for correct input
            {
                std::cout<<"Invalid position entry...Please enter a position 1-9...\n";
                game.start_game_3(first_player);
            }
            else // over = true if user inputs 0 to end game 
            {
                over = true;
            }
        } while (over != true); // continue looping while over is not equal to true
        game_winner = game.get_winner_3();
        if(game_winner == "X")
        {
            x_wins++;
        }
        else if(game_winner == "O")
        {
            o_wins++;
        }
        else
        {
            ties++;
        }
        cout<<"Player "<<game_winner<<" wins!\n";
        cout<<"X wins:\t"<<x_wins<<std::endl<<"O wins:\t"<<o_wins<<std::endl<<"Ties:\t"<<ties<<std::endl;
        //mgr.save_game(game);
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
    else if(size == 4)
    {
        TicTacToe4 game;
        TicTacToeManager mgr;
        game.start_game_4(first_player); // game calls start game function from TTT class
        do
        {
            std::cout<<"Please enter a postion to mark...1-16\nEnter 0 to quit the game...\t";
            cin>>position;
            if(position > 0 && position < 17)
            {
                game.mark_board_4(position);
                over = game.game_over_4();
                game.display_board_4();
            }
            else if(position < 0 || position > 17) // if invalid input, prompt for correct input
            {
                std::cout<<"Invalid position entry...Please enter a position 1-16...\n";
                game.start_game_4(first_player);
            }
            else // over = true if user inputs 0 to end game 
            {
                over = true;
            }
        } while (over != true); // continue looping while over is not equal to true
        game_winner = game.get_winner_4();
        cout<<"Player "<<game_winner<<" wins!\n";
        if(game_winner == "X")
        {
            x_wins++;
        }
        else if(game_winner == "O")
        {
            o_wins++;
        }
        else
        {
            ties++;
        }
        cout<<"X wins:\t"<<x_wins<<std::endl<<"O wins:\t"<<o_wins<<std::endl<<"Ties:\t"<<ties<<std::endl;
        //mgr.save_game(game);
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
    else
    {
        std::cout<<"Invalid choice...please enter 3 or 4\n";
        run_menu();
    }
    if(game_winner == "X")
    {
        x_wins++;
    }
    else if(game_winner == "O")
    {
        o_wins++;
    }
    else
    {
        ties++;
    }
    cout<<"X wins:\t"<<x_wins<<std::endl<<"O wins:\t"<<o_wins<<std::endl<<"Ties:\t"<<ties<<std::endl;
}

//
// *** TICTACTOE MANAGER CLASS FUNCTIONS AND FREE FUNCTIONS ***
//
/*
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
*/
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