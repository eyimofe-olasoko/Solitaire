#pragma once
#include "Cards.h"
#include <stack>
#include <string>
#include <iostream>
using namespace std;

class Cards
{
private:
	string suit = "";
	int value = 0;

public:
	Cards(string CardSuit, int CardValue);

	Cards();

	string getSuit();
	int getValue();


	void setSuit(string newSuit);
	void setValue(int newValue);

};