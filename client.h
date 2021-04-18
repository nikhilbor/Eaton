#ifndef OBSERVER_PATTERN_CLIENT_1_HPP
#define OBSERVER_PATTERN_CLIENT_1_HPP

#include <iostream>

#include "Observer.hpp"

/**
 * a client that implements the Observer interface
 */
class Client : public Observer {

    int id;
    static int total_count;
    static int weather_count;
    static int audio_count;
    static int navi_count;

public:

    Client(int id);

    virtual void update(int type) override;

};




#endif //OBSERVER_PATTERN_CLIENT_1_HPP

