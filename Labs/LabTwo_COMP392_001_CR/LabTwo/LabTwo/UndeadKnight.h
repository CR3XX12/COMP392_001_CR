#ifndef UNDEADKNIGHT_H
#define UNDEADKNIGHT_H

#include "Enemy.h"

class UndeadKnight : public Enemy {
public:
    UndeadKnight();
    void attack() override;
    bool revive();  // Special ability
};

#endif
