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

    void CardRows::displayCards() 
    {

        //Displaying all the card rows and changing the card values to match card names
        for (size_t i = 0; i < firstLength; i++) 
        {
            if (firstRow[i].getValue() == 0)
            {
                firstRow[i].setValue(1);

                cout << "Ace" << " of " << firstRow[i].getSuit() << " | ";
            }
            else if (firstRow[i].getValue() == 1)
            {
                cout << "Ace" << " of " << firstRow[i].getSuit() << " | ";
            }
            else if (firstRow[i].getValue() == 11)
            {
                cout << "Jack" << " of " << firstRow[i].getSuit() << " | ";
            }
            else if (firstRow[i].getValue() == 12)
            {
                cout << "Queen" << " of " << firstRow[i].getSuit() << " | ";
            }
            else if (firstRow[i].getValue() == 13)
            {
                cout << "King" << " of " << firstRow[i].getSuit() << " | ";
            }
            else 
            {
                cout << firstRow[i].getValue() << " of " << firstRow[i].getSuit() << " | ";
            }
        }

        cout << endl;

        for (size_t i = 0; i < secondLength; i++) 
        {
            if (secondRow[i].getValue() == 0)
            {
                secondRow[i].setValue(1);

                cout << "Ace" << " of " << secondRow[i].getSuit() << " | ";
            }
            else if (secondRow[i].getValue() == 1)
            {
                cout << "Ace" << " of " << secondRow[i].getSuit() << " | ";
            }
            else if (secondRow[i].getValue() == 11)
            {
                cout << "Jack" << " of " << secondRow[i].getSuit() << " | ";
            }
            else if (secondRow[i].getValue() == 12)
            {
                cout << "Queen" << " of " << secondRow[i].getSuit() << " | ";
            }
            else if (secondRow[i].getValue() == 13)
            {
                cout << "King" << " of " << secondRow[i].getSuit() << " | ";
            }
            else
            {
                cout << secondRow[i].getValue() << " of " << secondRow[i].getSuit() << " | ";
            }
        }

        cout << endl;

        for (size_t i = 0; i < thirdLength; i++)
        {
            if (thirdRow[i].getValue() == 0)
            {
                thirdRow[i].setValue(1);

                cout << "Ace" << " of " << thirdRow[i].getSuit() << " | ";
            }
            else if (thirdRow[i].getValue() == 1)
            {
                cout << "Ace" << " of " << thirdRow[i].getSuit() << " | ";
            }
            else if (thirdRow[i].getValue() == 11)
            {
                cout << "Jack" << " of " << thirdRow[i].getSuit() << " | ";
            }
            else if (thirdRow[i].getValue() == 12)
            {
                cout << "Queen" << " of " << thirdRow[i].getSuit() << " | ";
            }
            else if (thirdRow[i].getValue() == 13)
            {
                cout << "King" << " of " << thirdRow[i].getSuit() << " | ";
            }
            else
            {
                cout << thirdRow[i].getValue() << " of " << thirdRow[i].getSuit() << " | ";
            }
        }

        cout << endl;

        for (size_t i = 0; i < fourthLength; i++)
        {
            if (fourthRow[i].getValue() == 0)
            {
                fourthRow[i].setValue(1);

                cout << "Ace" << " of " << fourthRow[i].getSuit() << " | ";
            }
            else if (fourthRow[i].getValue() == 1)
            {
                cout << "Ace" << " of " << fourthRow[i].getSuit() << " | ";
            }
            else if (fourthRow[i].getValue() == 11)
            {
                cout << "Jack" << " of " << fourthRow[i].getSuit() << " | ";
            }
            else if (fourthRow[i].getValue() == 12)
            {
                cout << "Queen" << " of " << fourthRow[i].getSuit() << " | ";
            }
            else if (fourthRow[i].getValue() == 13)
            {
                cout << "King" << " of " << fourthRow[i].getSuit() << " | ";
            }
            else
            {
                cout << fourthRow[i].getValue() << " of " << fourthRow[i].getSuit() << " | ";
            }
        }

        cout << endl;

        for (size_t i = 0; i < fifthLength; i++)
        {
            if (fifthRow[i].getValue() == 0)
            {
                fifthRow[i].setValue(1);

                cout << "Ace" << " of " << fifthRow[i].getSuit() << " | ";
            }
            else if (fifthRow[i].getValue() == 1)
            {
                cout << "Ace" << " of " << fifthRow[i].getSuit() << " | ";
            }
            else if (fifthRow[i].getValue() == 11)
            {
                cout << "Jack" << " of " << fifthRow[i].getSuit() << " | ";
            }
            else if (fifthRow[i].getValue() == 12)
            {
                cout << "Queen" << " of " << fifthRow[i].getSuit() << " | ";
            }
            else if (fifthRow[i].getValue() == 13)
            {
                cout << "King" << " of " << fifthRow[i].getSuit() << " | ";
            }
            else
            {
                cout << fifthRow[i].getValue() << " of " << fifthRow[i].getSuit() << " | ";
            }
           
        }
    }

   
