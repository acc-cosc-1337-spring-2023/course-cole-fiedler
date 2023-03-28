//h
#include <string>
#include <vector>

using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player();
    void display_board();
private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    std::string player{};
    std::vector<std::string> pegs = std::vector<std::string> (9, " ");
};

void run_menu();
void run_game(std::string first_player);

#endif
