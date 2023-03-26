/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#ifndef _PLANEENGINE_
#define _PLANEENGINE_
#include "engine.h"

class PlaneEngine : public Engine
{

public:
    PlaneEngine();
    ~PlaneEngine();
    virtual void run() override;
};

#endif //_PLANEENGINE_