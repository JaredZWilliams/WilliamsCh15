#ifndef WILLIAMSVEHICLE_H
#define WILLIAMSVEHICLE_H

#include <string>

using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle(string manufacturer, int yearBuilt);
    string getManufacturer() const;
    void setManufacturer(string manufacturer);
    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo() const;
};

#endif