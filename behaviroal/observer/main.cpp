/*
    Author: TomNguyen
    Created: 3/Mar/2023
*/
#include <iostream>
#include "stock_observer.h"
#include "stock_publisher.h"


int main()
{
    std::shared_ptr<StockPublisher> appl(new StockPublisher(151.15, "Apple"));
    std::shared_ptr<StockPublisher> goog(new StockPublisher(202.12, "Google"));
    std::shared_ptr<StockPublisher> ibm(new StockPublisher(101.8, "IBM"));

    std::shared_ptr<StockObserver> Bob(new StockObserver("Bob"));
    std::shared_ptr<StockObserver> Tom(new StockObserver("Tom"));
    std::shared_ptr<StockObserver> Louis(new StockObserver("Louis"));

    appl->subscribe(Bob);
    goog->subscribe(Bob);

    appl->subscribe(Louis);
    ibm->subscribe(Louis);

    goog->subscribe(Tom);
    ibm->subscribe(Tom);

    appl->priceChange(appl->currentPrice()*0.1);
    goog->priceChange(goog->currentPrice()*0.05);
    ibm->priceChange(ibm->currentPrice()*0.07);

    appl->unsubscribe(Bob);
    goog->unsubscribe(Tom);
    ibm->unsubscribe(Louis);

    appl->priceChange(appl->currentPrice()*0.1);
    goog->priceChange(goog->currentPrice()*0.05);
    ibm->priceChange(ibm->currentPrice()*0.07);

    return 0;
}