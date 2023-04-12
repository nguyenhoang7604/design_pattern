/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#ifndef _CAR_
#define _CAR_

#include "builder.h"

class Car
{
private:
    int seats_;
    int engineSpeed_;
    bool hasGps_;
    bool hasTripComputer_;
public:
    Car(){};
    ~Car(){};
    void setSeat(int);
    void setEngineSpeed(int);
    void installGps(bool);
    void installTripComputer(bool);
    void information();
};

#endif // _CAR_