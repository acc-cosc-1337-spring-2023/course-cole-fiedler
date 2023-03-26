//cpp
#include <tic_tac_toe.h>
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::string; using std::vector;

bool TicTacToe::game_over()
{
    bool full = false;
    full = check_board_full();
    return full;
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
    } while (over != true);
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
    for(int i = 0; i <= n; i++)
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
        player = "O";
    }
    else if (player == "O")
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    bool full = false;
    for(int i = 0; i <= pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            full = false;
        }
    }
    for(int i = 0; i<=pegs.size(); i++)
    {
        if(pegs[i] != " ")
        full = true;
    }
    return full;
}   

void TicTacToe::clear_board()
{
    int n = pegs.size();
    for(int i = 0; i <= n; i++)
    {
        pegs[i] = " ";
    }
}

void run_menu()
{
    std::string first_player = " ";
    std::cout<<"\nEnter X or O. Capital letters only...\t";
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
