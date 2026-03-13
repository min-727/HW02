#pragma once
#include "player.h"
#include "Monster.h"


class Archer : public Player {
public:
    void attack(Monster* monster) override ;
	Archer(string nickname);
};

