#include <string>
#include <iostream>
#include "Cards.h"
#include <vector>
#include <random>
#include "Deck.h"
#include "CardRows.h"

using namespace std;


int main()
{
    //Creating a deck object based on the deck class
    Deck solitaireDeck = Deck();

    //Creating a card row object based on the card row class
    CardRows playingCards = CardRows();

    //Setting the seed of srand to 0 so a different number generates on each run of the game.
    srand(time(0));

    //Shuffles card deck
    solitaireDeck.shuffle();




}


