/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#ifndef _CARBUILDER_
#define _CARBUILDER_

#include "builder.h"
#include "car.h"
#include <memory>

class CarBuilder : public Builder
{
private:
    std::shared_ptr<Car> car_;

public:
    CarBuilder(/* args */);
    ~CarBuilder();
    virtual void reset() override;
    virtual void setSeats() override;
    virtual void setEngine() override;
    virtual void setTripComputer() override;
    virtual void setGps() override;
    std::shared_ptr<Car> getProduct();
};

#endif // _CARBUILDER_