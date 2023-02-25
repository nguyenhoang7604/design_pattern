#include "necessity.h"

Necessity::Necessity(double price)
 : price_(price)
{
}

Necessity::~Necessity()
{
}

double Necessity::getPrice()
{
    return price_;
}

double Necessity::accept(Visitor* visitor)
{
    return visitor->visit(this);
}