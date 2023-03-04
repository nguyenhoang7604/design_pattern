/*
    Author: TomNguyen
    Created: 3/Mar/2023
*/

#include "stock_publisher.h"

StockPublisher::StockPublisher()
    : price_(0)
    , name_("")
{

}

StockPublisher::StockPublisher(double price, std::string name)
    : price_(price)
    , name_(name)
{

}

StockPublisher::~StockPublisher()
{

}

void StockPublisher::notify()
{
    for (auto observer : observers_) {
        std::cout << name_ << " sends update to " << observer->getName() << std::endl;
        observer->update();
    }
}

void StockPublisher::subscribe(std::shared_ptr<Observer> observer)
{
    observers_.push_back(observer);
}

void StockPublisher::unsubscribe(std::shared_ptr<Observer> observer)
{
    
    auto it = std::find(observers_.begin(), observers_.end(), observer);
    if (it != observers_.end()) {
        std::cout <<  observer->getName() << " don't want to be notified about " << name_ <<  std::endl;
        observers_.erase(it);
    } else {
        std::cout << "Not found the observer to detele" << std:: endl;
    }
}

void StockPublisher::priceChange(double price)
{
    price_ = price;
    this->notify();
}
