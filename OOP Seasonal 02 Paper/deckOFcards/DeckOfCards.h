//
// Created by _rayhan on 5/3/23.
//

#ifndef DECKOFCARDS_DECKOFCARDS_H
#define DECKOFCARDS_DECKOFCARDS_H

#define DECKSIZE 52
#include <memory>
#include <vector>
#include "Card.h"


class DeckOfCards {
    // A unique pointer to the vector of cards
    std::vector<std::unique_ptr<Card>> deck;
    // A flag integer to keep track of the count, initialized with zero.
    int nextCard{0};

public:

    void shuffle ();
    std::unique_ptr<Card> dealCard();

    // nodiscard so compiler does not discard it.
    [[nodiscard]] bool  moreCards() const;

    DeckOfCards();
};


#endif //DECKOFCARDS_DECKOFCARDS_H
