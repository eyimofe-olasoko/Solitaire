#include "CardRows.h"
#include "Deck.h"


    CardRows::CardRows() {

    for (size_t item = 0; item < 5; item++)
    {
        //Adding cards to the card rows
        firstRow.push_back(Deck().cardDeck.back());

        Deck().cardDeck.pop_back();

        secondRow.push_back(Deck().cardDeck.back());

        Deck().cardDeck.pop_back();

        thirdRow.push_back(Deck().cardDeck.back());

        Deck().cardDeck.pop_back();

        fourthRow.push_back(Deck().cardDeck.back());

        Deck().cardDeck.pop_back();

        fifthRow.push_back(Deck().cardDeck.back());

        Deck().cardDeck.pop_back();
    }
}
