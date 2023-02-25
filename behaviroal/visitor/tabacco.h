#ifndef _TABACCO_
#define _TABACCO_

#include "visitable.h"
#include "visitor.h"
//  class Visitor;


class Tabacco : public Visitable
{
private:
    double price_;

public:
    Tabacco(double price);
    ~Tabacco();
    double getPrice();
    double accept(Visitor* visitor) override;
};

#endif