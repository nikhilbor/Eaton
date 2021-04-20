#include "Client.h"

void Client::update(int type) {
    // print the changed values
    total_count ++;
    switch(type)
    {
    case 1:
            weather_count ++;
    break;
    case 2:
            audio_count ++;
    break;
    case 3:
            navi_count ++;
    break;
    default:
        break;

    }
    std::cout << "Total Messages received " <<total_count << std::endl;
    std::cout << "weather Messages  is " << weather_count << ", audio Messages  is " << audio_count << ", navi Messages  is " << navi_count<< std::endl;
}
int Client::total_count = 0;
int Client::weather_count = 0;
int Client::audio_count = 0;
int Client::navi_count = 0;

Client::Client(int id) {
    this->id = id;
}
