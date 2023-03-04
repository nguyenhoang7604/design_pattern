/*
    Author: TomNguyen
    Created: 3/Mar/2023
*/

#ifndef _STOCKOBSERVER_
#define _STOCKOBSERVER_

#include "observer.h"


class StockObserver : public Observer
{
private:
    std::string name_;
public:
    StockObserver(std::string name);
    ~StockObserver();
    virtual void update() override;
    std::string getName();
};

#endif // _STOCKOBSERVER_