#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>
#include <string>

using namespace std;

// Abstract base class
class Aircraft {
protected:
    string modelName;
    int maxSpeed;
    int fuelCapacity;

public:
    // Constructor
    Aircraft(string name, int speed, int fuel)
        : modelName(name), maxSpeed(speed), fuelCapacity(fuel) {}

    // Pure virtual function (forces derived classes to implement fly)
    virtual void fly() = 0;

    // Display aircraft stats
    void displayStats() {
        cout << "Aircraft Model: " << modelName << endl;
        cout << "Max Speed: " << maxSpeed << " knots" << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " gallons" << endl;
    }

    // Virtual destructor
    virtual ~Aircraft() {}
};

#endif
