#pragma once
#include "CardRows.h"
#include "Deck.h"

class Gameplay
{
public:

	Gameplay();


	void secondRowLogic(CardRows cardRowRef, Deck cardRowRefDeck);
	void thirdRowLogic(CardRows cardRowRef, Deck cardRowRefDeck);
	void fourthRowLogic(CardRows cardRowRef, Deck cardRowRefDeck);
	void fifthRowLogic(CardRows cardRowRef, Deck cardRowRefDeck);

	void displayPlayerHand();

	int playerChoice = 0;

	//Creating a vector to store the card pile that the player can draw from
	vector<Cards> cardPile;

	//Creating a vector to store the player's cards
	vector<Cards> playerHand;

	void addToCardPile(Deck sourceDeck);

	string newCard = "";

	int playerScore = 0;
};

