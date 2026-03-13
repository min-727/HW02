#pragma once
#include<iostream>
#include <string>
#include "player.h"
using namespace std;


class Monster {
public:
    Monster(string name) : name(name){
        HP = 10;
        power = 30;
        defence = 10;
        speed = 10;
    };

    void attack(Player* player);
    void printMonsterStatus();

    // getter 함수

    string getname() {
        return name;
    }

    int getHP() {
        return HP;
    }

    int getPower() {
        return power;
    }
    int getDefence() {
        return defence;
    }

    int getSpeed() {
        return speed;
    }

    // setter 함수
    void setname(string name) {
        this->name = name;
    }
    void setHP(int HP) {
        this->HP = HP;
    }

    void setPower(int power) {
        this->power = power;
    }
    void setDefence(int defence) {
        this->defence = defence;
    }

    void setSpeed(int speed) {
        this->speed = speed;
    }

protected:
    string name;
    int HP;
    int power;
    int defence;
    int speed;
};

