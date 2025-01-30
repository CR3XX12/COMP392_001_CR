#include "soldier.h"

//soldier stats
Soldier::Soldier() : Warrior(100, 10, 15) {}

string Soldier::getType() {
    return "Soldier";
}
