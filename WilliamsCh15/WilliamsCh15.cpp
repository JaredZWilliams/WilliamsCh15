/*
Jared Williams
Ch 15 Lab
*/

#include "WilliamsVehicle.h"
#include "WilliamsCar.h"
#include "WilliamsTruck.h"
#include <iostream>

int main() {
    string manufacturer;
    int yearBuilt, numDoors, towingCapacity;

    
    cout << "Enter manufacturer of the vehicle: "; //Vehicle
    while (!(cin >> manufacturer))
    {
        cout << "Invalid input. Enter manufacturer of the vehicle: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Enter year built of the vehicle: ";
    while (!(cin >> yearBuilt))
    {
        cout << "Invalid input. Enter year built of the vehicle: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();

    
    cout << "\nEnter manufacturer of the car: "; //Car
    while (!(cin >> manufacturer))
    {
        cout << "Invalid input. Enter manufacturer of the car: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Enter year built of the car: ";
    while (!(cin >> yearBuilt))
    {
        cout << "Invalid input. Enter year built of the car: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Enter number of doors of the car: ";
    while (!(cin >> numDoors))
    {
        cout << "Invalid input. Enter year built of the truck: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    Car car(manufacturer, yearBuilt, numDoors);
    car.displayInfo();

    
    cout << "\nEnter manufacturer of the truck: "; //Truck
    while (!(cin >> manufacturer))
    {
        cout << "Invalid input. Enter manufacturer of the truck: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Enter year built of the truck: ";
    while (!(cin >> yearBuilt))
    {
        cout << "Invalid input. Enter year built of the truck: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Enter towing capacity of the truck: ";
    while (!(cin >> towingCapacity))
    {
        cout << "Invalid input. Enter towing capacity of the truck: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();
    
    cin.ignore();
    cin.get();
    return 0;
}