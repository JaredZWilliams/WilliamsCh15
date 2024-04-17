#ifndef WILLIAMSTRUCK_H
#define WILLIAMSTRUCK_H

#include "WilliamsVehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(string manufacturer, int yearBuilt, int towingCapacity);
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);
    void displayInfo() const override;
};

#endif