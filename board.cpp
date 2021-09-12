#include "board.h"

board::board() {
	rows = 3;
	cols = 3;
	for(int x=0; x<rows; x++) {
		for(int y=0; y<cols; y++) {
			setValueAtIndex(x, y, ' ');
		}
	}
}

void board::printBoard() {
	int i=0, j;
	
	for(int x=0; x<rows*2+1; x++) {
		j=0;
		for(int y=0; y<cols*2+1; y++) {
			if(x%2==1 && y%2==1) {
				cout << getValueAtIndex(i, j);
				j++;
			}
			else if(x%2==0 && y%2==0) {
				cout << '+';
			}
			else if(x%2==0 && y%2==1) {
				cout << '-';
			}
			else {
				cout << '|';
			}
		}
		cout << endl;
		
		if(j==cols) i++;
	}
}

bool board::isFull() {
	for(int x=0; x<rows; x++) {
		for(int y=0; y<cols; y++) {
			if(Board[x][y]==' ') {
				return false;
			}
		}
	}
	
	return true;
}

bool board::isAvailable(int x, int y) {
	if(Board[x][y] == ' ')
		return true;
	else
		return false;
}

void board::setValueAtIndex(int x, int y, char value) {
	Board[x][y] = value;
}

char board::getValueAtIndex(int x, int y) {
	return Board[x][y];
}

char board::checkSimilarValueHorizontally() {
	int count;
	
	for(int x=0; x<rows; x++) {
		count = 0;
		
		for(int y=1; y<cols; y++) {
			if(Board[x][0]==Board[x][y] && Board[x][0]!=' ') {
				count++;
			}
			
			if(count==cols-1) {
				return Board[x][0];
			}
		}
	}
	
	return ' ';
}

char board::checkSimilarValueVertically() {
	int count;
	
	for(int x=0; x<cols; x++) {
		count = 0;
		
		for(int y=1; y<rows; y++) {
			if(Board[0][x]==Board[y][x] && Board[0][x]!=' ') {
				count++;
			}
		
			if(count==rows-1) {
				return Board[0][x];
			}
		}
	}
	
	return ' ';
}

int board::getTurnCount()
{
	return rows*cols;
}
