#include "battle_simulator.h"
#include <cstdlib> // For rand()
#include <ctime>   // For time()
#include <iostream>
using namespace std;

int main() {
    srand(time(0)); // Seed for random numbers
    cout << "Welcome to the Battle Simulator!\n";
    BattleSimulator game;
    game.startBattle();
    return 0;
}
