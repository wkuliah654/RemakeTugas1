#include "gameManager.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string name; int win, match;
	
	cout << "Player 1 (name, win, match) : ";
	cin >> name >> win >> match;
	player p1(name, win, match);
	
	cout << "Player 2 (name, win, match) : ";
	cin >> name >> win >> match;
	player p2(name, win, match);
	
	cout << endl;
	
	gameManager gm(p1, p2, 'X', 'O');
	
	gm.init();
	
	gm.play();
	
	
	return 0;
}
