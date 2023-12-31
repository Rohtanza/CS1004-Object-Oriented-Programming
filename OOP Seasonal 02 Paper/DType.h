//
// Created by _rayhan on 5/3/23.
//

#ifndef OPP_PAPER_DTYPE_H
#define OPP_PAPER_DTYPE_H


#include "CType.h"
#include "BType.h"

class DType : public BType, public CType {

public:
    void print() const override;

};


#endif //OPP_PAPER_DTYPE_H
