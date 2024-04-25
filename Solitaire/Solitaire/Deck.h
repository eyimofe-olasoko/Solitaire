#pragma once
#include <string>
#include <iostream>
#include "Cards.h"
#include <vector>
#include <random>
using namespace std;

class Deck {

public:

	vector<Cards> cardDeck;

	Deck();

	void shuffle();

	//Creating a function to display all the card within the cardDeck
	void Output();
};