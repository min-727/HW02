#pragma once
#include <string>
using namespace std;

class Player {
public:
    Player(string nickname) : nickname(nickname) {};

    virtual void attack() = 0;
    void printPlayerStatus();

    // getter 함수
    string getJobName() {
        return job_name;
    }
    string getNickname() {
        return nickname;
    }
    int getLevel() {
        return level;
    }
    int getHP() {
        return HP;
    }
    int getMP() {
        return MP;
    }
    int getPower() {
        return power;
    }
    int getDefence() {
        return defence;
    }
    int getAccuracy() {
        return accuracy;
    }
    int getSpeed() {
        return speed;
    }

    // setter 함수
    void setNickname(string nickname) {
        this->nickname = nickname;
    }
    void setHP(int HP) {
        this->HP = HP;
    }
    void setMP(int MP) {
        this->MP = MP;
    }
    void setPower(int power) {
        this->power = power;
    }
    void setDefence(int defence) {
        this->defence = defence;
    }
    void setAccuracy(int accuracy) {
        this->accuracy = accuracy;
    }
    void setSpeed(int speed) {
        this->speed = speed;
    }

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "*현재 능력치 " << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}