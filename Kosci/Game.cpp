#include "pch.h"
#include "Game.h"

#include <cstdlib>

Game::Game(const char* p1Name, const char* p2Name, int nTurns, int mRerolls) {
	player1Name = std::string(p1Name);
	player2Name = std::string(p1Name);

	numberOfTurns = nTurns;
	maxRerolls = mRerolls;
	currentPlayer1Reroll = currentPlayer2Reroll = 0;

	player1Dices = new int[5];
	player1SelectedDices = new int[5];
	player2Dices = new int[5];
	player2SelectedDices = new int[5];
	for (int i = 0; i < 5; i++) {
		player1Dices[i] = player1SelectedDices[i] = player2Dices[i] = player2SelectedDices[i] = 0;
	}
}
