#include "Goblin.h"
#include <cstdlib>
using namespace std;

Goblin::Goblin() : Enemy("Goblin", 50, 10) {}

void Goblin::attack() {
    int damage = attack_power;
    if (rand() % 10 < 1) {  // 10% chance
        cout << name << " used Sneaky Strike! Critical hit!\n";
        damage *= 2;
    }
    cout << name << " attacks with " << damage << " damage.\n";
}
