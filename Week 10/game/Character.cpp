#include "Character.h"
#include <iomanip>
#include <iostream>

using namespace std;
//character.cpp
//constructors
Character::Character() {
    _mana = 0;
    _health = 0.0;
    _name = "";
    _status = 'A';
    _isCreature = false;
}

Character::Character(string name, double health, int mana, char status, bool isCreature) {
    _name = name;
    _isCreature = isCreature;

    if (health >= 0) {
        _health = health;
    } else {
        _health = 0.00;
    }

    if (mana >= 0) {
        _mana = mana;
    } else {
        _mana = 0;
    }

    if (status == 'A' || status == 'C' || status == 'F') {
        _status = status;
    } else {
        _status = 'A';
    }
}

//getters
string Character::getName() { return _name; }
double Character::getHealth() { return _health; }
int Character::getMana() { return _mana; } 
char Character::getStatus() {return _status; }
bool Character::getIsCreature() { return _isCreature; }

//functions
void Character::setName(string name) { _name = name; }
void Character::setHealth(double health) {
    if (health >= 0) {
        _health = health;
    } else {
        return;
    }
}
void Character::setStatus(char status) {
    if (status == 'A' || status == 'C' || status == 'F') {
        _status = status;
    } else {
        _status = 'A';
    }
}
void Character::setMana(int mana) {
    if (mana >= 0) {
        _mana = mana;
    } else {
        return;
    }
}
void Character::setIsCreature(bool isCreature) { _isCreature = isCreature; }

void Character::printStats() {
    cout << _name << "'s stats:" << endl
    << "Health: " << setprecision(2) << fixed << _health << endl
    << "Status: " << _status << endl
    << "Mana: " << _mana << endl
    << "Is Creature: ";
    if (_isCreature) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}