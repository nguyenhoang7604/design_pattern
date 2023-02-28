/*
    Author: TomNguyen
    Created: 27/Feb/2023
*/
#ifndef _VISITOR_
#define _VISITOR_

#include <iostream>

class Liquor;
class Necessity;
class Tobacco;

class Visitor
{
private:
    /* data */
public:
    Visitor() {}
    ~Visitor() {}
    virtual double visit(Liquor* liquor) = 0;
    virtual double visit(Necessity* necessity) = 0;
    virtual double visit(Tobacco* tobacco) = 0;
};

#endif // _VISITOR_