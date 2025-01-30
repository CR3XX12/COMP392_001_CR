#include "team.h"
#include <iostream>
#include <cstdlib> // For rand()
using namespace std;

// Constructor to initialize the team with random warriors
Team::Team(int numSoldiers, int numQueens) {
    for (int i = 0; i < numSoldiers; i++)
        warriors.push_back(new Soldier());

    for (int i = 0; i < numQueens; i++)
        warriors.push_back(new Queen());
}

// Destructor to free memory
Team::~Team() {
    for (auto w : warriors) {
        delete w;
    }
}

// Check if at least one warrior is alive
bool Team::isTeamAlive() {
    for (auto w : warriors)
        if (w->isAlive()) return true;
    return false;
}

// Each warrior of the team attacks the enemy team
void Team::attackOpponent(Team &enemy) {
    for (auto w : warriors) {
        if (w->isAlive()) {
            Warrior *target = enemy.getRandomAliveWarrior();
            if (target) {
                cout << w->getType() << " attacks " << target->getType() 
                     << " for " << w->getDamagePower() << " damage.\n";
                w->attack(*target);
            }
        }
    }
}

// Get a random alive warrior from the enemy team
Warrior* Team::getRandomAliveWarrior() {
    vector<Warrior*> aliveWarriors;
    for (auto w : warriors)
        if (w->isAlive()) aliveWarriors.push_back(w);

    if (aliveWarriors.empty()) return nullptr;
    return aliveWarriors[rand() % aliveWarriors.size()];
}
