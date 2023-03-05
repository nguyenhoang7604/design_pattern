/*
    Author: TomNguyen
    Created: 5/Mar/2023
*/
#ifndef _STRATEGY_
#define _STRATEGY_

#include <iostream>
#include <string>
#include <algorithm>

class Strategy
{

public:
    virtual ~Strategy() = default;
    virtual std::string doAlgorithm(std::string_view data)=0;
    
};

#endif //_STRATEGY_