#include<iostream>
#include "warrior.h"

using namespace std;
Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    cout << "*전사로 전직하였습니다." << endl;
    level = 10;
    HP = 80;

}
void Warrior::attack(Monster* monster) {
    cout << "검을 휘두른다." << endl;
    int damage = 0;
    int attack_count = 1;
    if ((power - monster->getDefence()) / attack_count <= 0) {
        damage = 1;
    }
    else damage = (power - monster->getDefence()) / attack_count;

    for (int i = 0; i < attack_count; i++) {
        cout << monster->getname() << "에게 검으로 " << damage << " 만큼의 데미지를 입혔습니다." << endl;
        monster->setHP(monster->getHP() - damage);
    }

    if (monster->getHP() > 0) {
        cout << monster->getname() << " 남은 HP : " << monster->getHP() << endl;
    }
    else cout << "You Win!" << endl;
}