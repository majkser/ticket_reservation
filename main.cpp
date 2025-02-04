#include "flights.h"
#include "admin.h"
#include <iostream>
#include <string>

int main()
{
    FlightMenager FlightMenager;
    Admin Admin;
    int user_action_choice;
    std::string admin_password = "admin";

    while (user_action_choice != 5)
    {
        std::cout << std::endl;
        std::cout << "System rezerwacji biletow lotniczych" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Dostepne loty" << std::endl;
        std::cout << "2. Rezerwacja biletu" << std::endl;
        std::cout << "3. Anulowanie rezerwacji" << std::endl;
        std::cout << "4. Wyswietl rezerwacje" << std::endl;
        std::cout << "5. Wyjscie" << std::endl;
        std::cout << "6. Administarator" << std::endl;
        std::cout << "Wybierz opcje: ";
        std::cin >> user_action_choice;

        switch (user_action_choice)
        {
        case 1:
        {
            std::cout << "Dostepne loty:" << std::endl;
            std::cout << std::endl;
            FlightMenager.display_flights();
            break;
        }

        case 2:
        {
            std::cout << "Rezerwacja biletu" << std::endl;
            std::cout << std::endl;
            FlightMenager.booking_flight();
            break;
        }

        case 4:
        {
            std::cout << "Wyswietl rezerwacje" << std::endl;
            std::cout << std::endl;
            FlightMenager.display_user_reservations();
            break;
        }
        case 5:
        {
            std::cout << "DO ZOBACZENIA !" << std::endl;
            break;
        }

        case 6:
        {
            if (Admin.is_admin_logged())
            {
                std::cout << std::endl;
                Admin.display_admin_menu(FlightMenager);
            }
            break;
        }
        }
    }
    return 0;
}

// TODO
// user ma mozliwosc usunac rezerwacje
// co sie dzieje jak ktos ma rezerwacje a admin usuwa lot ?