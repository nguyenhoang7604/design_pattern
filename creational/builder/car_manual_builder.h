/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#ifndef _CARMANUALBUILDER_
#define _CARMANUALBUILDER_

#include "builder.h"
#include "manual.h"

class CarManualBuilder : public Builder
{
private:
    Manual* manual;
public:
    CarManualBuilder(/* args */);
    ~CarManualBuilder();
    virtual void reset() override;
    virtual void setSeats() override;
    virtual void setEngine() override;
    virtual void setTripComputer() override;
    virtual void setGps() override;
    Manual* getProduct();
};

#endif // _CARMANUALBUILDER_