#include<iostream>
#include "magician.h"

using namespace std;
Magician::Magician(string nickname) : Player(nickname) {
    job_name = " 마법사 ";
    cout << "*마법사로 전직하였습니다." << endl;
    level = 10;
    MP = 80;

}
void Magician::attack(Monster* monster) {
    cout << "마법을 사용한다." << endl;
    int damage = 0;
    int attack_count = 1;
    if ((power - monster->getDefence()) / attack_count <= 0) {
        damage = 1;
    }
    else damage = (power - monster->getDefence()) / attack_count;

    for (int i = 0; i < attack_count; i++) {
        cout << monster->getname() << "에게 마법으로 " << damage << " 만큼의 데미지를 입혔습니다." << endl;
        monster->setHP(monster->getHP() - damage);
    }

    if (monster->getHP() > 0) {
        cout << monster->getname() << " 남은 HP : " << monster->getHP() << endl;
    }
    else cout << "You Win!" << endl;
}