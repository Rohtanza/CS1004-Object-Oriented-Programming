//
// Created by _rayhan on 5/3/23.
//

#ifndef OPP_PAPER_BTYPE_H
#define OPP_PAPER_BTYPE_H


#include "AType.h"

class BType : virtual protected AType {

protected:
    int z;
public:
    explicit BType(int a = 0);

    void print() const override;

};


#endif //OPP_PAPER_BTYPE_H
