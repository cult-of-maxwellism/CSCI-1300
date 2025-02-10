#include<iostream>
using namespace std;

int main () {
    int input, instrument;

    cout << "Select a category: (1)Brass (2)Woodwind (3)Percussion" << endl;
    cin >> input;

    switch (input) {
        case (1):
            cout << "Select an instrument: (1)Trumpet (2)Trombone" << endl;
            cin >> instrument;
                switch (instrument){
                    case (1):
                        cout << "Your instrument will be $570." << endl;
                        break;
                    case (2):
                        cout << "Your instrument will be $500." << endl;
                        break;
                    default: 
                        cout << "Please enter valid input" << endl;
                }
            break;
        case (2):
            cout << "Select an instrument: (1)Flute (2)Saxophone" << endl;
            cin >> instrument;
                switch (instrument){
                    case (1):
                        cout << "Your instrument will be $425." << endl;
                        break;
                    case (2):
                        cout << "Your instrument will be $225." << endl;
                        break;
                    default: 
                        cout << "Please enter valid input" << endl;
                }
            break;
        case (3):
            cout << "Select an instrument: (1)Snare Drum (2)Cymbals" << endl;
            cin >> instrument;
                switch (instrument){
                    case (1):
                        cout << "Your instrument will be $275." << endl;
                        break;
                    case (2):
                        cout << "Your instrument will be $350." << endl;
                        break;
                    default: 
                        cout << "Please enter valid input" << endl;
                }
            break;
        default:
            cout << "Please enter a valid input." << endl;
    }

    return 0;
}