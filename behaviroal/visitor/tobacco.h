/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#ifndef _TOBACCO_
#define _TOBACCO_

#include "visitable.h"

class Tobacco : public Visitable
{
private:
    double price_;

public:
    Tobacco(double price);
    ~Tobacco();
    double getPrice();
    double accept(std::shared_ptr<Visitor> visitor) override;
};

#endif // _TOBACCO_