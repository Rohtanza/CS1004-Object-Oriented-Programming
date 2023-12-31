//
// Created by _rayhan on 5/3/23.
//

#ifndef DECKOFCARDS_CARD_H
#define DECKOFCARDS_CARD_H

#include <string>

class Card {

    // Two integers for face and suit.
    int face;
    int suit;
    // Two arrays to store the faces and suits strings.
    static const std::string faces[];
    static const std::string suits[];

public:

    /*
     * Constructor to initialize a Card object with the given face and suit.
     * Face and suit default to 0. 'explicit' keyword is used to avoid implicit conversions.
     * */
    explicit Card(int face = 0 , int suit =0 );

    void setFace(int face);

    void setSuit(int suit);

    std::string toString ();
};


#endif //DECKOFCARDS_CARD_H
