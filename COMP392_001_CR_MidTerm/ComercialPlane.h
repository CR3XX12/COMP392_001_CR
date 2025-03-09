#ifndef COMMERCIALPLANE_H
#define COMMERCIALPLANE_H

#include "Aircraft.h"

class ComercialPlane : public Aircraft {
public:
    // Constructor initializes base class attributes
    ComercialPlane(string name, int speed, int fuel)
        : Aircraft(name, speed, fuel) {}

    // Implement the fly() function
    void fly() override {
        cout << "ComercialPlane " << modelName << " is cruising at 69,000 feet." << endl;
    }
};

#endif
