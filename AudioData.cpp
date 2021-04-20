#include "AudioData.h"

void AudioData::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void AudioData::removeObserver(Observer *observer) {
    // find the observer
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}

void AudioData::notifyObservers() {
    for (Observer *observer : observers) { // notify all observers
        observer->update(class_type);
    }
}

void AudioData::setState(std::string Song, std::string Artist, std::string Album) {
    this->Song = Song;
    this->Artist = Artist;
    this->Album = Album;
    std::cout <<"Song - " <<Song << ", Artist - " <<Artist << ", Album - "<<Album<< std::endl;
    notifyObservers();
}
