#include <string>
#include <iostream>
#include "Cards.h"
#include <vector>
#include <random>
#include "Deck.h"

using namespace std;


int main()
{
    //Creating a deck object based on the deck class
    Deck solitaireDeck = Deck();

    //Setting the seed of srand to 0 so a different number generates on each run of the game.
    srand(time(0));

    //Shuffles card deck
    solitaireDeck.shuffle();

    vector<Cards> firstRow;
    vector<Cards> secondRow;
    vector<Cards> thirdRow;
    vector<Cards> fourthRow;
    vector<Cards> fifthRow;

    for (size_t item = 0; item < 5; item++)
    {
        firstRow.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();

        secondRow.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();

        thirdRow.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();

        fourthRow.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();

        fifthRow.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();
    }

    for (size_t item = 0; item < 5; item++)
    {
        cout << firstRow[item].getValue() << " of " << firstRow[item].getSuit() << "|";
    }
}


