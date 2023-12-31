//
// Created by _rayhan on 5/3/23.
//

#ifndef OPP_PAPER_ATYPE_H
#define OPP_PAPER_ATYPE_H


class AType {

protected:
    int y;
    int x;
public:
    AType();

    virtual void print() const = 0;

};


#endif //OPP_PAPER_ATYPE_H
