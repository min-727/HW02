#pragma once
class Magician : public Player {
public:
	void attack() {
		cout << "마법을 사용합니다." << endl;
	}
	Magician(string nickname) : Player(nickname) {}
};