/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#ifndef _TABACCO_
#define _TABACCO_

#include "visitable.h"

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