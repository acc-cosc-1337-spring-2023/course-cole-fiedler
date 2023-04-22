//h
#include <string>
#include <vector>

using std::string; using std::vector;

/*
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToe &game);
friend std::istream& operator>>(std::istream& in, const TicTacToe  &game);

public:
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    std::string get_winner();
    void display_board() const;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    std::string player{};
    std::string winner{};
    std::vector<std::string> pegs; 
};
#endif
*/

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager &manager);

public:
    //void save_game(TicTacToe b); // add TTT to games vector with pushback, call update winner count, pass winner from TTT to update totals
    void get_winner_total(int& o_wins, int& x_wins, int& ties);
private:
    std::vector<std::string> games = std::vector<std::string> (10, " ");
    int o_wins{0};
    int x_wins{0};
    int ties{0};
    void update_winner_count(std::string winner);
};
#endif

#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3

class TicTacToe3
{
public:
    bool game_over_3();
    void start_game_3(std::string first_player);
    void mark_board_3(int postition);
    std::string get_player_3() const;
    std::string set_next_player_3();
    bool check_board_full_3();
    void clear_board_3();
    std::string get_winner_3();
    bool check_column_win_3();
    bool check_row_win_3();
    bool check_diagonal_win_3();
    void set_winner_3();
    void display_board_3() const;
    void record_game_3();
private:
    std::vector<std::string> pegs_3 = std::vector<std::string> (9, " ");
    std::string player_3{};
    std::string winner_3{};
    int position{};  
};
#endif

#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4

class TicTacToe4
{
public:
    bool game_over_4();
    void start_game_4(std::string first_player);
    void mark_board_4(int postition);
    std::string get_player_4() const;
    std::string set_next_player_4();
    bool check_board_full_4();
    void clear_board_4();
    std::string get_winner_4();
    bool check_column_win_4();
    bool check_row_win_4();
    bool check_diagonal_win_4();
    void set_winner_4();
    void display_board_4() const;
    void record_game_4();
private:
    std::vector<std::string> pegs_4 = std::vector<std::string> (16, " ");
    std::string player_4{};
    std::string winner_4{};
    int position{};  
};
#endif

void run_menu();
void run_game(std::string first_player);

