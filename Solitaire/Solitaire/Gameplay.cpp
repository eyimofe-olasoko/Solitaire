#include "Gameplay.h"
using namespace std;

Gameplay::Gameplay(){}


void Gameplay::fifthRowLogic(CardRows cardRowRef) 
{
    //Looping while the player enters a number between 1 and 5
    while (playerChoice > 0 || playerChoice <= 5)
    {
        //Checking what card (playerChoice) and row (playerChoiceRow) the player choice
        if (playerChoice == 5)
        {
            //Checking if the playerChoice value is either 1 greater or 1 less than the playing card value
            if (playerHand.back().getValue() == cardRowRef.fifthRow[4].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fifthRow[4].getValue() - 1)
            {
                //Adding the playerChoice card to their hand
                playerHand.push_back(cardRowRef.fifthRow[4]);

                //Deleting the card as the index corresponding with the playerChoice
                cardRowRef.fifthRow.pop_back();

                //Decrementing the vector length by one 
                cardRowRef.fifthLength--;

                cardRowRef.displayCards();

                cout << endl;
            }
            else
            {
                cout << endl;

                cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                cout << endl;
            }
        }
        else if (playerChoice == 4)
        {
            if (playerHand.back().getValue() == cardRowRef.fifthRow[3].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fifthRow[3].getValue() - 1)
            {
                //Adding the playerChoice card to their hand
                playerHand.push_back(cardRowRef.fifthRow[3]);

                cardRowRef.fifthRow.erase(cardRowRef.fifthRow.begin() + 3);

                //Decrementing the vector length by one 
                cardRowRef.fifthLength--;

                cardRowRef.displayCards();

                cout << endl;
            }
        }
        else if(playerChoice == 3)
        {
            if (playerHand.back().getValue() == cardRowRef.fifthRow[2].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fifthRow[2].getValue() - 1)
            {
                //Adding the playerChoice card to their hand
                playerHand.push_back(cardRowRef.fifthRow[2]);

                cardRowRef.fifthRow.erase(cardRowRef.fifthRow.begin() + 2);

                //Decrementing the vector length by one 
                cardRowRef.fifthLength--;

                cardRowRef.displayCards();

                cout << endl;
            }
            else
            {
                cout << endl;

                cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                cout << endl;
            }
        }
        else if (playerChoice == 2)
        {
            if (playerHand.back().getValue() == cardRowRef.fifthRow[1].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fifthRow[1].getValue() - 1)
            {
                //Adding the playerChoice card to their hand
                playerHand.push_back(cardRowRef.fifthRow[1]);

                cardRowRef.fifthRow.erase(cardRowRef.fifthRow.begin() + 1);

                //Decrementing the vector length by one 
                cardRowRef.fifthLength--;

                cardRowRef.displayCards();

                cout << endl;
            }
            else
            {
                cout << endl;

                cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                cout << endl;
            }
        }
        else if (playerChoice == 1)
        {
            if (playerHand.back().getValue() == cardRowRef.fifthRow.back().getValue() + 1 || playerHand.back().getValue() == cardRowRef.fifthRow.back().getValue() - 1)
            {
                //Adding the playerChoice card to their hand
                playerHand.push_back(cardRowRef.fifthRow[0]);

                cardRowRef.fifthRow.erase(cardRowRef.fifthRow.begin());

                //Decrementing the vector length by one 
                cardRowRef.fifthLength--;

                cardRowRef.displayCards();

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

        //Checking if the vector is empty
        if (cardRowRef.fifthLength == 0)
        {
            break;
        }

    }
}