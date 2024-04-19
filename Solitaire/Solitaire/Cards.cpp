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

//Inheriting the Card class setSuit/setValue functions.
void Cards::setSuit(string newSuit) {

	//Setting Card class' suit value to the setSuit parameter allowing me to change the value in main() using the setSuit function
	suit = newSuit;
}
//Inheriting the Card class setSuit/setValue functions.
void Cards::setValue(int newValue) {

	//Setting Card class' card value to the setValue() parameter allowing me to change the value in main() using the setValue function
	value = newValue;
}
