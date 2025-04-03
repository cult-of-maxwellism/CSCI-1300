#include"Character.h"
#include <string>

using namespace std;

class Game {
    private:
    Character _players[2];
    Character _creatures[2];
    int _num_players, _num_creatures;

    public:
    //constructors
    Game ();
    Game (Character[], Character[], int, int);
    //getters
    int getNumPlayers();
    int getNumCreatures();
    //setters
    void setPlayersList(Character[], int);
    void setCreaturesList (Character[], int);
    //for chars
    bool setPlayer(int,Character);
    Character getPlayer(string);
    bool setCreature (int, Character);
    Character getCreature(string);

    //finders
    int findPlayer(string);
    int findCreature(string);
    //printer
    void printAllStats();
};