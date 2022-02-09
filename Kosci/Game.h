#ifndef GAME_H
#define GAME_H

//#pragma once
#include<string>

class Game
{

public:

	
	Game(std::string p1Name, std::string p2Name, int nTurns = 3, int mRerolls = 2);
	~Game();

	void rollDices(int pNumber);					
	void selectDice(int pNumber, int index);		
	bool isDiceSelected(int pNumber, int index);	// return true if pNumber dices is set to 1;
	int  getDiceValue(int pNumber, int index);		// returns value of dice for player:pNumber at index:index
	int calculateScore(int pNumber); //returns points for player pNumber dices// check for combinations  if none present return sum of all values
	void endTurn(int pNumber);
	int getAvailableRerols(int pNumber);
	int getCurrentTurn(int pNumber);
	int getTotalScore(int pNumber);
	bool isGameOver(int pNumber);
	std::string getPlayerName(int pNumber);
private:
	bool areValuesSmallSequance(int* val);
	bool areValuesLargeSequance(int* val);

private:
	std::string p1Name;
	std::string p2Name;
	int numberOfTurns;
	int currentTurnP1;
	int currentTurnP2;
	int maxRerolls;
	int availablePlayer1Reroll;
	int availablePlayer2Reroll;
	int totalPointsP1;
	int totalPointsP2;

	int* player1Dices;
	int* player1SelectedDices;  //value 1 at index means dice is selected and should not be rerolled
	int* player2Dices;
	int* player2SelectedDices;  //value 1 at index means dice is selected and should not be rerolled


};

#endif // !Game_H