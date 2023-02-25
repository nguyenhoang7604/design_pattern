#ifndef _LIQUOR_
#define _LIQUOR_

#include <iostream>
#include "visitable.h"
#include "visitor.h"

class Liquor : public Visitable {
private:
    double price_;
public:
    Liquor(double price);
    ~Liquor();
    double getPrice();
    virtual double accept(Visitor* visitor) override;
};

#endif // _LIQUOR_