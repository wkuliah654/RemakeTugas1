#include "player.h"

player::player() {
	aUsername = "";
	winCount = 0;
	matchCount = 0;
}

player::player(string username, int win,  int match) {
	aUsername = username;
	winCount = win;
	matchCount = match;
}

void player::setUsername(string username) {
	aUsername = username;
}

void player::setWinCount(int win) {
	winCount = win;
}

void player::setMatchCount(int match) {
	matchCount = match;
}

string player::getUsername() {
	return aUsername;
}

int player::getWinCount() {
	return winCount;
}

int player::getMatchCount() {
	return matchCount;
}
