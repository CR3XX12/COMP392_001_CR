#ifndef QUEEN_H
#define QUEEN_H

#include "warrior.h"

class Queen : public Warrior {
public:
    Queen();
    string getType() override;
};

#endif
