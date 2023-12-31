#include <iostream>
#include "DeckOfCards.h"

int main() {
    // Creating our programme starts with creating an object of type DeckOfCard (a deck of 52 cards).
    DeckOfCards deck;

    // Shuffling the cards.
    deck.shuffle();

    // A loop to deal all cards to user.
    while (deck.moreCards()) {
        std::unique_ptr<Card> card = deck.dealCard();
        std::cout << card->toString() << std::endl;
    }

    return 0;
}
