#pragma once
class Warrior : public Player {
public:
	void attack() {
		cout << "검을 휘두릅니다." << endl;
	}
	Warrior(string nickname) : Player(nickname) {}

};