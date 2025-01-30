#include "battle_simulator.h"
#include <iostream>
using namespace std;

// random warriors for teams
BattleSimulator::BattleSimulator() : teamA(3, 1), teamB(3, 1) {}

// Starting sim rounds
void BattleSimulator::startBattle() {
    int round = 1;
    while (teamA.isTeamAlive() && teamB.isTeamAlive()) {
        cout << "Round " << round++ << ":\n";
        teamA.attackOpponent(teamB);
        teamB.attackOpponent(teamA);
    }
    cout << (teamA.isTeamAlive() ? "Team A Wins!" : "Team B Wins!") << endl;
}
