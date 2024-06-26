#include "Gameplay.h"
using namespace std;

Gameplay::Gameplay(){}


void Gameplay::addToCardPile(Deck sourceDeck)
{
    for (size_t i = 0; i < 26; i++)
    {
        //Adding cards to the stock pile
        cardPile.push_back(sourceDeck.cardDeck.back());

        sourceDeck.cardDeck.pop_back();
    }
}

void Gameplay::displayPlayerHand() 
{
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
}

void Gameplay::fifthRowLogic(CardRows cardRowRef, Deck cardRowRefDeck) 
{
    cout << endl;
    cout << endl;
loop:

    do
    {
        if (cardPile.size() == 1)
        {
            cout << endl;

            cout << "You lose!!" << endl;

            cout << "Your score is: " << playerScore << endl;

            //Ending the program
            exit(0);
        }
        if (cardRowRef.fifthLength == 1)
        {
            //Breaking of the loop
            return;
        }

        cout << endl;

        //Checking if card value matches card name
        displayPlayerHand();

        do
        {
            cout << endl;

            cout << "New card? Enter Y for yes and N for no: ";

            cin >> newCard;

            while (newCard == "Y")
            {
                //Checking if cardPile has been used up by the player.
                if (cardPile.size() > 1)
                {
                    //Replacing the player's starting card
                    playerHand.pop_back();

                    playerHand.push_back(cardPile.back());

                    cardPile.pop_back();

                }
                else 
                {
                    goto loop;
                }

                cardRowRef.displayCards();

                cout << endl;

                cout << endl;
                
                displayPlayerHand();

                cout << endl;

                cout << "New card? Enter Y for yes and N for no: ";

                cin >> newCard;
            }

            //Displaying an error if the player doesn't enter a Y or N
            if (newCard != "Y" && newCard != "N")
            {
                cout << "ERROR!! Please enter Y or N " << endl;
            }

            //Looping if the player doesn't type a Y or N
        } while (newCard != "Y" && newCard != "N");

        cout << "Choose a card: ";

        cin >> playerChoice;

        //Displaying an error if the player doesn't enter a number between 1 and 5
        if (playerChoice > 5 || playerChoice == 0)
        {
            cout << endl;

            cout << "ERROR!! Please enter a number between 1 and 5" << endl;
        }

    //Looping as long as the player types a number from 1 to 5
    } while (playerChoice > 5 || playerChoice == 0);

    //Looping while the player enters a number between 1 and 5
    while (playerChoice > 0 && playerChoice <= 5)
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

                //Increasing playerScore 
                playerScore++;

                cardRowRef.displayCards();

                cout << endl;

                //Looping back to the first do/while loop
                goto loop;
            }
            else
            {

                cout << endl;

                cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                cout << endl;

                goto loop;
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

                //Increasing playerScore 
                playerScore++;

                cardRowRef.displayCards();

                cout << endl;

                goto loop;
            }
        }
        else if (playerChoice == 3)
        {
            if (playerHand.back().getValue() == cardRowRef.fifthRow[2].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fifthRow[2].getValue() - 1)
            {
                //Adding the playerChoice card to their hand
                playerHand.push_back(cardRowRef.fifthRow[2]);

                cardRowRef.fifthRow.erase(cardRowRef.fifthRow.begin() + 2);

                //Decrementing the vector length by one 
                cardRowRef.fifthLength--;

                //Increasing playerScore 
                playerScore++;

                cardRowRef.displayCards();

                cout << endl;

                goto loop;
            }
            else
            {
                cout << endl;

                cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                cout << endl;

                goto loop;
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

                //Increasing playerScore 
                playerScore++;

                cardRowRef.displayCards();

                cout << endl;

                goto loop;
            }
            else
            {
                cout << endl;

                cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                cout << endl;

                goto loop;
            }
        }
        else if (playerChoice == 1)
        {
            if (playerHand.back().getValue() == cardRowRef.fifthRow[0].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fifthRow[0].getValue() - 1)
            {
                if (cardRowRef.fifthLength != 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.fifthRow[0]);

                    cardRowRef.fifthRow.erase(cardRowRef.fifthRow.begin());

                    //Decrementing the vector length by one     
                    cardRowRef.fifthLength--;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
                else 
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.fifthRow[0]);

                    //Increasing playerScore 
                    playerScore++;

                    goto loop;
                }
            }
            else
            {
                cout << endl;

                cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                cout << endl;

                goto loop;
            }
        }
    }
}

