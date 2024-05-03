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
    //Setting the seed of srand to 0 so a different number generates on each run of the game.
    srand(time(0));

    //Creating a deck object based on the deck class
    Deck solitaireDeck = Deck();

    //Creating a vector to store the card pile that the player can draw from
    vector<Cards> cardStock;

    //Creating a vector to store the player's cards
    //vector<Cards> playerHand;

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

    //Adding a starting card to playerHand
    playingCards.playerHand.push_back(solitaireDeck.cardDeck.back());

    do
    {
        cout << endl;

        //Checking if card value matches card name
        if (playingCards.playerHand.back().getValue() == 0)
        {
            playingCards.playerHand.back().setValue(1);

            cout << "Your card is: " << "Ace" << " of " << playingCards.playerHand.back().getSuit() << endl;
        }
        else if (playingCards.playerHand.back().getValue() == 1)
        {
            cout << "Your card is: " << "Ace" << " of " << playingCards.playerHand.back().getSuit() << endl;
        }
        else if (playingCards.playerHand.back().getValue() == 11)
        {
            cout << "Your card is: " << "Jack" << " of " << playingCards.playerHand.back().getSuit() << endl;
        }
        else if (playingCards.playerHand.back().getValue() == 12)
        {
            cout << "Your card is: " << "Queen" << " of " << playingCards.playerHand.back().getSuit() << endl;
        }
        else if (playingCards.playerHand.back().getValue() == 13)
        {
            cout << "Your card is: " << "King" << " of " << playingCards.playerHand.back().getSuit() << endl;
        }
        else
        {
            cout << "Your card is: " << playingCards.playerHand.back().getValue() << " of " << playingCards.playerHand.back().getSuit() << endl;
        }

        cout << endl;

        cout << "Choose a card: ";

        cin >> playingCards.playerChoice;

        cout << endl;

        cout << "Choose a card row: ";
        
        cin >> playingCards.playerChoiceRow;


        //Displaying an error if the player doesn't enter a number between 1 and 5
        if (playingCards.playerChoice > 5 || playingCards.playerChoice == 0)
        {
            cout << "ERROR!! Please enter a number between 1 and 5";
        }

        playingCards.fifthRowLogic();

       
    //Looping as long as the player types a number from 1 to 5
    } while (playingCards.playerChoice > 5 || playingCards.playerChoice == 0);
}


