#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.h"
#include "Observer.h"

/**
 * A concrete implementation of the Subject interface
 */
class AudioData : public Subject {
    std::vector<Observer *> observers; // observers

    std::string Song = "Default Song";
    std::string Artist = "Default Artist";
    std::string Album = "Default Album";
    int class_type = 2;

public:

    void registerObserver(Observer *observer) override;

    void removeObserver(Observer *observer) override;

    void notifyObservers() override;

    /**
     * Set the new state of the Audio data
     * @param Song
     * @param Artist
     * @param Album
     */
    void setState(std::string Song, std::string Artist, std::string Album);

};
