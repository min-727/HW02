#include<iostream>
#include "archer.h"

using namespace std;
Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    cout << "*궁수로 전직하였습니다." << endl;
    level = 10;
    accuracy = 80;

}
void Archer::attack(Monster* monster) {
    cout << "화살을 쏜다." << endl;
    int damage = 0;
    int attack_count = 3;
    if ((power - monster->getDefence()) / attack_count <= 0) {
        damage = 1;
    }
    else damage = (power - monster->getDefence()) / attack_count;

    for (int i = 0; i < attack_count; i++) {
        cout << monster->getname() << "에게 화살로 " << damage << " 만큼의 데미지를 입혔습니다." << endl;
        monster->setHP(monster->getHP() - damage);
    }

    if (monster->getHP() > 0) {
        cout << monster -> getname() << " 남은 HP : " << monster->getHP() << endl;
    }
    else cout << "You Win!" << endl;
}