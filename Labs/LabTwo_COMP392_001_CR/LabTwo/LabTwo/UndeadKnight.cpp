#include "UndeadKnight.h"
#include <cstdlib>
using namespace std;

UndeadKnight::UndeadKnight() : Enemy("Undead Knight", 25, 20) {}

void UndeadKnight::attack() {
    cout << name << " slashes with " << attack_power << " damage.\n";
}

bool UndeadKnight::revive() {
    if (is_defeated() && rand() % 5 == 0) {  // 20% chance to revive
        health = 50;
        cout << name << " An Undead Knight is defeated... but it resurrects with 50 health!\n";
        return true;
    }
    return false;
}
