#include "admin.h"
#include <iostream>
#include <string>

Admin::Admin()
{
    admin_password = "admin";
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
        std::cout << std::endl;
        std::cout << "Niepoprawne haslo, sprobuj ponownie" << std::endl;
        std::cout << std::endl;
        return false;
    }
}

void Admin::display_admin_menu()
{
    while (option != 4)
    {
        std::cout << "1. Dodaj lot" << std::endl;
        std::cout << "2. Usun lot" << std::endl;
        std::cout << "3. Wyswietl rezerwacje" << std::endl;
        std::cout << "4. Wyloguj" << std::endl;
        std::cout << "Wybierz opcje: ";
        std::cin >> option;

        switch (option)
        {
        case 4:
        {
            is_admin = false;
            std::cout << "Wylogowano" << std::endl;
            break;
        }
        }
    }
}