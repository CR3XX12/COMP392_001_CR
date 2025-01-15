// Lab1_COMP392_001_CR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"
#include "Explosive.h"

using namespace std;
using namespace Game;

int main() {
    // Create Player object
    Player player;
    player.setHealth(100); // Set initial health
    player.setDamage(25);  // Set damage
    player.setManaPower(50); // Set mana power

    cout << "--------------------" << endl;
    cout << "Player stats:" << endl;
    cout << "Player Health: " << player.getHealth() << endl;
    cout << "Player Damage: " << player.getDamage() << endl;
    cout << "Player Mana Power: " << player.getManaPower() << endl;
    cout << "--------------------" << endl;

    // Call methods
    player.attack();
    player.applyDamage();

    // Create Explosive object
    Explosive explosive;
    explosive.setPower(80); // Set power
    explosive.setDamage(40); // Set damage
    

    cout << "Explosive Power: " << explosive.getPower() << endl;
    cout << "Explosive Damage: " << explosive.getDamage() << endl;

    // Call methods
    explosive.explode();
    explosive.applyDamage();

    return 0;
}
