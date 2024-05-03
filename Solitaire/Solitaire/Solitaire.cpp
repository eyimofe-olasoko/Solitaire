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
    //Creating a variable to store the card the player chose
    int playerChoice = 0;

    //Creating a variable that allows player to choose the card row they want to choose from
    int playerChoiceRow = 0;
     
    //Creating a variable to track the number of cards in the card vectors
    int changeLength = 5;

    //Setting the seed of srand to 0 so a different number generates on each run of the game.
    srand(time(0));

    //Creating a deck object based on the deck class
    Deck solitaireDeck = Deck();

    //Creating a vector to store the card pile that the player can draw from
    vector<Cards> cardStock;

    //Creating a vector to store the player's cards
    vector<Cards> playerHand;

    //Shuffles card deck
    solitaireDeck.shuffle();

    //Creating a card row object based on the card row class
    CardRows playingCards = CardRows(solitaireDeck);

    //Displaying card rows
    playingCards.displayCards();

    cout << endl;

    //Adding 17 cards to stock pile
    for (size_t i = 0; i < 17; i++)
    {
        cardStock.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();
    }

    do
    {
        cout << endl;

        //Checking if card value matches card name
        if (solitaireDeck.cardDeck.back().getValue() == 0)
        {
            solitaireDeck.cardDeck.back().setValue(1);

            cout << "Your starting card is: " << "Ace" << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;
        }
        else if (solitaireDeck.cardDeck.back().getValue() == 0)
        {
            cout << "Your starting card is: " << "Ace" << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;
        }
        else if (solitaireDeck.cardDeck.back().getValue() == 11)
        {
            cout << "Your starting card is: " << "Jack" << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;
        }
        else if (solitaireDeck.cardDeck.back().getValue() == 12)
        {
            cout << "Your starting card is: " << "Queen" << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;
        }
        else if (solitaireDeck.cardDeck.back().getValue() == 13)
        {
            cout << "Your starting card is: " << "King" << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;
        }
        else
        {
            cout << "Your starting card is: " << solitaireDeck.cardDeck.back().getValue() << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;
        }

        cout << "Choose a card: ";

        cin >> playerChoice;

        cout << endl;

        cout << "Choose a card row: ";
        
        cin >> playerChoiceRow;


        //Displaying an error if the player doesn't enter a number between 1 and 5
        if (playerChoice > 5 || playerChoice == 0)
        {
            cout << "ERROR!! Please enter a number between 1 and 5";
        }

        //Looping while the player enters a number between 1 and 5
        while (playerChoice > 0 || playerChoice <= 5)
        {
            //Checking what card (playerChoice) and row (playerChoiceRow) the player choice
            if (playerChoice == 1 && playerChoiceRow == 5)
            {
                //Checking if the playerChoice value is either 1 greater or 1 less than the playing card value
                if (playerChoice == playingCards.fifthRow.back().getValue() + 1 || playerChoice == playingCards.fifthRow.back().getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(playingCards.fifthRow[4]);

                    //Deleting the card as the index corresponding with the playerChoice
                    playingCards.fifthRow.pop_back();

                    //Decrementing the vector length by one 
                    playingCards.fifthLength--;

                    playingCards.displayCards();

                    cout << endl;
                }
                else 
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;
                }
            }
            else if (playerChoice == 2 && playerChoiceRow == 5)
            {
                if (playerChoice == playingCards.fifthRow.back().getValue() + 1 || playerChoice == playingCards.fifthRow.back().getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(playingCards.fifthRow[3]);

                    playingCards.fifthRow.erase(playingCards.fifthRow.begin() + 3);

                    //Decrementing the vector length by one 
                    playingCards.fifthLength--;

                    playingCards.displayCards();

                    cout << endl;
                }
            }
            else if (playerChoice == 3 && playerChoiceRow == 5)
            {
                if (playerChoice == playingCards.fifthRow.back().getValue() + 1 || playerChoice == playingCards.fifthRow.back().getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(playingCards.fifthRow[2]);

                    playingCards.fifthRow.erase(playingCards.fifthRow.begin() + 2);

                    //Decrementing the vector length by one 
                    playingCards.fifthLength--;

                    playingCards.displayCards();

                    cout << endl;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;
                }
            }
            else if (playerChoice == 4 && playerChoiceRow == 5)
            {
                if (playerChoice == playingCards.fifthRow.back().getValue() + 1 || playerChoice == playingCards.fifthRow.back().getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(playingCards.fifthRow[1]);

                    playingCards.fifthRow.erase(playingCards.fifthRow.begin() + 1);

                    //Decrementing the vector length by one 
                    playingCards.fifthLength--;

                    playingCards.displayCards();

                    cout << endl;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;
                }
            }
            else if (playerChoice == 5 && playerChoiceRow == 5)
            {
                if (playerChoice == playingCards.fifthRow.back().getValue() + 1 || playerChoice == playingCards.fifthRow.back().getValue() - 1)
                {
                    //Adding the playerChoice card to their hand
                    playerHand.push_back(playingCards.fifthRow[0]);

                    playingCards.fifthRow.erase(playingCards.fifthRow.begin());

                    //Decrementing the vector length by one 
                    playingCards.fifthLength--;

                    playingCards.displayCards();

                    cout << endl;
                }
                else
                {
                    cout << endl;

                    cout << "Sorry!! the value of the card must be 1 below or 1 above your starting card!" << endl;
                }
            }

            if (playerChoice == 1 && playerChoiceRow == 4)
            {
                
            }
            
            cout << endl;

            cout << "Choose a card: ";

            cin >> playerChoice;

            cout << endl;

            cout << "Choose a card row: ";

            cin >> playerChoiceRow;
        }

       
    //Looping as long as the player types a number from 1 to 5
    } while (playerChoice > 5 || playerChoice == 0);

}


