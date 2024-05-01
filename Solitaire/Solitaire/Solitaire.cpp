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
     
    //Creating a variable to track the number of cards in the card vectors
    int changeLength = 5;


    //Setting the seed of srand to 0 so a different number generates on each run of the game.
    srand(time(0));

    //Creating a deck object based on the deck class
    Deck solitaireDeck = Deck();

    //Creating a vector to store the player's cards
    vector<Cards> playerHand;

    vector<Cards> cardStock;

    //Shuffles card deck
    solitaireDeck.shuffle();

    //Creating a card row object based on the card row class
    CardRows playingCards = CardRows(solitaireDeck);

    //Displaying card rows
    playingCards.displayCards(changeLength);

    cout << endl;

    for (size_t i = 0; i < 17; i++)
    {
        cardStock.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();
    }

    do
    {

        cout << "Your staring card is: " << solitaireDeck.cardDeck.back().getValue() << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;

        cout << "Choose a card: ";

        cin >> playerChoice;

        if (playerChoice > 5 || playerChoice == 0)
        {
            cout << "ERROR!! Please enter a number between 1 and 5";
        }


        while (playerChoice > 0 && playerChoice <= 5)
        {
            if (playerChoice == 1)
            {
                playingCards.fifthRow.pop_back();

                changeLength--;

                playingCards.displayCards(changeLength);
            }
        }

        

        if (changeLength == 0)
        {
            break;
        }


    //Looping as long as the player types a number from 1 to 5
    } while (playerChoice > 5 || playerChoice == 0);

}


