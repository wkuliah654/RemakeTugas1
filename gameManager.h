#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "board.h"
#include "player.h"

class gameManager
{
	private:
		board Board;
		player p2;
		player p1;
		char sym1;
		char sym2;
		
	public:
		gameManager();
		gameManager(player player1, player player2, char symbol1, char symbol2);
		void init();
		void turn(char sym);
		void play();
		char checkWin();
		
	protected:
};

#endif
