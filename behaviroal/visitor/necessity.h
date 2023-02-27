/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#ifndef _NECESSITY_
#define _NECESSITY_

#include "visitable.h"

class Necessity : public Visitable
{
private:
    double price_;

public:
    Necessity(double price);
    ~Necessity();
    double getPrice();
    double accept(Visitor *visitor) override;
};

#endif // _NECESSITY_