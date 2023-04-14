//h
#include <string>
#include <vector>

using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
    //TicTacToe(int size) : pegs(size * size, " "){};
friend std::ostream& operator<<(std::ostream& out, const TicTacToe &game);
friend std::istream& operator>>(std::istream& in, const TicTacToe  &game);

public:
    bool game_over();
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
    //std::vector<std::string> pegs; // protect vector of pegs and remove initalizer
protected:
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
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
    std::vector<std::string> games = std::vector<std::string> (10, " ");
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
    TicTacToe3(); 
public:
    void display_board() const;
    void clear_board();
private:
    virtual bool check_3_column_win();
    virtual bool check_3_row_win();
    virtual bool check_3_diagonal_win();
    bool check_3_board_full();
    void mark_3_board(int position);
    std::vector<std::string> pegs = std::vector<std::string> (9, " ");
}
#endif

#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4

class TicTacToe4 : public TicTacToe
{
    TicTacToe4();
public:
    
private:
    std::vector<std::string> pegs = std::vector<std::string> (16, " ");
    virtual bool check_4_column_win();
    virtual bool check_4_row_win();
    virtual bool check_4_diagonal_win();
};
#endif

void run_menu();
void run_game(std::string first_player);

