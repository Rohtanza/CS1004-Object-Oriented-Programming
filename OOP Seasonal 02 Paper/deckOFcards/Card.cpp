//
// Created by _rayhan on 5/3/23.
//



#include "Card.h"

const std::string Card::faces[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
const std::string Card::suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};


Card::Card(int face, int suit) {
    setFace(face);
    setSuit(suit);

}

void Card::setFace(int face) {
    Card::face = face;
}

void Card::setSuit(int suit) {
    Card::suit = suit;
}

std::string Card::toString() {

    return faces[face]+" of "+ suits[suit];

}
