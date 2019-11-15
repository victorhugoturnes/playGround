#include <ncurses.h>
#include <unistd.h>
#define DELAY 30000

int main(int argc, char *argv[]){
  int x=0, y=0;
  int max_y = 0, max_x =0;
  int direction = 1;

  initscr();
  noecho();
  curs_set(FALSE);


  while(1){
  	getmaxyx(stdscr, max_y, max_x);
	clear();
	mvprintw(y,x, "o");
	refresh();
	usleep(DELAY);
	if(x+direction > max_x || x+direction < 0){
	  direction *= -1;
	}
	x += direction;
  }

  sleep(2);

  endwin();
}
