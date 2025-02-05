# Ticket Reservation System

## Overview
This project is a simple ticket reservation system for flights. It allows users to view available flights, book tickets, cancel reservations, and view their reservations. Administrators can add or remove flights.

## Features
- View available flights
- Book a flight
- Cancel a reservation
- View user reservations
- Admin functionalities:
  - Add a flight
  - Remove a flight
  - View all flights

## Requirements
- C++11 or later
- g++ compiler

## Setup
1. Clone the repository:
    ```sh
    git clone <repository-url>
    cd ticket_reservation
    ```

2. Compile the program using the provided Makefile:
    ```sh
    make
    ```

3. Run the program:
    ```sh
    ./main.exe
    ```

## Usage
1. **User Menu:**
    - `1`: View available flights
    - `2`: Book a flight
    - `3`: Cancel a reservation
    - `4`: View user reservations
    - `5`: Exit
    - `6`: Administrator login

2. **Administrator Menu:**
    - `1`: Add a flight
    - `2`: Remove a flight
    - `3`: View all flights
    - `4`: Logout

## File Structure
- [main.cpp](http://_vscodecontentref_/0): Entry point of the application
- [flights.h](http://_vscodecontentref_/1) / [flights.cpp](http://_vscodecontentref_/2): Contains the [FlightMenager](http://_vscodecontentref_/3) class and its methods
- [admin.h](http://_vscodecontentref_/4) / [admin.cpp](http://_vscodecontentref_/5): Contains the [Admin](http://_vscodecontentref_/6) class and its methods
- [Makefile](http://_vscodecontentref_/7): Build configuration
- [.gitignore](http://_vscodecontentref_/8): Files and directories to be ignored by git

## Example
```sh
System rezerwacji biletow lotniczych

1. Dostepne loty
2. Rezerwacja biletu
3. Anulowanie rezerwacji
4. Wyswietl rezerwacje
5. Wyjscie
6. Administarator
Wybierz opcje: 1

Dostepne loty:
Lot 1 z Warszawa do Krakow dnia 2025-02-12 o godzinie 12:00 w cenie 99.99 PLN
Lot 2 z Warszawa do Gdansk dnia 2025-02-12 o godzinie 14:00 w cenie 199.99 PLN
...
```
