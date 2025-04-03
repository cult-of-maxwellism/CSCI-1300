#include"Game.h"

using namespace std;

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
    cout << "Adding players..." << endl;
    for (int i = 0; i < 2 && i < numPlayers; i ++) {
        cout << "Setting at index " << i << endl;
        _players[i] = players[i];
        _num_players = i;
    }
    cout << _num_players << " players added." << endl;
}
void Game::setCreaturesList (Character creatures[], int numCreatures) {
    cout << "Adding creatures..." << endl;
    for (int i = 0; i < 2 && i < numCreatures; i ++) {
        cout << "Setting at index " << i << endl;
        _creatures[i] = creatures[i];
        _num_creatures = i;
    }
    cout << _num_creatures << " creatures added." << endl;
}

//player get/set
bool Game::setPlayer(int index, Character new_player) {
    bool value = false;
    if (index < _num_players) {
        _players[index] = new_player;
        value = true;
    }
    return value;
}
Character Game::getPlayer(string name) {
    Character chosen;
    if (findPlayer(name) != -1) {
        chosen = _players[findPlayer(name)];
    }
    return chosen;
}

//creature get/set
bool Game::setCreature (int index, Character new_creature){
    bool value = false;
    if (index < _num_creatures) {
        _creatures[index] = new_creature;
        value = true;
    }
    return value;
}
Character Game::getCreature(string name) {
    Character chosen;
    if (findCreature(name) != -1) {
        chosen = _creatures[findCreature(name)];
    }
    return chosen;
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