/*
    Author: TomNguyen
    Created: 3/Mar/2023
*/
#ifndef _OBSERVER_
#define _OBSERVER_

#include <iostream>
#include <memory>
#include "stock_publisher.h"


class Observer
{
public:
    Observer() {}
    ~Observer() {}
    virtual void update()=0;
    virtual std::string getName()=0;
};

#endif // _OBSERVER_