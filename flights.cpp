#include "flights.h"
#include <iostream>
#include <string>
#include <vector>
#include "algorithm"
#include <map>

FlightMenager::FlightMenager()
{
    flights.push_back({1, "Warszawa", "Krakow", "2025-02-12", "12:00", 99.99});
    flights.push_back({2, "Warszawa", "Gdansk", "2025-02-12", "14:00", 199.99});
    flights.push_back({3, "Warszawa", "Wroclaw", "2025-02-12", "16:00", 299.99});
    flights.push_back({4, "Warszawa", "Poznan", "2025-02-12", "18:00", 399.99});
}

void FlightMenager::add_flight()
{
    flight f;
    f.flight_id = flights.size() + 1;
    std::cout << "Podaj miasto wylotu: ";
    std::cin >> f.departure_city;
    std::cout << "Podaj miasto przylotu: ";
    std::cin >> f.arrival_city;
    std::cout << "Podaj date: ";
    std::cin >> f.date;
    std::cout << "Podaj godzine wylotu: ";
    std::cin >> f.departure_time;
    std::cout << "Podaj cene: ";
    std::cin >> f.price;
    flights.push_back(f);
    std::cout << "Dodano lot" << std::endl;
    std::cout << std::endl;
}

void FlightMenager::remove_flight()
{
    int flight_to_remove_id;
    std::cout << "Podaj numer lotu do usuniecia: ";
    std::cin >> flight_to_remove_id;

    if (flight_to_remove_id > flights.size())
    {
        std::cout << "Nie ma takiego lotu" << std::endl;
        return;
    }

    flights.erase(flights.begin() + flight_to_remove_id - 1);
    std::cout << "Usunieto lot" << std::endl;

    // for (int i = 0; i < flights.size(); i++)
    // {
    //     flights[i].flight_id = i + 1;
    // }
};

void FlightMenager::display_flights()
{
    for (auto f : flights)
    {
        std::cout << "Lot " << f.flight_id
                  << " z " << f.departure_city
                  << " do " << f.arrival_city
                  << " dnia " << f.date
                  << " o godzinie " << f.departure_time
                  << " w cenie " << f.price << " PLN" << std::endl;
    }
}

void FlightMenager::display_user_reservations()
{
    int booking_number;
    std::cout << "Podaj numer rezerwacji: ";
    std::cin >> booking_number;

    if (booking_map.find(booking_number) == booking_map.end())
    {
        std::cout << "Rezerwacja o takim numerze nie istnieje" << std::endl;
        return;
    }

    flight f = booking_map[booking_number];

    std::cout << "Twoja rezerwacja ( o numerze: " << booking_number << "): " << std::endl;
    std::cout << "lot o numerze: " << f.flight_id
              << " z " << f.departure_city
              << " do " << f.arrival_city
              << " dnia " << f.date
              << " o godzinie " << f.departure_time
              << std::endl;
}

void FlightMenager::booking_flight()
{
    int flight_to_book_id;
    std::cout << "Podaj numer lotu do zarezerwowania: ";
    std::cin >> flight_to_book_id;

    bool is_id_correct = std::find_if(flights.begin(), flights.end(), [flight_to_book_id](flight f)
                                      { return f.flight_id == flight_to_book_id; }) != flights.end();
    if (!is_id_correct)
    {
        std::cout << "Nie ma takiego lotu" << std::endl;
        return;
    }

    int booking_number = (booking_map.size() + 1) * 10;

    std::cout << "Zarezerwowano lot, twoj numer rezerwacji: " << booking_number << std::endl;

    booking_map.insert({booking_number, flights[flight_to_book_id]});
}

void FlightMenager::cancel_booking()
{
    int booking_number;
    std::cout << "Podaj numer rezerwacji do anulowania: ";
    std::cin >> booking_number;

    if (booking_map.find(booking_number) == booking_map.end())
    {
        std::cout << "Rezerwacja o takim numerze nie istnieje" << std::endl;
        return;
    }

    booking_map.erase(booking_number);
    std::cout << "Anulowano rezerwacje" << std::endl;
    std::cout << std::endl;
}