#ifndef TEAM_H
#define TEAM_H

#include "soldier.h"
#include "queen.h"
#include <vector>

class Team {
private:
    vector<Warrior*> warriors;

public:
    Team(int numSoldiers, int numQueens);
    ~Team();
    bool isTeamAlive();
    void attackOpponent(Team &enemy);
    Warrior* getRandomAliveWarrior();
};

#endif
