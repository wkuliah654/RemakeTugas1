#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class player
{
	private:
		string aUsername;
		int winCount;
		int matchCount;
		
	public:
		player();
		player(string username, int win, int match);
		void setUsername(string username);
		void setWinCount(int win);
		void setMatchCount(int match);
		string getUsername();
		int getWinCount();
		int getMatchCount();
	protected:
};

#endif
