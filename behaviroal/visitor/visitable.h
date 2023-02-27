/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#ifndef _VISITABLE_
#define _VISITABLE_

#include "visitor.h"

class Visitable
{
private:

public:
    Visitable() {}
    ~Visitable() {}
    virtual double accept(Visitor* visitor)=0;
};

#endif //_VISITABLE_