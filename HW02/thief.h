#pragma once
#include "player.h"
#include "Monster.h"


class Thief : public Player {
public:
	void attack(Monster* monster) override;
	Thief(string nickname);
};