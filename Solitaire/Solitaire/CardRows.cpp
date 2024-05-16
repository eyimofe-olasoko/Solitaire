#pragma once
#include "CardRows.h"

    CardRows::CardRows(Deck& sourceDeck) {

    for (size_t item = 0; item < 5; item++)
    {
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
        for (size_t i = 0; i < secondLength; i++)
        {
            if (secondLength == 1)
            {
                cout << "--------------------------ROW COMPLETE--------------------------" << endl;
            }
            else 
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
            
        }

        cout << endl;

        for (size_t i = 0; i < thirdLength; i++)
        {
            if (thirdLength == 1)
            {
                cout << "--------------------------ROW COMPLETE--------------------------" << endl;
            }
            else 
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
        }

        cout << endl;

        for (size_t i = 0; i < fourthLength; i++)
        {
            if (fourthLength == 1)
            {
                cout << "--------------------------ROW COMPLETE--------------------------" << endl;
            }
            else 
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
            
        }

        cout << endl;

        for (size_t i = 0; i < fifthLength; i++)
        {
            if (fifthLength == 1)
            {
                cout << "--------------------------ROW COMPLETE--------------------------" << endl;
            }
            else
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
        
    }

   
