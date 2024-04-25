#pragma once
#include "CardRows.h"

    CardRows::CardRows(Deck& sourceDeck) {

    for (size_t item = 0; item < 5; item++)
    {
        //Adding cards to the card rows
        firstRow.push_back(sourceDeck.cardDeck.back());

        sourceDeck.cardDeck.pop_back();

        secondRow.push_back(sourceDeck.cardDeck.back());

        sourceDeck.cardDeck.pop_back();

        thirdRow.push_back(sourceDeck.cardDeck.back());

        sourceDeck.cardDeck.pop_back();

        fourthRow.push_back(sourceDeck.cardDeck.back());

        sourceDeck.cardDeck.pop_back();

        fifthRow.push_back(sourceDeck.cardDeck.back());

        sourceDeck.cardDeck.pop_back();
    }
}

    void CardRows::displayCards() {

        for (size_t i = 0; i < 5; i++) {
            cout << firstRow[i].getValue() << " of " << firstRow[i].getSuit() << "|";
        }
        cout << endl;
        for (size_t i = 0; i < 5; i++) {
            cout << secondRow[i].getValue() << " of " << secondRow[i].getSuit() << "|";
        }

        cout << endl;

        for (size_t i = 0; i < 5; i++)
        {
            cout << thirdRow[i].getValue() << " of " << thirdRow[i].getSuit() << "|";
        }

        cout << endl;

        for (size_t i = 0; i < 5; i++)
        {
            cout << fourthRow[i].getValue() << " of " << fourthRow[i].getSuit() << "|";
        }

        cout << endl;

        for (size_t i = 0; i < 5; i++)
        {
            cout << fifthRow[i].getValue() << " of " << fifthRow[i].getSuit() << "|";
        }

    }
