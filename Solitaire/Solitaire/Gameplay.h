#pragma once
#include "CardRows.h"


class Gameplay
{
public:


	Gameplay();


	void firstRowLogic();
	void secondRowLogic();
	void thirdRowLogic();
	void fourthRowLogic();
	void fifthRowLogic(CardRows cardRowRef);

	int playerChoice = 0;

	//Creating a vector to store the player's cards
	vector<Cards> playerHand;
};

