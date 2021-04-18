#include "NaviData.hpp"

void NaviData::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void NaviData::removeObserver(Observer *observer) {
    // find the observer
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}

void NaviData::notifyObservers() {
    for (Observer *observer : observers) { // notify all observers
        observer->update(class_type);
    }
}

void NaviData::setState(std::string destination, int stopOver, int Distance) {
    this->destination = destination;
    this->stopOver = stopOver;
    this->Distance = Distance;
    std::cout <<"Destination - " <<destination << ", stopOver - " <<stopOver << ", Distance - "<<Distance<< std::endl;
    notifyObservers();
}
