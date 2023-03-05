/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#ifndef _SECONDSTRATEGY_
#define _SECONDSTRATEGY_

#include "strategy.h"

class SecondStrategy : public Strategy
{
private:

public:
    SecondStrategy();
    ~SecondStrategy();
    virtual std::string doAlgorithm(std::string_view data) override;
};

#endif //_SECONDSTRATEGY_