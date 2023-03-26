/*
    Author: TomNguyen
    Created: 6/Mar/2023
*/
#ifndef _ENGINE_
#define _ENGINE_

#include <iostream>

class Engine
{
private:
    unsigned int speed_;
public:
    Engine(unsigned int speed) { speed_ = speed; }
    ~Engine() {}
    unsigned int getSpeed() { return speed_; }
    virtual void run()=0;
};

#endif //_ENGINE_