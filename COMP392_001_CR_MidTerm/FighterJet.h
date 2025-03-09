#ifndef FIGHTERJET_H
#define FIGHTERJET_H

#include "Aircraft.h"

class FighterJet : public Aircraft {
public:
    // Constructor initializes base class attributes
    FighterJet(string name, int speed, int fuel)
        : Aircraft(name, speed, fuel) {}

    // Implement the fly() function
    void fly() override {
        cout << "FighterJet " << modelName << " is engaging in a high-speed maneuver!" << endl;
    }
};

#endif
