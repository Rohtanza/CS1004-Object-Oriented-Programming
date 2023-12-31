//
// Created by rayhan on 3/22/23.
//

#ifndef QUESTIONNO02_CARD_H
#define QUESTIONNO02_CARD_H

#include <string>

class Card {
    static string faces[13];
    static string suits[4];
    int face;
    int suit;
public:
    Card(int, int);

    string toString(int, int);
};


#endif //QUESTIONNO02_CARD_H
