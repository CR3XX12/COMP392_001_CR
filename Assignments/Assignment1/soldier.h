#ifndef SOLDIER_H
#define SOLDIER_H

#include "warrior.h"

class Soldier : public Warrior {
public:
    Soldier();
    string getType() override;
};

#endif
