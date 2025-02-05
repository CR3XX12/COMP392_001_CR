#include "battle.h"
#include "UndeadKnight.h"
#include <iostream>

using namespace std;

void battle(Enemy* enemy) {
    cout << "A " << enemy->get_name() << " appears!\n";  //getter
    enemy->attack();

    // Simulating a simple fight
    int player_attack = 25;
    enemy->take_damage(player_attack);

    if (enemy->is_defeated()) {
        cout << enemy->get_name() << " is defeated!\n";  //getter

        // Check if the enemy revives (only for UndeadKnight)
        UndeadKnight* undead = dynamic_cast<UndeadKnight*>(enemy);
        if (undead && undead->revive()) {
            cout << "The battle continues!\n";
        }
    }
    else {
        cout << enemy->get_name() << " is still standing!\n";  //getter
    }
}
