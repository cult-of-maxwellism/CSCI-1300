// done!
#include<iostream>
#include <cmath>

using namespace std;

int evenNumbers (int number) {
    number = floor(number/2);
    return (number);
}

int oddNumbers (int number) {
    number = 3*number+1;
    return (number);
}

int main () {
    int userin, steps;
    steps = 0;

    cout << "Enter a number between 10 and 500:" << endl;
    cin >> userin;

    while (userin <= 10 || userin >= 500) {
        cout << "Invalid input." << endl << "Enter a number between 10 and 500:" << endl;
        cin >> userin;
    }

    while (userin > 1) {
        if ((userin%2 == 0)) {
            userin = evenNumbers(userin);
        } else {
            userin = oddNumbers(userin);
        }
        cout << userin << endl;
        steps++;
    }

    cout << "Total steps: " << steps << endl;
}
