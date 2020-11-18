#include <curses.h>
#include <string>
using namespace std;
int main()
{
    WINDOW * w;
    w = initscr();//term 변수 통해 단말기 종류 결정
    curs_set(0);
    // start main
    int max_row = LINES-1,max_col=COLS-COLS;
    // printw("start hello");
    // move(3,4);
    // addch('3');
    // mvaddch(5,4,'5');
    // string str_var = "max_row,max_col : "+to_string(LINES)+" , "+to_string(COLS);
    // mvaddstr(6,4,str_var.c_str());
    // mvprintw(max_row/2,COLS/2,"middle ayayay dldld aosdofoa ");
    // mvaddch(max_row-1,COLS-1,'E');
    // printw("hello");
    getch();//wait keyboard
    // end main
    endwin();//모든 자원 반납
    return 0;
}