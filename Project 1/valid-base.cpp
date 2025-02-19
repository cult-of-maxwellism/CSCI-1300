#include<iostream>
using namespace std;

bool isValidBase(char base) {
    if (base == 'A' || base == 'C' || base == 'G' || base == 'T') {
        return true;
    } else {
        return false;
    }
}

int main () {
    char userin;
    cout << "enter a letter" << endl;
    cin >> userin;
    if (isValidBase(userin) == true) {
        cout << userin << " is a valid letter for this!" << endl;
    } else {
        cout << userin << " ISN'T a valid letter!";
    }

}