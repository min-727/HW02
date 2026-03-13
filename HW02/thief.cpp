#include<iostream>
#include "thief.h"

using namespace std;
Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    cout << "*도적으로 전직하였습니다." << endl;
    level = 10;
    speed = 80;

}
void Thief::attack(Monster* monster) {
    cout << "단검으로 벤다." << endl;
    int damage = 0;
    int attack_count = 5;
    if ((power - monster->getDefence()) / attack_count <= 0) {
        damage = 1;
    }
    else damage = (power - monster->getDefence()) / attack_count;

    for (int i = 0; i < attack_count; i++) {
        cout << monster->getname() << "에게 단검으로 " << damage << " 만큼의 데미지를 입혔습니다." << endl;
        monster->setHP(monster->getHP() - damage);
    }

    if (monster->getHP() > 0) {
        cout << monster->getname() << " 남은 HP : " << monster->getHP() << endl;
    }
    else cout << "You Win!" << endl;
}