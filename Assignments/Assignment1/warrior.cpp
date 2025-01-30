#include "warrior.h"
#include <cstdlib>
#include <algorithm> // For std::max and std::min

// Constructor
Warrior::Warrior(int h, int p, int d) : health(h), power(p), damagePower(d) {
    x = rand() % 10; // Random position on a 10x10 grid
    y = rand() % 10;
}

// Move within grid bounds (8 adjacent cells)
void Warrior::move() {
    int moveX = rand() % 3 - 1; // -1, 0, or 1
    int moveY = rand() % 3 - 1; // -1, 0, or 1

    x = std::max(0, std::min(9, x + moveX)); // Ensuring within grid bounds
    y = std::max(0, std::min(9, y + moveY)); 
}

// Attack an enemy
void Warrior::attack(Warrior &enemy) {
    enemy.health -= damagePower;
}

// Check if still alive
bool Warrior::isAlive() {
    return health > 0;
}

string Warrior::getType() {
    return "Warrior";
}

// Print warrior status
void Warrior::printStatus() {
    cout << getType() << " at (" << x << ", " << y << ") HP: " << health << endl;
}
