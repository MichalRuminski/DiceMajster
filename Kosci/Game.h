#ifndef GAME_H
#define GAME_H

//#pragma once
#include<string>

class Game
{

public:

	//int GetScore(int* dices);		//return calculated score,
	//void RollDices(int playerN);	//set random values to dicesc in array of player: playerN;
	//void SelectDice(int index);
	//int* GetDiceValues(int playerN);
	Game(const char* p1Name, const char* player2Name, int nTurns = 3, int mRerolls = 2);
	// Game();
	~Game();

	void nextTurn();
	void rollDices(int pNumber);
	void selectDice(int pNumber, int index);
	int  getDiceValue(int pNumber, int index);
	void updateScore();
	int calculateScore(int pNumber); //returns points for player pNumber dices// check for combinations  if none present return sum of all values
	bool gameOver();
private:
	bool areValuesSmallSequance(int* val);
	bool areValuesLargeSequance(int* val);

private:



	int numberOfTurns;
	int currentTurn;
	int maxRerolls;
	int currentPlayer1Reroll;
	int currentPlayer2Reroll;

	int* player1Dices;
	int* player1SelectedDices;  //value 1 at index means dice is selected and should not be rerolled
	int* player2Dices;
	int* player2SelectedDices;  //value 1 at index means dice is selected and should not be rerolled


};

#endif // !Game_H