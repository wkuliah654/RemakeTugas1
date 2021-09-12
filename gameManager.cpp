#include "gameManager.h"

gameManager::gameManager() {
	sym1 = '\0';
	sym2 = '\0';
}

gameManager::gameManager(player player1, player player2, char symbol1, char symbol2) {
	p1 = player1;
	p2 = player2;
	sym1 = symbol1;
	sym2 = symbol2;
}

void gameManager::init() {
	p1.setMatchCount(1);
	p2.setMatchCount(1);
	cout << p1.getUsername() << " : " << sym1 << endl;
	cout << p2.getUsername() << " : " << sym2 << endl;
	cout << endl;
}

void gameManager::play() {
	int n = 0;
	char ch;
	
	Board.printBoard();
	
	while(n<Board.getTurnCount() && checkWin()==' ') {
		n++;
		
		if(n%2==1) {
			cout << p1.getUsername() << "'s turn" << endl;
			turn(sym1);
		}
		else {
			cout << p2.getUsername() << "'s turn" << endl;
			turn(sym2);
		}
		
		if(n>=5) {
			ch = checkWin();
		}
		
		Board.printBoard();
	}
	
	if(ch==sym1) {
		p1.setWinCount(1);
		cout << p1.getUsername() << " Winner" << endl;
	}
	else if(ch==sym2) {
		p1.setWinCount(1);
		cout << p2.getUsername() << " Winner" << endl;
	}
	else {
		cout << "Draw" << endl;
	}
}

void gameManager::turn(char sym) {
	int x, y;
	
	cout << "Masukkan koordinat (x,y) : ";
	cin >> x >> y;
	
	if(Board.isAvailable(x, y)) {
		Board.setValueAtIndex(x, y, sym);
	}
	else {
		cout << "Koordinat telah terisi. Silahkan coba lagi!!" << endl;
		turn(sym);
	}
}

char gameManager::checkWin() {
	char ch;
	
	if(Board.checkSimilarValueHorizontally()!=' ') ch = Board.checkSimilarValueHorizontally();
	else if(Board.checkSimilarValueVertically()!=' ') ch = Board.checkSimilarValueVertically();
	else ch = ' ';
	
	return ch;
}
