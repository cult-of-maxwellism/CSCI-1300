#include<iostream>
using namespace std;

int main () {
    char company;

    cout << "Enter the first letter of the company: " << endl;
    cin >> company;

    cout << "Automobile manufacturer chosen: ";
    
    switch (company) {
        case ('B'):
            cout << "BMW" << endl;
            break;
        case ('V'):
            cout << "Volkswagen" << endl;
            break;
        case ('H'):
            cout << "Honda" << endl;
            break;
        case ('T'):
            cout << "Tesla" << endl;
            break;
        default:
            cout << "Invalid" << endl;
    }

    return 0;
}