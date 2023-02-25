#include "tabacco.h"

Tabacco::Tabacco(double price)
{
    price_ = price;
}

Tabacco::~Tabacco()
{
}

double Tabacco::getPrice()
{
    return price_;
}

double Tabacco::accept(Visitor* visitor)
{
    return visitor->visit(this);
}
