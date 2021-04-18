#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.hpp"
#include "Observer.hpp"

/**
 * A concrete implementation of the Subject interface
 */
class NaviData : public Subject {
    std::vector<Observer *> observers; // observers

    std::string destination = "Last Entered Destination";
    int stopOver = 0;
    int Distance = 0;
    int class_type = 3;

public:

    void registerObserver(Observer *observer) override;

    void removeObserver(Observer *observer) override;

    void notifyObservers() override;

    /**
     * Set the new state of the navigation 
     * @param destination new destination
     * @param stopOver new stopOver
     * @param Distance new Distance
     */
    void setState(std::string destination, int stopOver, int Distance);

};
