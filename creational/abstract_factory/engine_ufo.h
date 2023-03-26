/*
    Author: TomNguyen
    Created: 26/Mar/2023
*/
#ifndef _UFOENGINE_
#define _UFOENGINE_
#include "engine.h"

class UfoEngine : public Engine
{

public:
    UfoEngine();
    ~UfoEngine();
    virtual void run() override;
};

#endif //_UFOENGINE_