void Gameplay::fourthRowLogic(CardRows cardRowRef, Deck cardRowRefDeck) 
{
    //Only running the code if the player has not depleted the cardPile vector
    if (cardPile.size() != 1)
    {
        //Redefing the value of fifthLength is make sure it remain 1
        cardRowRef.fifthLength = 1;

        cout << endl;
        cout << endl;

    loop:

        do
        {
            if (cardPile.size() == 1)
            {
                cout << endl;

                cout << "You lose!!" << endl;

                cout << "Your score is: " << playerScore << endl;

                //Ending the program
                exit(0);
            }
            if (cardRowRef.fourthLength == 1)
            {
                //Breaking of the loop
                return;
            }

            cout << endl;

            //Checking if card value matches card name
            displayPlayerHand();

            do
            {
                cout << endl;

                cout << "New card? Enter Y for yes and N for no: ";

                cin >> newCard;

                while (newCard == "Y")
                {
                    //Checking if cardPile has been used up by the player.
                    if (cardPile.size() > 1)
                    {
                        //Replacing the player's starting card
                        playerHand.pop_back();

                        playerHand.push_back(cardPile.back());

                        cardPile.pop_back();

                    }
                    else
                    {
                        goto loop;
                    }

                    cardRowRef.displayCards();

                    cout << endl;

                    cout << endl;

                    displayPlayerHand();

                    cout << endl;

                    cout << "New card? Enter Y for yes and N for no: ";

                    cin >> newCard;
                }

                //Displaying an error if the player doesn't enter a Y or N
                if (newCard != "Y" && newCard != "N")
                {
                    cout << "ERROR!! Please enter Y or N " << endl;
                }

                //Looping if the player doesn't type a Y or N
            } while (newCard != "Y" && newCard != "N");

            cout << "Choose a card: ";

            cin >> playerChoice;

            //Displaying an error if the player doesn't enter a number between 1 and 5
            if (playerChoice > 5 || playerChoice == 0)
            {
                cout << endl;

                cout << "ERROR!! Please enter a number between 1 and 5" << endl;
            }
            //Looping as long as the player types a number from 1 to 5
        } while (playerChoice > 5 || playerChoice == 0);

        //Looping while the player enters a number between 1 and 5
        while (playerChoice > 0 && playerChoice <= 5)
        {
            //Checking what card (playerChoice) and row (playerChoiceRow) the player choice
            if (playerChoice == 5)
            {
                //Checking if the playerChoice value is either 1 greater or 1 less than the playing card value
                if (playerHand.back().getValue() == cardRowRef.fourthRow[4].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fourthRow[4].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.fourthRow[4]);

                    //Deleting the card as the index corresponding with the playerChoice
                    cardRowRef.fourthRow.pop_back();

                    //Decrementing the vector length by one 
                    cardRowRef.fourthLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    //Looping back to the first do/while loop
                    goto loop;
                }
                else
                {

                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 4)
            {
                if (playerHand.back().getValue() == cardRowRef.fourthRow[3].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fourthRow[3].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.fourthRow[3]);

                    cardRowRef.fourthRow.erase(cardRowRef.fourthRow.begin() + 3);

                    //Decrementing the vector length by one 
                    cardRowRef.fourthLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 3)
            {
                if (playerHand.back().getValue() == cardRowRef.fourthRow[2].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fourthRow[2].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.fourthRow[2]);

                    cardRowRef.fourthRow.erase(cardRowRef.fourthRow.begin() + 2);

                    //Decrementing the vector length by one 
                    cardRowRef.fourthLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 2)
            {
                if (playerHand.back().getValue() == cardRowRef.fourthRow[1].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fourthRow[1].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.fourthRow[1]);

                    cardRowRef.fourthRow.erase(cardRowRef.fourthRow.begin() + 1);

                    //Decrementing the vector length by one 
                    cardRowRef.fourthLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 1)
            {
                if (playerHand.back().getValue() == cardRowRef.fourthRow[0].getValue() + 1 || playerHand.back().getValue() == cardRowRef.fourthRow[0].getValue() - 1)
                {
                    if (cardRowRef.fourthLength != 1)
                    {
                        //Adding the playerChoice card to their hand
                        playerHand.push_back(cardRowRef.fourthRow[0]);

                        cardRowRef.fourthRow.erase(cardRowRef.fourthRow.begin());

                        //Decrementing the vector length by one     
                        cardRowRef.fourthLength--;

                        cardRowRef.displayCards();

                        cout << endl;

                        goto loop;
                    }
                    else
                    {
                        //Adding the playerChoice card to their hand
                        playerHand.push_back(cardRowRef.fourthRow[0]);

                        //Increasing playerScore 
                        playerScore++;

                        goto loop;
                    }
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
        }
    }
}

void Gameplay::thirdRowLogic(CardRows cardRowRef, Deck cardRowRefDeck) 
{

    if (cardPile.size() != 1)
    {
        //Redefing the value of lengths of the vectors is make sure it remains 1
        cardRowRef.fifthLength = 1;
        cardRowRef.fourthLength = 1;

        cout << endl;
        cout << endl;

    loop:

        do
        {

            if (cardPile.size() == 1)
            {
                cout << endl;

                cout << "You lose!!" << endl;

                cout << "Your score is: " << playerScore << endl;

                //Ending the program
                exit(0);
            }
            if (cardRowRef.thirdLength == 1)
            {
                //Breaking of the loop
                return;
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

            do
            {
                cout << endl;

                cout << "New card? Enter Y for yes and N for no: ";

                cin >> newCard;

                while (newCard == "Y")
                {
                    //Checking if cardPile has been used up by the player.
                    if (cardPile.size() > 1)
                    {
                        //Replacing the player's starting card
                        playerHand.pop_back();

                        playerHand.push_back(cardPile.back());

                        cardPile.pop_back();

                    }
                    else
                    {
                        goto loop;
                    }

                    cardRowRef.displayCards();

                    cout << endl;

                    cout << endl;

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

                    cout << endl;

                    cout << "New card? Enter Y for yes and N for no: ";

                    cin >> newCard;
                }

                //Displaying an error if the player doesn't enter a Y or N
                if (newCard != "Y" && newCard != "N")
                {
                    cout << "ERROR!! Please enter Y or N " << endl;
                }

                //Looping if the player doesn't type a Y or N
            } while (newCard != "Y" && newCard != "N");

            cout << "Choose a card: ";

            cin >> playerChoice;

            //Displaying an error if the player doesn't enter a number between 1 and 5
            if (playerChoice > 5 || playerChoice == 0)
            {
                cout << endl;

                cout << "ERROR!! Please enter a number between 1 and 5" << endl;
            }
            //Looping as long as the player types a number from 1 to 5
        } while (playerChoice > 5 || playerChoice == 0);

        //Looping while the player enters a number between 1 and 5
        while (playerChoice > 0 && playerChoice <= 5)
        {
            //Checking what card (playerChoice) and row (playerChoiceRow) the player choice
            if (playerChoice == 5)
            {
                //Checking if the playerChoice value is either 1 greater or 1 less than the playing card value
                if (playerHand.back().getValue() == cardRowRef.thirdRow[4].getValue() + 1 || playerHand.back().getValue() == cardRowRef.thirdRow[4].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.thirdRow[4]);

                    //Deleting the card as the index corresponding with the playerChoice
                    cardRowRef.thirdRow.pop_back();

                    //Decrementing the vector length by one 
                    cardRowRef.thirdLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    //Looping back to the first do/while loop
                    goto loop;
                }
                else
                {

                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 4)
            {
                if (playerHand.back().getValue() == cardRowRef.thirdRow[3].getValue() + 1 || playerHand.back().getValue() == cardRowRef.thirdRow[3].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.thirdRow[3]);

                    cardRowRef.thirdRow.erase(cardRowRef.thirdRow.begin() + 3);

                    //Decrementing the vector length by one 
                    cardRowRef.thirdLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 3)
            {
                if (playerHand.back().getValue() == cardRowRef.thirdRow[2].getValue() + 1 || playerHand.back().getValue() == cardRowRef.thirdRow[2].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.thirdRow[2]);

                    cardRowRef.thirdRow.erase(cardRowRef.thirdRow.begin() + 2);

                    //Decrementing the vector length by one 
                    cardRowRef.thirdLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 2)
            {
                if (playerHand.back().getValue() == cardRowRef.thirdRow[1].getValue() + 1 || playerHand.back().getValue() == cardRowRef.thirdRow[1].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.thirdRow[1]);

                    cardRowRef.thirdRow.erase(cardRowRef.thirdRow.begin() + 1);

                    //Decrementing the vector length by one 
                    cardRowRef.thirdLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 1)
            {
                if (playerHand.back().getValue() == cardRowRef.thirdRow[0].getValue() + 1 || playerHand.back().getValue() == cardRowRef.thirdRow[0].getValue() - 1)
                {
                    if (cardRowRef.thirdLength != 1)
                    {
                        //Adding the playerChoice card to their hand
                        playerHand.push_back(cardRowRef.thirdRow[0]);

                        cardRowRef.thirdRow.erase(cardRowRef.thirdRow.begin());

                        //Decrementing the vector length by one     
                        cardRowRef.thirdLength--;

                        cardRowRef.displayCards();

                        cout << endl;

                        goto loop;
                    }
                    else
                    {
                        //Adding the playerChoice card to their hand
                        playerHand.push_back(cardRowRef.thirdRow[0]);

                        //Increasing playerScore 
                        playerScore++;

                        goto loop;
                    }
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
        }
    }
}

void Gameplay::secondRowLogic(CardRows cardRowRef, Deck cardRowRefDeck) 
{

    if (cardPile.size() != 1)
    {
        //Redefing the value of lengths of the vectors is make sure it remains 1
        cardRowRef.fifthLength = 1;
        cardRowRef.fourthLength = 1;
        cardRowRef.thirdLength = 1;

        cout << endl;
        cout << endl;

    loop:

        do
        {
            if (cardPile.size() == 1)
            {
                cout << endl;

                cout << "You lose!!" << endl;

                cout << "Your score is: " << playerScore << endl;

                //Ending the program
                exit(0);
            }
            if (cardRowRef.secondLength == 1)
            {
                //Breaking of the loop

                cout << "You won!!" << endl;

                return;
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

            do
            {
                cout << endl;

                cout << "New card? Enter Y for yes and N for no: ";

                cin >> newCard;

                while (newCard == "Y")
                {
                    //Checking if cardPile has been used up by the player.
                    if (cardPile.size() > 1)
                    {
                        //Replacing the player's starting card
                        playerHand.pop_back();

                        playerHand.push_back(cardPile.back());

                        cardPile.pop_back();

                    }
                    else
                    {
                        goto loop;
                    }

                    cardRowRef.displayCards();

                    cout << endl;

                    cout << endl;

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

                    cout << endl;

                    cout << "New card? Enter Y for yes and N for no: ";

                    cin >> newCard;
                }

                //Displaying an error if the player doesn't enter a Y or N
                if (newCard != "Y" && newCard != "N")
                {
                    cout << "ERROR!! Please enter Y or N " << endl;
                }

                //Looping if the player doesn't type a Y or N
            } while (newCard != "Y" && newCard != "N");

            cout << "Choose a card: ";

            cin >> playerChoice;

            //Displaying an error if the player doesn't enter a number between 1 and 5
            if (playerChoice > 5 || playerChoice == 0)
            {
                cout << endl;

                cout << "ERROR!! Please enter a number between 1 and 5" << endl;
            }
            //Looping as long as the player types a number from 1 to 5
        } while (playerChoice > 5 || playerChoice == 0);

        //Looping while the player enters a number between 1 and 5
        while (playerChoice > 0 && playerChoice <= 5)
        {
            //Checking what card (playerChoice) and row (playerChoiceRow) the player choice
            if (playerChoice == 5)
            {
                //Checking if the playerChoice value is either 1 greater or 1 less than the playing card value
                if (playerHand.back().getValue() == cardRowRef.secondRow[4].getValue() + 1 || playerHand.back().getValue() == cardRowRef.secondRow[4].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.secondRow[4]);

                    //Deleting the card as the index corresponding with the playerChoice
                    cardRowRef.secondRow.pop_back();

                    //Decrementing the vector length by one 
                    cardRowRef.secondLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    //Looping back to the first do/while loop
                    goto loop;
                }
                else
                {

                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 4)
            {
                if (playerHand.back().getValue() == cardRowRef.secondRow[3].getValue() + 1 || playerHand.back().getValue() == cardRowRef.secondRow[3].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.secondRow[3]);

                    cardRowRef.secondRow.erase(cardRowRef.secondRow.begin() + 3);

                    //Decrementing the vector length by one 
                    cardRowRef.secondLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 3)
            {
                if (playerHand.back().getValue() == cardRowRef.secondRow[2].getValue() + 1 || playerHand.back().getValue() == cardRowRef.secondRow[2].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.secondRow[2]);

                    cardRowRef.secondRow.erase(cardRowRef.secondRow.begin() + 2);

                    //Decrementing the vector length by one 
                    cardRowRef.secondLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 2)
            {
                if (playerHand.back().getValue() == cardRowRef.secondRow[1].getValue() + 1 || playerHand.back().getValue() == cardRowRef.secondRow[1].getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(cardRowRef.secondRow[1]);

                    cardRowRef.secondRow.erase(cardRowRef.secondRow.begin() + 1);

                    //Decrementing the vector length by one 
                    cardRowRef.secondLength--;

                    //Increasing playerScore 
                    playerScore++;

                    cardRowRef.displayCards();

                    cout << endl;

                    goto loop;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
            else if (playerChoice == 1)
            {
                if (playerHand.back().getValue() == cardRowRef.secondRow[0].getValue() + 1 || playerHand.back().getValue() == cardRowRef.secondRow[0].getValue() - 1)
                {
                    if (cardRowRef.secondLength != 1)
                    {
                        //Adding the playerChoice card to their hand
                        playerHand.push_back(cardRowRef.secondRow[0]);

                        cardRowRef.secondRow.erase(cardRowRef.secondRow.begin());

                        //Decrementing the vector length by one     
                        cardRowRef.secondLength--;

                        cardRowRef.displayCards();

                        cout << endl;

                        goto loop;
                    }
                    else
                    {
                        //Adding the playerChoice card to their hand
                        playerHand.push_back(cardRowRef.secondRow[0]);

                        //Increasing playerScore 
                        playerScore++;

                        goto loop;
                    }
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;

                    cout << endl;

                    goto loop;
                }
            }
        }
    }
}




