#include<iostream>
#include <ostream>
#include"Character.h"

using namespace std;

Character makeCharacter () {
    string name;
    double health;
    int mana, userIn;
    char status;
    bool isCreature;
    cout << "Welcome to the character creation screen! Enter character name: " << endl;
    getline(cin, name);
    cout << "Enter character health:" << endl;
    cin >> health;
    cout << "Enter mana amount:" << endl;
    cin >> mana;

    //while (status != 'A' || status != 'C' || status != 'F') {
        cout << "Enter status A, C, or F:" << endl;
        cin >> status;
        /*switch (status) {
            case 'a':
            status = 'A';
            break;
            case 'c':
            status = 'C';
            break;
            case 'f':
            status = 'F';
            break;
            default:
            cout << "Invalid answer!" << endl;
        }
            
    }
        */

    while (userIn != 1 && userIn != 0) {
        cout << "Enter 1 if your character is a creature, 0 if not." << endl;
        cin >> userIn;
        switch (userIn) {
            case 1:
            isCreature = true;
            break;
            case 2:
            isCreature = false;
            break;
            default:
            cout << "Invalid answer!" << endl;
        }
    }

    Character newCharacter (name, health, mana, status, isCreature);

    cout << "You have successfully made a new character! Stats loading..." << endl;

    newCharacter.printStats();
    
    return newCharacter;
}

int main() {
    Character character1("Elara", 8.2, 12, 'F', true);
    character1.printStats();

    Character newChar = makeCharacter();
    newChar.printStats();
}