#ifndef _VISITABLE_
#define _VISITABLE_

// #include "visitor.h"
class Visitor;

class Visitable
{
private:
    /* data */
public:
    Visitable();
    ~Visitable();
    virtual double accept(Visitor* visitor)=0;
};

Visitable::Visitable()
{
}

Visitable::~Visitable()
{
}

#endif //_VISITABLE_