#include <iostream>
#include "Monster.h"

using namespace std;

void Monster::printMonsterStatus() {
    cout << "------------------------------------ " << endl;
    cout << "*현재 능력치 " << endl;
    cout << "이름: " << name << endl;
    cout << "HP: " << HP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

void Monster::attack(Player* player) {
    int damage = 0;
    if (power - player->getDefence() <= 0) {
        damage = 1;
    }
    else damage = power - player->getDefence();

    cout << name << "에게 " << damage << "만큼의 데미지를 받았습니다." << endl;

    player->setHP(player->getHP() - damage);
    if (player->getHP() > 0) {
        cout << "현재 남은 체력 : " << player->getHP() << endl;
    }
    else cout << "You dead" << endl;

}