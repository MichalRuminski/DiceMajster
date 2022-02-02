#include "pch.h"
#include "Game.h"

#include <cstdlib>


Game::Game(const char* p1Name, const char* player2Name, int nTurns, int mRerolls) {
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

Game::~Game() {
	delete[] this->player1Dices;
	delete[] this->player2Dices;
	delete[] this->player1SelectedDices;
	delete[] this->player2SelectedDices;
}

void Game::nextTurn() {
	//TODO:(Mihau) we need to clear dice selection after new turn, and after re-roll
	this->currentTurn++;

}

void Game::rollDices(int pNumber) {
	if (pNumber) {
		for (int i = 0; i < 5; i++) {
			if (!player2SelectedDices[i]) {
				player2Dices[i] = rand() % 6 + 1;
			}
		}
	}
	else {
		for (int i = 0; i < 5; i++) {
			if (!player1SelectedDices[i]) {
				player1Dices[i] = rand() % 6 + 1;
			}
		}
	}
	//TODO:(Mihau) clear selection on dices here;

}


void Game::selectDice(int pNumber, int index) {

	if (pNumber) {
		if (this->player2SelectedDices[index]) {
			player2SelectedDices[index] = 0;
		}
		else
			player2SelectedDices[index] = 1;
	}
	else {
		if (this->player2SelectedDices[index]) {
			player2SelectedDices[index] = 0;
		}
		else
			player2SelectedDices[index] = 1;
	}


}

int Game::getDiceValue(int pNumber, int index)
{
	if(pNumber)
	{
		return this->player2Dices[index];
	}
	else if (!pNumber)
	{
		return this->player1Dices[index];
	}

	return 0;
}

int  Game::calculateScore(int pNumber) {

	throw std::exception();
	//int numberOfValues[6] = { 0,0,0,0,0,0 };

	//int indexOf2 = 0;
	//int indexOf3 = 0;
	//int indexOf4 = 0;
	//int indexOf5 = 0;

	//int val;
	////check for ones, twos, threes, etc
	//for (int i = 0; i < 5; i++) {
	//	val = dices[i].getCurrentValue();
	//	numberOfValues[val - 1]++;
	//}
	//for (int i = 0; i < 5; i++) {
	//	if (numberOfValues[i] == 2) {
	//		indexOf2 = i;
	//	}
	//	else if (numberOfValues[i] == 3)
	//		indexOf3 = i;
	//	else if (numberOfValues[i] == 4)
	//		indexOf4 = i;
	//	else if (numberOfValues[i] == 5)
	//		indexOf5 = i;
	//}

	////set values of simple combinations
	//possiblePoints[0] = 1 * (numberOfValues[0]);
	//possiblePoints[1] = 2 * (numberOfValues[1]);
	//possiblePoints[2] = 3 * (numberOfValues[2]);
	//possiblePoints[3] = 4 * (numberOfValues[3]);
	//possiblePoints[4] = 5 * (numberOfValues[4]);
	//possiblePoints[5] = 6 * (numberOfValues[5]);

	////multiple values
	//possiblePoints[6] = indexOf3 ? numberOfValues[indexOf3] * (indexOf3 + 1) : 0;
	//possiblePoints[7] = indexOf4 ? numberOfValues[indexOf4] * (indexOf4 + 1) : 0;
	//possiblePoints[8] = indexOf5 ? numberOfValues[indexOf5] * (indexOf5 + 1) : 0;
	//possiblePoints[9] = indexOf3 ? numberOfValues[indexOf3] * (indexOf3 + 1) +
	//	numberOfValues[indexOf2] * (indexOf2 + 1) : 0;
	//possiblePoints[10] = areValuesSmallSequance(numberOfValues) ? 40 : 0;
	//possiblePoints[11] = areValuesLargeSequance(numberOfValues) ? 60 : 0;
	//possiblePoints[12] = numberOfValues[0] + (numberOfValues[1] * 2)
	//	+ (numberOfValues[2] * 3) + (numberOfValues[3] * 4)
	//	+ (numberOfValues[4] * 5) + (numberOfValues[5] * 6);

}

bool Game::areValuesSmallSequance(int* val) {
	if (val[0] && val[1] && val[2] && val[3] || val[1] && val[2] && val[3] && val[4] ||
		val[2] && val[3] && val[4] && val[5])
		return true;
	return false;
}

bool Game::areValuesLargeSequance(int* val) {
	if (val[0] && val[1] && val[2] && val[3] && val[4] ||
		val[1] && val[2] && val[3] && val[4] && val[5])
		return true;
	return false;
}

//Game::Game(const char* p1Name, const char* p2Name, int nTurns, int mRerolls) {
//
//	numberOfTurns = nTurns;
//	maxRerolls = mRerolls;
//	currentPlayer1Reroll = currentPlayer2Reroll = 0;
//
//	player1Dices = new int[5];
//	player1SelectedDices = new int[5];
//	player2Dices = new int[5];
//	player2SelectedDices = new int[5];
//	for (int i = 0; i < 5; i++) {
//		player1Dices[i] = player1SelectedDices[i] = player2Dices[i] = player2SelectedDices[i] = 0;
//	}
//}
