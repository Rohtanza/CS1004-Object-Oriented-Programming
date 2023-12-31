//
// Created by _rayhan on 5/3/23.
//
#include <bits/stdc++.h>
#include "DeckOfCards.h"
#include "Card.h"

DeckOfCards::DeckOfCards() {

    // Initializing our vector of decks
    for (int i = 0; i < DECKSIZE; i++) {
        short int face = i % 13;
        short int suit = i / 13;
        // pushing back the objects of card till DECK-SIZE of 52.
        deck.push_back(std::make_unique<Card>(face, suit));
    }
}

void DeckOfCards::shuffle() {
    // Shuffling the cards.
    std::srand(time(nullptr));
    for (int i = 0; i < deck.size(); i++) {
        int j = std::rand() % deck.size();
        // Using the function swap, instead of a temp object.
        swap(deck[i], deck[j]);
    }
}

std::unique_ptr<Card> DeckOfCards::dealCard() {
    if (moreCards())
        /*
         * If there are more cards, it moves the unique pointer to the next card in the deck,
         * using std::move() to transfer ownership to the calling code.
         * */
        return std::move(deck[nextCard++]);
        //else it returns the nullptr
    return nullptr;
}

bool DeckOfCards::moreCards() const {
    // if the next card is less than 52, till will return true else false.
    return nextCard < 52;
}





