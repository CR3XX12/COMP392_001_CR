#include "queen.h"

// Queen stats
Queen::Queen() : Warrior(150, 20, 25) {}

string Queen::getType() {
    return "Queen";
}
