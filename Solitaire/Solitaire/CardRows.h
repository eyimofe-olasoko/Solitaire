#pragma once
#include <string>
#include "Cards.h"
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

    CardRows();

};

