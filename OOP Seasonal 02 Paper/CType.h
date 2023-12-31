//
// Created by _rayhan on 5/3/23.
//

#ifndef OPP_PAPER_CTYPE_H
#define OPP_PAPER_CTYPE_H


#include "AType.h"

class CType : virtual public AType {

private:

    int w{};

public:

    void print() const override;


};


#endif //OPP_PAPER_CTYPE_H
