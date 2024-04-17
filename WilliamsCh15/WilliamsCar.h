#ifndef WILLIAMSCAR_H
#define WILLIAMSCAR_H

#include "WilliamsVehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string manufacturer, int yearBuilt, int numDoors);
    int getNumDoors() const;
    void setNumDoors(int numDoors);
    void displayInfo() const override;
};

#endif