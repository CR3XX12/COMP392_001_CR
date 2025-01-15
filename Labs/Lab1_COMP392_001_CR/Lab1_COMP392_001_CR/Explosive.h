#pragma

#include <iostream>
using namespace std;

namespace Game {
    class Explosive {
    private:
        int power;   // Power level of the explosive
        int damage;  // Damage caused by the explosive

    public:
        // Constructor to initialize attributes
        Explosive(int p = 80, int d = 40) : power(p), damage(d) {}

        // Getter methods
        int getPower() const { return power; }
        int getDamage() const { return damage; }

        // Setter methods
        void setPower(int p) { power = p; }
        void setDamage(int d) { damage = d; }

        // Member functions
        void explode() {
            cout << "Explosive is exploding with " << power << " power!" << endl;
        }

        void applyDamage() {
            cout << "Explosive is causing " << damage << " damage!" << endl;
        }
    };
}


