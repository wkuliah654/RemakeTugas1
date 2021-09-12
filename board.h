#ifndef BOARD_H
#define BOARD_H
#include<iostream>
using namespace std;

class board
{
	private:
		int rows;
		int cols;
		char Board[3][3];
		
	public:
		board();
		void printBoard();
		bool isFull();
		bool isAvailable(int x, int y);
		void setValueAtIndex(int x, int y, char value);
		char getValueAtIndex(int x, int y);
		char checkSimilarValueHorizontally();
		char checkSimilarValueVertically();
		int getTurnCount();
		
	protected:
};

#endif
