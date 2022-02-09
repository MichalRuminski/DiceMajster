#include "pch.h"
#include "Game.h"
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <time.h>


Game::Game(std::string p1Name, std::string p2Name, int nTurns, int mRerolls) {
	srand(time(NULL));
	numberOfTurns = nTurns;
	maxRerolls = mRerolls;
	availablePlayer1Reroll = availablePlayer2Reroll = maxRerolls;
	totalPointsP1 = totalPointsP2 = currentTurnP1 = currentTurnP2 = 0;
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


void Game::rollDices(int pNumber) {
	if (pNumber) {
		if (availablePlayer2Reroll > 0) {
			for (int i = 0; i < 5; i++) {
				if (!player2SelectedDices[i]) {
					player2Dices[i] = rand() % 6 + 1;
				}
			}
			for (int i = 0; i < 5; i++) {
				player2SelectedDices[i] = 0;
			}
		}
		availablePlayer2Reroll--;
	}
	else {
		if (availablePlayer1Reroll > 0) {
			for (int i = 0; i < 5; i++) {
				if (!player1SelectedDices[i]) {
					player1Dices[i] = rand() % 6 + 1;
				}
			}
			for (int i = 0; i < 5; i++) {
				player1SelectedDices[i] = 0;
			}
			availablePlayer1Reroll--;
		}
	}
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
		if (this->player1SelectedDices[index]) {
			player1SelectedDices[index] = 0;
		}
		else
			player1SelectedDices[index] = 1;
	}
}

bool Game::isDiceSelected(int pNumber, int index) {
	if (pNumber) {
		return this->player2SelectedDices[index];
	}
	else
		return this->player1SelectedDices[index];
}

int Game::getDiceValue(int pNumber, int index)
{
	if (pNumber)
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
	bool containsDoublePair = false;
	bool containsPair = false;
	bool containsThrees = false;
	bool containsFour = false;
	bool containsFive = false;
	int consecSearch = 0;
	int numInSeq = 0;
	//sort array, and check if current val is same as next, if not, check if difference is smaller than 1;
	std::vector<int> values;
	if (pNumber) {
		values = std::vector<int>(this->player2Dices, this->player2Dices + 5);
	}
	else {
		values = std::vector<int>(this->player1Dices, this->player1Dices + 5);
	}
	std::sort(values.begin(), values.end());

	int prevVal = values[0];
	for (int i = 1; i < 5; i++) {
		if (prevVal == values[i]) {
			if (containsFour) {
				containsFive = true;
				containsFour = false;
			}
			else if (consecSearch > 0 && containsThrees) {
				containsFour = true;
				containsThrees = false;
			}
			else if (consecSearch == 0 && containsPair) {
				containsDoublePair = true;

			}
			else if (consecSearch > 0 && containsPair) {
				containsThrees = true;
				containsPair = false;

			}
			else if (!containsPair) {
				containsPair = true;
			}
			consecSearch++;
		}
		else if ((values[i] - prevVal) == 1) {
			numInSeq++;
			consecSearch = 0;
		}
		else
			consecSearch = 0;
		prevVal = values[i];
	}

	if (numInSeq < 3) {
		if (containsFive) {
			return 30;
		}
		else if (containsFour) {
			return 20;
		}
		else if (containsPair && containsThrees) {
			return 15;
		}
		else if (containsDoublePair) {
			return 20;
		}
		else if (containsPair) {
			return 5;
		}
		else if (containsThrees) {
			return 10;
		}
	}
	else if (numInSeq == 3) {
		return 40;
	}
	else if (numInSeq == 4) {
		return 50;
	}
	
	int sum = 0;
	return std::accumulate(values.begin(), values.end(), sum);
}

void Game::endTurn(int pNumber)
{
	if (pNumber) {
		this->currentTurnP2++;
		this->availablePlayer2Reroll = this->maxRerolls;
		this->totalPointsP2 += this->calculateScore(pNumber);
	}
	else {
		this->currentTurnP1++;
		this->availablePlayer1Reroll = this->maxRerolls;
		this->totalPointsP1 += this->calculateScore(pNumber);
	}
}

int Game::getAvailableRerols(int pNumber)
{
	if (pNumber)
		return this->availablePlayer2Reroll;
	else
		return this->availablePlayer1Reroll;
}

int Game::getCurrentTurn(int pNumber)
{
	if (pNumber) {
		return this->currentTurnP2;
	}
	else
		return this->currentTurnP1;
}

bool Game::isGameOver(int pNumber)
{	
	if (pNumber) {
		return (this->currentTurnP2 == this->numberOfTurns && this->availablePlayer2Reroll > 0);
	}
	else
		return (this->currentTurnP1 == this->numberOfTurns && this->availablePlayer1Reroll > 0);
}

int Game::getTotalScore(int pNumber)
{
	if (pNumber) {
		return this->totalPointsP2;
	}
	else
		return this->totalPointsP1;
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
