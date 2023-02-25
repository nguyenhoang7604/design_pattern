#ifndef _VISITABLE_
#define _VISITABLE_

#include "visitor.h"

class Visitable
{
private:
    /* data */
public:
    Visitable(/* args */);
    ~Visitable();
    virtual double accept(Visitor* visitor)=0;
};

Visitable::Visitable(/* args */)
{
}

Visitable::~Visitable()
{
}

#endif //_VISITABLE_