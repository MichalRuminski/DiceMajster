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

	throw std::exception();
	bool contains_double = false;
	bool contains_threes = false;
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
		if (prevVal == values[i] && contains_double) {
			contains_threes = true;
			contains_double = false;
		}
		else if (prevVal == values[i] && !contains_double) {
			contains_double = true;
		}
		else if (/*prevVal != values[i] && */(values[i] - prevVal) == 1) {
			numInSeq++;
		}
		prevVal = values[i];
	}

	if (contains_double) {
		return 10;
	}
	else if (contains_double && contains_threes) {
		return 30;
	}
	else if (contains_threes) {
		return 20;
	}
	else if (numInSeq == 4) {
		return 40;
	}
	else if (numInSeq == 5) {
		return 50;
	}
	
	int sum = 0;
	return std::accumulate(values.begin(), values.end(), sum);
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

void Game::endTurn(int pNumber)
{
	if (pNumber) {
		this->currentTurnP2++;
		availablePlayer2Reroll = maxRerolls;
	}
	else {
		this->currentTurnP1++;
		availablePlayer1Reroll = maxRerolls;
	}
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
