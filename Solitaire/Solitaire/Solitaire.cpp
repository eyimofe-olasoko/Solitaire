#include <string>
#include <iostream>
#include "Cards.h"
#include <vector>
#include <random>
#include "Deck.h"
#include "CardRows.h"
#include "Gameplay.h"


using namespace std;


int main()
{
    //Setting the seed of srand to 0 so a different number generates on each run of the game.
    srand(time(0));

    //Creating a deck object based on the deck class
    Deck solitaireDeck = Deck();

    //Shuffles card deck
    solitaireDeck.shuffle();

    //Creating a card row object based on the card row class
    CardRows playingCards = CardRows(solitaireDeck);

    //Creating an object from Gameplay class
    Gameplay Game = Gameplay();

    //Displaying card rows
    playingCards.displayCards();

    //Adding a starting card to the playerHand
    Game.playerHand.push_back(solitaireDeck.cardDeck.back());
    solitaireDeck.cardDeck.pop_back();

    //Functions

    //Adding cards to the card pile
    Game.addToCardPile(solitaireDeck);

    //Running the game
    Game.fifthRowLogic(playingCards, solitaireDeck);
    Game.fourthRowLogic(playingCards, solitaireDeck);
    Game.thirdRowLogic(playingCards, solitaireDeck);
    Game.secondRowLogic(playingCards, solitaireDeck);
    Game.firstRowLogic(playingCards, solitaireDeck);

}
