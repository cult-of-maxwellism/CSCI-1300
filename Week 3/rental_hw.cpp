#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    char car;
    int days;
    double price;

    cout << "Which car type (A, B, C, or D) would you like to rent?" << endl;
    cin >> car;

    cout << "How many days would you like to rent this car?" << endl;
    cin >> days;

    //Total = 1.23 X ( base price + no. of days X price per day )
    if (car != 'A' && car != 'B' && car != 'C' && car != 'D') {
        cout << "Please enter valid input." << endl;
    } else if (days <= 0){
        cout << "Please enter valid input." << endl;
    } else {
        if (car == 'A') {
            price = (days*15)+80;
        } else if (car == 'B') {
            price = (days*25)+110;
        } else if (car == 'C') {
            price = (days*35)+160;
        } else if (car == 'D') {
            price = (days*45)+220;
        }
        
        price = price*1.23;
        cout << "Your total is $" << setprecision(2) << fixed << price << endl;
    }

    return 0;
}