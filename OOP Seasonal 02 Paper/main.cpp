#include <iostream>
#include "AType.h"
#include "BType.h"
#include "DType.h"

int main() {
//    AType a;
    /*
     * Can't make object of A class as it's
     * Abstract class.
     * */
    BType b(7);
    DType d;
    d.print();
    b.print();
    AType *a1 = new CType;
    a1->print();
}
