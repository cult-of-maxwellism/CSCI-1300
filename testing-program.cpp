#include <iostream>
#include <ostream>

using namespace std;

int main() {
  int characterSelect = 0;
  struct PlayableCharacter {
    string name;
    unsigned int killCount;
    unsigned int deathCount;
    unsigned int assistCount;
  };

  const int LIMIT = 3;
  PlayableCharacter arr[LIMIT] {
    {"Bill", 5, 5, 5},
    {"Gnar", 8, 3, 7},
    {"Steve", 10, 9, 3}

  };

  cout << "char 1, 2, or 3?" << endl
       << "1. " << arr[0].name << endl
       << "2. " << arr[1].name << endl
       << "3. " << arr[2].name << endl;
  cin >> characterSelect;

  characterSelect --;

  cout << "Name:    " << arr[characterSelect].name << endl
       << "Kills:   " << arr[characterSelect].killCount << endl
       << "Deaths:  " << arr[characterSelect].deathCount << endl
       << "Assists: " << arr[characterSelect].assistCount << endl;

  
  return 0;
}