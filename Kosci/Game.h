#ifndef GAME_H
#define GAME_H

#include<string>

#pragma once
class Game
{

public:
	Game(const char* p1Name, const char* player2Name, int nTurns = 3, int mRerolls = 2 );

	int GetScore(int* dices);		//return calculated score,
	void RollDices(int playerN);	//set random values to dicesc in array of player: playerN;
	void SelectDice(int index);
	int* GetDiceValues(int playerN);

private:



	int numberOfTurns;
	int maxRerolls;
	int currentPlayer1Reroll;
	int currentPlayer2Reroll;

	int* player1Dices;
	int* player1SelectedDices;
	int* player2Dices;
	int* player2SelectedDices;

	std::string player1Name;	//to consider if this is needed here
	std::string player2Name;	//to consider if this is needed here
};

#endif // !Game_H