/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#ifndef _TANKENGINE_
#define _TANKENGINE_
#include "engine.h"

class TankEngine : public Engine
{

public:
    TankEngine();
    ~TankEngine();
    virtual void run() override;
};

#endif //_TANKENGINE_