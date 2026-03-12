#pragma once
class Thief : public Player {
public:
	void attack() {
		cout << "단검으로 벱니다." << endl;
	}
	Thief(string nickname) : Player(nickname) {}
};