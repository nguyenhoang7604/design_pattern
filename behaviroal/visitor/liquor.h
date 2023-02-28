/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#ifndef _LIQUOR_
#define _LIQUOR_

#include <iostream>
#include "visitable.h"

class Liquor : public Visitable {
private:
    double price_;
public:
    Liquor(double price);
    ~Liquor();
    double getPrice();
    virtual double accept(std::shared_ptr<Visitor> visitor) override;
};

#endif // _LIQUOR_