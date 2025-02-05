#include "Dragon.h"
#include <cstdlib>

using namespace std;

Dragon::Dragon() : Enemy("Dragon", 100, 30) {}

void Dragon::attack() {
    int fire_damage = rand() % 10 + 5; // Random fire damage (5-15)
    cout << name << " breathes fire! Deals " << (attack_power + fire_damage) << " fire damage.\n";
}
