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

    void CardRows::fifthRowLogic() 
    {
        //Looping while the player enters a number between 1 and 5
        while (playerChoice > 0 || playerChoice <= 5)
        {
            //Checking what card (playerChoice) and row (playerChoiceRow) the player choice
            if (playerChoice == 5 && playerChoiceRow == 5)
            {
                //Checking if the playerChoice value is either 1 greater or 1 less than the playing card value
                if (playerHand.back().getValue() == fifthRow[4].getValue() + 1 || playerHand.back().getValue() == fifthRow[4].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(fifthRow[4]);

                    //Deleting the card as the index corresponding with the playerChoice
                    fifthRow.pop_back();

                    //Decrementing the vector length by one 
                    fifthLength--;

                    displayCards();

                    cout << endl;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;
                }
            }
            else if (playerChoice == 4 && playerChoiceRow == 5)
            {
                if (playerHand.back().getValue() == fifthRow[3].getValue() + 1 || playerHand.back().getValue() == fifthRow[3].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(fifthRow[3]);

                    fifthRow.erase(fifthRow.begin() + 3);

                    //Decrementing the vector length by one 
                    fifthLength--;

                    displayCards();

                    cout << endl;
                }
            }
            else if (playerChoice == 3 && playerChoiceRow == 5)
            {
                if (playerHand.back().getValue() == fifthRow[2].getValue() + 1 || playerHand.back().getValue() == fifthRow[2].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(fifthRow[2]);

                    fifthRow.erase(fifthRow.begin() + 2);

                    //Decrementing the vector length by one 
                    fifthLength--;

                    displayCards();

                    cout << endl;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;
                }
            }
            else if (playerChoice == 2 && playerChoiceRow == 5)
            {
                if (playerHand.back().getValue() == fifthRow[1].getValue() + 1 || playerHand.back().getValue() == fifthRow[1].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(fifthRow[1]);

                    fifthRow.erase(fifthRow.begin() + 1);

                    //Decrementing the vector length by one 
                    fifthLength--;

                    displayCards();

                    cout << endl;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;
                }
            }
            else if (playerChoice == 1 && playerChoiceRow == 5)
            {
                if (playerHand.back().getValue() == fifthRow.back().getValue() + 1 || playerHand.back().getValue() == fifthRow.back().getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(fifthRow[0]);

                    fifthRow.erase(fifthRow.begin());

                    //Decrementing the vector length by one 
                    fifthLength--;

                    displayCards();

                    cout << endl;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;
                }
            }


            cout << endl;

            //Checking if card value matches card name
            if (playerHand.back().getValue() == 0)
            {
                playerHand.back().setValue(1);

                cout << "Your card is: " << "Ace" << " of " << playerHand.back().getSuit() << endl;
            }
            else if (playerHand.back().getValue() == 1)
            {
                cout << "Your card is: " << "Ace" << " of " << playerHand.back().getSuit() << endl;
            }
            else if (playerHand.back().getValue() == 11)
            {
                cout << "Your card is: " << "Jack" << " of " << playerHand.back().getSuit() << endl;
            }
            else if (playerHand.back().getValue() == 12)
            {
                cout << "Your card is: " << "Queen" << " of " << playerHand.back().getSuit() << endl;
            }
            else if (playerHand.back().getValue() == 13)
            {
                cout << "Your card is: " << "King" << " of " << playerHand.back().getSuit() << endl;
            }
            else
            {
                cout << "Your card is: " << playerHand.back().getValue() << " of " << playerHand.back().getSuit() << endl;
            }

            cout << "Choose a card: ";

            cin >> playerChoice;

            cout << endl;

            cout << "Choose a card row: ";

            cin >> playerChoiceRow;

            //Checking if the vector is empty
            if (fifthLength == 0)
            {
                break;
            }

        }
       
    }
