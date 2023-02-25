
#ifndef _VISITOR_
#define _VISITOR_

#include <iostream>
#include "liquor.h"
#include "necessity.h"
#include "tabacco.h"

class Visitor
{
private:
    /* data */
public:
    Visitor();
    ~Visitor();
    virtual double visit(Liquor* liquor) = 0;
    virtual double visit(Necessity* necessity) = 0;
    virtual double visit(Tabacco* tabacco) = 0;
};

Visitor::Visitor()
{
}

Visitor::~Visitor()
{
}

#endif // _VISITOR_