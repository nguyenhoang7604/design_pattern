/*
    Author: TomNguyen
    Created: 3/Mar/2023
*/

#ifndef _STOCKPUBLISHER_
#define _STOCKPUBLISHER_

#include <algorithm>
#include <iostream>
#include <memory>
#include <list>
#include "subject.h"
#include "observer.h"

class StockPublisher : public Subject
{
private:
    double price_;
    std::string name_;
    std::list<std::shared_ptr<Observer>> observers_;
public:
    StockPublisher(double price, std::string name);
    StockPublisher();
    ~StockPublisher();
    void notify() override;
    void subscribe(std::shared_ptr<Observer>) override;
    void unsubscribe(std::shared_ptr<Observer>r) override;

    virtual void priceChange(double price);
    double currentPrice() { return price_; }
    std::string getName() { return name_; };
};

#endif // _STOCKPUBLISHER_