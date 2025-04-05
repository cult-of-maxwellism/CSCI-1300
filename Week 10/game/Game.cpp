#include"Game.h"
#include <ostream>

using namespace std;

//game.cpp
//constructors
Game::Game () {
    _num_players = 0;
    _num_creatures = 0;
}
Game::Game (Character players[], Character creatures[], int num_players, int num_creatures) {
    _num_players = num_players;
    _num_creatures = num_creatures;
    setPlayersList(players, num_players);
    setCreaturesList(creatures, num_creatures);
}

//getters
int Game::getNumPlayers() { return _num_players; }
int Game::getNumCreatures() { return _num_creatures; ;}

//setters
void Game::setPlayersList(Character players[], int numPlayers) {
    if (numPlayers > 2) {
        numPlayers = 2;
        _num_players = 2;
    }
    for (int i = 0; i < numPlayers; i ++) {
        _players[i] = players[i];
        _num_players = i+1;
    }
}
void Game::setCreaturesList (Character creatures[], int numCreatures) {
    if (numCreatures > 2) {
        numCreatures = 2;
        _num_creatures = 2;
    }
    for (int i = 0; i < numCreatures; i ++) {
        _creatures[i] = creatures[i];
        _num_creatures = i+1;
    }
}

//player get/set
bool Game::setPlayer(int index, Character new_player) {
    bool value = false;
    if (index <= _num_players && index >= 0) {
        _players[index] = new_player;
        value = true;
    }
    return value;
}
Character Game::getPlayer(string name) {
    Character blank;
    if (findPlayer(name) >= 0) {
        return _players[findPlayer(name)];
    }
    return blank;
}

//creature get/set
bool Game::setCreature (int index, Character new_creature){
    bool value = false;
    if (index < _num_creatures && index >= 0) {
        _creatures[index] = new_creature;
        value = true;
    }
    return value;
}
Character Game::getCreature(string name) {
    Character blank;
    if (findCreature(name) >= 0) {
        return _creatures[findCreature(name)];
    }
    return blank;
}

//finders
int Game::findPlayer(string name) {
    int index = -1;
    for (int i = 0; i < _num_players; i++) {
        if (_players[i].getName() == name) {
            index = i;
        }
    }
    return index;
}
int Game::findCreature(string name){
    int index = -1;
    for (int i = 0; i < _num_creatures; i++) {
        if (_creatures[i].getName() == name) {
            index = i;
        }
    }
    return index;
}

//printer
void Game::printAllStats() {
    for (int i = 0; i < _num_players; i++) {
        _players[i].printStats();
        cout << "----------------------------------------------" << endl;
    }
    for (int i = 0; i < _num_creatures; i++) {
        _creatures[i].printStats();
        cout << "----------------------------------------------" << endl;
    }
}