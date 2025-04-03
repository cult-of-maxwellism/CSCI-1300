#include"Game.h"

using namespace std;

int main() {
    Character player1("Rhonda", 100.0, 50, 'A', false);
    Character player2("Spencer", 80.0, 30, 'A', false);
    Character creature1("Goblin", 60.0, 20, 'C', true);
    Character creature2("Dragon", 150.0, 100, 'F', true);

    Character players[2] = {player1, player2};
    Character creatures[2] = {creature1, creature2};

    Game new_game(players, creatures, 2, 2);
    cout << "Players added: " << new_game.getNumPlayers() << endl
         << "Creatures added: " << new_game.getNumCreatures() << endl;
    new_game.printAllStats();
}