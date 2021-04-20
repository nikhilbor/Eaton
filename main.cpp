#include <iostream>
#include "WeatherData.h"
#include "NaviData.h"
#include "Audio.h"
#include "Client.h"

void processWeather(Client &one)
{
    WeatherData weatherStation;
    weatherStation.registerObserver(&one);
    float temp, humidity, pressure;

    std::cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;
    weatherStation.setState(temp,humidity,pressure);
}

void processAudio(Client &one)
{
    AudioData audObj;
    audObj.registerObserver(&one);
    std::string song, album, artist;


    std::cout << "Enter SongName, AlbumName, ArtistName as << ";
    std::cin >> song >> album >> artist;
    audObj.setState(song,album,artist);
}

void processNavi(Client &one)
{
    NaviData naviObj;
    naviObj.registerObserver(&one);
    std::string destination;
    int stopover, distance;

    std::cout << "Enter Destination, Stopover, Distance (seperated by spaces) << ";
    std::cin >> destination >> stopover >> distance;
    naviObj.setState(destination,stopover,distance);

}
int main() {
    Client one(1);

    while(1)
    {
        int input;
        std::cout<<"\n Enter the Signal between 1 to 3 to process data. Enter 0 to terminate"<<std::endl;
        std::cin>>input;

        if(input == 0)
        {
            break;
        }
        switch(input)
        {
        case 1:
                processWeather(one);
        break;
        case 2:
                processNavi(one);
        break;
        case 3:
                processAudio(one);
        break;
        default:
            break;
        }

    }

    return 0;
}
