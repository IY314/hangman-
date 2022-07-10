#include <ncurses.h>

int main() {
    initscr();
    raw();
    curs_set(0);
    getch();
    endwin();
    return 0;
}
