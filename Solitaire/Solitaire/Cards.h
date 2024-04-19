#pragma once
#include "Cards.h"
#include <stack>
#include <string>
#include <iostream>
using namespace std;

//Creating a card class to store the card attributes
class Cards
{
private:
	//Creating variable properties of the card and storing them private
	string suit = "";
	int value = 0;

public:
	//Creating a public constructor for the card
	Cards(string CardSuit, int CardValue);

	Cards();

	//Creating functions to get the suit/value of a card
	string getSuit();
	int getValue();

	//Creating functions to set the suit/value of a card
	void setSuit(string newSuit);
	void setValue(int newValue);

};