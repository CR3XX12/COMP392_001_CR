#ifndef BATTLE_SIMULATOR_H
#define BATTLE_SIMULATOR_H

#include "team.h"

class BattleSimulator {
private:
    Team teamA, teamB;

public:
    BattleSimulator();
    void startBattle();
};

#endif
