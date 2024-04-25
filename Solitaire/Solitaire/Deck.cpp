#include "Deck.h"
#include <random>

void Deck::Output() {

	for (int item = 0; item < 52; item++)
	{
		cout << cardDeck[item].getSuit() << cardDeck[item].getValue() << endl;
	}
}


Deck::Deck() {

	//Filling the card deck vector with cards 
	for (size_t item = 0; item < 13; item++)
	{
		cardDeck.push_back(Cards("Diamond", item));
	}
	for (size_t item = 0; item < 13; item++)
	{
		cardDeck.push_back(Cards("Clubs", item));
	}
	for (size_t item = 0; item < 13; item++)
	{
		cardDeck.push_back(Cards("Hearts", item));
	}
	for (size_t item = 0; item < 13; item++)
	{
		cardDeck.push_back(Cards("Spades", item));
	}
}

void Deck::shuffle() {

	//Shuffling the cards in the card deck vector
	random_shuffle(cardDeck.begin(), cardDeck.end());

}