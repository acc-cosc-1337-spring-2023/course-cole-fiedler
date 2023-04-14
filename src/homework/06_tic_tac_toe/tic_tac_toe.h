//h
#include <string>
#include <vector>

using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToe &game);
friend std::istream& operator>>(std::istream& in, const TicTacToe  &game);

public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    std::string get_winner();
    void display_board() const;
private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    std::string player{};
    std::string winner{};
    std::vector<std::string> pegs = std::vector<std::string> (9, " ");
    // Delete display_board() const function. Replace within overloaded ostream function
};
#endif

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager : public TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager &manager);

public:
    void save_game(TicTacToe b); // add TTT to games vector with pushback, call update winner count, pass winner from TTT to update totals
    void get_winner_total(int& o_wins, int& x_wins, int& ties);
private:
    std::vector<std::string> games = std::vector<std::string> (1, " ");
    int o_wins{0};
    int x_wins{0};
    int ties{0};
    void update_winner_count(std::string winner);
};
#endif

#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3

class TicTacToe3 : public TicTacToe
{
public:

private:

};
#endif

#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4

class TicTacToe4 : public TicTacToe
{
public:

private:

};
#endif

void run_menu();
void run_game(std::string first_player);

