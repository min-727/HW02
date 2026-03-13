#pragma once
#include "player.h"
#include "Monster.h"


class Warrior : public Player {
public:
	void attack(Monster* monster) override;
	Warrior(string nickname);
};