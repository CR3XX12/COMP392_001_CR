#include "Goblin.h"
#include "Dragon.h"
#include "UndeadKnight.h"
#include "battle.h"
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed for random chance mechanics

    Goblin goblin;
    Dragon dragon;
    UndeadKnight knight;

    battle(&goblin);
    cout << "------------------\n";
    battle(&dragon);
    cout << "------------------\n";
    battle(&knight);

    return 0;
}
