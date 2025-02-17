#include<iostream>

using namespace std;

int main () {
    int userin, magic, health, tea, sun, toad, pine;

    cout << "Select a potion crafting priority:" << endl;
    cout << "1. Health Potion" << endl;
    cout << "2. Magic Potion" << endl;
    cin >> userin;

    while (userin != 1 && userin != 2) {
        //cout << userin << endl;
        cout << "Invalid input. Please select 1 or 2." << endl;
        cin >> userin;
    }

    cout << "How many Tealeaves do you have?" << endl;
    cin >> tea;
    while (tea < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Tealeaves do you have?" << endl;
        cin >> tea;
    }

    cout << "How many Sunflowers do you have?" << endl;
    cin >> sun;
    while (sun < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Sunflowers do you have?" << endl;
        cin >> sun;
    }

    cout << "How many Toadstools do you have?" << endl;
    cin >> toad;
    while (toad < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Toadstools do you have?" << endl;
        cin >> toad;
    }

    cout << "How many Pine Needles do you have?" << endl;
    cin >> pine;
    while (pine < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cout << "How many Pine Needles do you have?" << endl;
        cin >> pine;
    }

    magic = 0;
    health = 0;
    if (userin == 1) {
        while (tea >= 6 && sun >= 1 && toad >= 5 && pine >=2){
            tea = tea-6;
            sun = sun-1;
            toad = toad-5;
            pine = pine-2;
            health ++;
        }
        while (tea >= 2 && sun >=3 && toad >= 10 && pine >= 1) {
            tea = tea-2;
            sun = sun-3;
            toad = toad-10;
            pine = pine-1;
            magic ++;
        }
        cout << "You can make " << health << " Health potion(s) and " << magic << " Magic potion(s)." << endl;
    } else {
        while (tea >= 2 && sun >= 3 && toad >= 10 && pine >= 1) {
            tea = tea-2;
            sun = sun-3;
            toad = toad-10;
            pine = pine-1;
            magic ++;
        }
        while (tea >= 6 && sun >= 1 && toad >= 5 && pine >= 2){
            tea = tea-6;
            sun = sun-1;
            toad = toad-5;
            pine = pine-2;
            health ++;
        }
        cout << "You can make " << magic << " Magic potion(s) and " << health << " Health potion(s)." << endl;
    }

    return 0;
}