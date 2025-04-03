#include<iostream>

using namespace std;

class Character {
    private:
    string _name;
    double _health;
    int _mana;
    char _status;
    bool _isCreature;

    public:
    //constructors
    Character ();
    Character (string, double, int, char, bool);
    
    //getters
    string getName();
    double getHealth();
    int getMana();
    char getStatus();
    bool getIsCreature();

    //change functions
    void setName (string);
    void setHealth(double);
    void setStatus(char);
    void setMana(int);
    void setIsCreature(bool);
    void printStats();

};