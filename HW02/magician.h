#pragma once
#include "player.h"
#include "Monster.h"


class Magician : public Player {
public:
	void attack(Monster* monster) override;
	Magician(string nickname);
};