#pragma once
#include <string>
#include "Cards.h"
#include "Deck.h"
#include <vector>

using namespace std;

class CardRows
{
public:

    //Creating a vector to store all the cards in the row
    vector<Cards> firstRow;
    vector<Cards> secondRow;
    vector<Cards> thirdRow;
    vector<Cards> fourthRow;
    vector<Cards> fifthRow;

    CardRows(Deck& sourceDeck);

    void displayCards();

    //Creating variable to track the length of the vector
    int firstLength = 5;
    int secondLength = 5;
    int thirdLength = 5;
    int fourthLength = 5;
    int fifthLength = 5;

    
};

