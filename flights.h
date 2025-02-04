#ifndef flights_h
#define flights_h

#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

struct flight
{
    int flight_id;
    std::string departure_city;
    std::string arrival_city;
    std::string date;
    std::string departure_time;
    double price;
};

class FlightMenager
{
private:
    std::vector<flight> flights;
    std::unordered_map<int, flight> booking_map;

public:
    FlightMenager();
    void add_flight();
    void remove_flight();
    void display_flights();
    void display_user_reservations();
    void booking_flight();
};

#endif
