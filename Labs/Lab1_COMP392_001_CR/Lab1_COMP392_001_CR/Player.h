#pragma once

#include <iostream>
using namespace std;

namespace Game {
    class Player {
    private:       
        int health;
        int damage;
        int manaPower;

    public:
        // Constructor to initialize attributes
        Player(int h = 100, int d = 20, int mp = 50)
            : health(h), damage(d), manaPower(mp) {
        }

        // Getters
        int getHealth() const { return health; }
        int getDamage() const { return damage; }
        int getManaPower() const { return manaPower; }

        // Setters
        void setHealth(int h) { health = h; }
        void setDamage(int d) { damage = d; }
        void setManaPower(int mp) { manaPower = mp; }

        // Methods
        void attack() {
            cout << "Player is attacking with " << damage << " damage!" << endl;
        }

        void applyDamage() {
            cout << "Player is taking damage! Health before: " << health << endl;
            health -= 10; 
            cout << "Health after: " << health << endl;
        }
    };
}



