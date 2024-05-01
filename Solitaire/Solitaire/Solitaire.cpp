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

    //Creating a vector to store the player's cards
    vector<Cards> playerHand;

    //Creating a vector to store the card pile that the player can draw from
    vector<Cards> cardStock;

    //Shuffles card deck
    solitaireDeck.shuffle();

    //Creating a card row object based on the card row class
    CardRows playingCards = CardRows(solitaireDeck);

    //Displaying card rows
    playingCards.displayCards();

    cout << endl;

    for (size_t i = 0; i < 17; i++)
    {
        cardStock.push_back(solitaireDeck.cardDeck.back());

        solitaireDeck.cardDeck.pop_back();
    }

    do
    {
        //Diplaying the player starting card/getting card choice input
        cout << "Your staring card is: " << solitaireDeck.cardDeck.back().getValue() << " of " << solitaireDeck.cardDeck.back().getSuit() << endl;

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

            //Checking if the player chose the first card 
            if (playerChoice == 1 && playerChoiceRow == 5)
            {
                //Deleting the first card the vector 
                playingCards.fifthRow.erase(playingCards.fifthRow.begin());

                //Decrementing the vector length by one 
                playingCards.fifthLength--;

                playingCards.displayCards();

                cout << endl;

            }
            else if (playerChoice == 2 && playerChoiceRow == 5)
            {
                playingCards.fifthRow.erase(playingCards.fifthRow.begin() + 1);

                //Decrementing the vector length by one 
                playingCards.fifthLength--;

                playingCards.displayCards();

                cout << endl;
            }
            else if (playerChoice == 3 && playerChoiceRow == 5)
            {
                playingCards.fifthRow.erase(playingCards.fifthRow.begin() + 2);

                //Decrementing the vector length by one 
                playingCards.fifthLength--;

                playingCards.displayCards();

                cout << endl;
            }
            else if (playerChoice == 4 && playerChoiceRow == 5)
            {
                playingCards.fifthRow.erase(playingCards.fifthRow.begin() + 3);

                //Decrementing the vector length by one 
                playingCards.fifthLength--;

                playingCards.displayCards();

                cout << endl;
            }
            else if (playerChoice == 5 && playerChoiceRow == 5)
            {
                playingCards.fifthRow.erase(playingCards.fifthRow.begin() + 4);

                //Decrementing the vector length by one 
                playingCards.fifthLength--;

                playingCards.displayCards();

                cout << endl;
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


