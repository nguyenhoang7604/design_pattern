/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#ifndef _FIRSTSTRATEGY_
#define _FIRSTSTRATEGY_

#include "strategy.h"

class FirstStrategy : public Strategy
{
private:

public:
    FirstStrategy();
    ~FirstStrategy();
    virtual std::string doAlgorithm(std::string_view data) override;
};

#endif //_FIRSTSTRATEGY_