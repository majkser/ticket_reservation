#include "admin.h"
#include "flights.h"
#include <iostream>
#include <string>

Admin::Admin()
{
    admin_password = "admin";
    option = 0;
}

bool Admin::is_admin_logged()
{

    std::cout << "Podaj haslo administratora: ";
    std::string password;
    std::cin >> password;
    if (password == admin_password)
    {
        is_admin = true;
        std::cout << std::endl;
        std::cout << "Zalogowano jako administrator" << std::endl;
        std::cout << std::endl;
        return true;
    }
    else
    {
        is_admin = false;
        std::cout << std::endl;
        std::cout << "Niepoprawne haslo, sprobuj ponownie" << std::endl;
        std::cout << std::endl;
        return false;
    }
}

void Admin::display_admin_menu(FlightMenager &FlightMenager)
{
    option = 0;
    while (option != 5)
    {
        std::cout << "1. Dodaj lot" << std::endl;
        std::cout << "2. Usun lot" << std::endl;
        std::cout << "3. Wyswietl rezerwacje" << std::endl;
        std::cout << "4. Wyswietl dostepne loty" << std::endl;
        std::cout << "5. Wyloguj" << std::endl;
        std::cout << "Wybierz opcje: ";
        std::cin >> option;

        switch (option)
        {
        case 1:
        {
            FlightMenager.add_flight();
            break;
        }
        case 2:
        {
            FlightMenager.remove_flight();
            break;
        }

        case 4:
        {
            std::cout << "Dostepne loty:" << std::endl;
            std::cout << std::endl;
            FlightMenager.display_flights();
            std::cout << std::endl;
            break;
        }
        case 5:
        {
            is_admin = false;
            std::cout << "Wylogowano" << std::endl;
            break;
        }
        default:
        {
        }
        }
    }
}