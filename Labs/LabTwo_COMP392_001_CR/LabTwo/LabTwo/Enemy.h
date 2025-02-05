#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>

using namespace std;

class Enemy {
protected:
    string name;
    int health;
    int attack_power;

public:
    Enemy(string n, int h, int ap);
    virtual void attack() = 0;  // Pure virtual function

    void take_damage(int damage);
    bool is_defeated();
    virtual ~Enemy();
    void print_status();

    // Getter method for name
    string get_name() const { return name; }
};

#endif  // ENEMY_H
