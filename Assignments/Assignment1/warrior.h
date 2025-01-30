#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <cstdlib>  // For rand()
using namespace std;

class Warrior {
protected:
    int health, power, damagePower, x, y;

public:
    Warrior(int h, int p, int d);
    void move();
    void attack(Warrior &enemy);
    bool isAlive();
    virtual string getType();
    void printStatus();

    // Getter for damagePower
    int getDamagePower() const { return damagePower; }
};

#endif
