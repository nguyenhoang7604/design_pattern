/*
    Author: TomNguyen
    Created: 12/Apr/2023
*/
#ifndef _BUILDER_
#define _BUILDER_

class Builder
{
public:
    Builder() {};
    ~Builder() {};

    virtual void reset()=0;
    virtual void setSeats()=0;
    virtual void setEngine()=0;
    virtual void setTripComputer()=0;
    virtual void setGps()=0;
};

#endif //_BUILDER_