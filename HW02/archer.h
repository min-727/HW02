#pragma once

class Archer : public Player {
public:
	void attack() {
		cout << "화살을 쏩니다." << endl;
	}
	Archer(string nickname) : Player(nickname) {}
};