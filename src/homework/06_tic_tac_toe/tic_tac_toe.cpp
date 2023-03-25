//cpp
#include <tic_tac_toe.h>
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::string; using std::vector;

bool TicTacToe::game_over()
{
    char choice = ' ';
    bool over = check_board_full();

    if(over = true)
    {
        std::cout<<"Game over!!!\n";
        std::cout<<"Would you like to play again? Y/N....\t"; // play again loop if user chooses to
        std::cin>>choice;
        if(choice == 'Y' || choice == 'y')
        {
            run_menu(); // restart program if prompted 
        }
        else
        {
            std::cout<<"Exiting..."; // exit if prompted 
        }
    }
}

void TicTacToe::start_game(std::string first_player)
{
    int position = 0;
    bool over = false;
    player = first_player;
    clear_board();
    do
    {
        std::cout<<"Enter a position 1 to 9:\t";
        std::cin>>position;
        mark_board(position);
        display_board();
        over = game_over();
        set_next_player();  
    }while (over != true);
}

void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}

string TicTacToe::get_player()
{
    return player;
}

void TicTacToe::display_board()
{
    int n = pegs.size();
    for(int i = 0; i < n+1; i++)
    {
        if(i == 0 || i == 1 || i == 3 || i == 4 || i == 6 || i == 7)
        {
            std::cout<<pegs[i]<<" | ";
        }
        else
        {
            std::cout<<pegs[i]<<std::endl;
        }
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player == "O";
    }
    else
    {
        player == "X"; 
    }
}

bool TicTacToe::check_board_full()
{
    bool full = false; 
    int n = pegs.size();
    for(int i = 0; i < n+1; i++) //vector<string>::const_iterator i = pegs.begin(); i != pegs.end(); ++i
   {
        if(pegs[i] == " ")
        {
            full = false;
        } 
        else
        {
            full = true;
        }
    }
    return full;
}

void TicTacToe::clear_board()
{
    int n = pegs.size();
    for(int i = 0; i < n+1; i++)
    {
        pegs[i] = " ";
    }
}

void run_menu()
{
    std::string first_player = " ";
    std::cout<<"\nEnter X or O...\t";
    cin>>first_player;
    if(first_player == "X" || first_player == "O")
    {
        TicTacToe game;
        game.start_game(first_player);
    }
    else
    {
        std::cout<<"Invalid choice, please try again....\n";
        run_menu();
    }
}
