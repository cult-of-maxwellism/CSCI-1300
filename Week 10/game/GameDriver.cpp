#include"Game.h"
#include <ostream>
#include<sstream>
#include<fstream>
#include <string>

using namespace std;


bool loadCharacters(string filename, Character characters[], const int CHARACTERS_SIZE, bool isCreature) {
    ifstream file_in(filename);
    string currentLine, currentIn;
    int idx = 0, pos = 0;

    if (file_in.fail()){ return false; }
    
    while (getline(file_in, currentLine)) {
        Character current;
        if (idx >= CHARACTERS_SIZE) { break; }

        //cout << "Current line is " << currentLine << " at index " << idx << endl;

        stringstream linestream(currentLine);
        pos = 0;

        while(getline(linestream, currentIn, '|')){
            if (currentIn == "name" || currentIn == "health" || currentIn == "mana" || currentIn == "status" || currentIn == "" || currentIn == " " || currentIn == "\n") {
                continue;
            }

            //cout << currentIn << " at pos: " << pos << " and index: " << idx << endl;

            if (idx >= CHARACTERS_SIZE) { break; }
            
            if (pos == 0) {
                current.setName(currentIn);
                pos++;
            } else if (pos == 1) {
                double healthIn = stod(currentIn);
                //cout << "current in (health) is value " << stod(currentIn) << endl;
                current.setHealth(healthIn);
                pos++;
            } else if (pos == 2) {
                double manaIn = stod(currentIn);
                //cout << "current in (mana) is value " << stod(currentIn) << endl;
                current.setMana(manaIn);
                pos++;
            } else if (pos == 3) {
                current.setStatus(currentIn[0]);
                current.setIsCreature(isCreature);
                characters[idx] = current;
                idx ++;
                continue;
            }
        }
    }
    return true;
}

int main() {
    string filename = "homework_8_input/creatures_full_invalid.txt";



    // Opening the file to load players
    Character players[3] = {};

    loadCharacters(filename, players, 3, true);
    
    for(int i = 0; i < 3; i++){
        players[i].printStats();
        cout << "----------------------------------------------" << endl;
    }
}