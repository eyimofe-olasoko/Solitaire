#pragma once
#include "CardRows.h"
#include "Deck.h"

class Gameplay
{
public:

	Gameplay();


	void firstRowLogic();
	void secondRowLogic();
	void thirdRowLogic();
	void fourthRowLogic();
	void fifthRowLogic(CardRows cardRowRef, Deck cardRowRefDeck);

	int playerChoice = 0;

	//Creating a vector to store the card pile that the player can draw from
	vector<Cards> cardPile;

	//Creating a vector to store the player's cards
	vector<Cards> playerHand;

	void addToCardPile(Deck sourceDeck);

	string newCard = "";

	int playerScore = 0;
};

