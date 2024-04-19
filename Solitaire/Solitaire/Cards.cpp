#include "Cards.h"

Cards::Cards(string CardSuit, int CardValue) {

	suit = CardSuit;
	value = CardValue;

}

Cards::Cards() {

}


string Cards::getSuit() {
	return suit;
}

int Cards::getValue() {
	return value;
}

void Cards::setSuit(string newSuit) {
	suit = newSuit;
}

void Cards::setValue(int newValue) {
	value = newValue;
}
