#include<iostream>

using namespace std;

int main () {
    double miles, budget, nights;

    //budget in
    cout << "What is your budget?" << endl;
    cin >> budget;

    //miles in
    cout << "How many miles will you drive?" << endl;
    cin >> miles;

    //nights in
    cout << "How many nights do you want to spend there?" << endl;
    cin >> nights;

    if (budget < 0 || miles < 0 || nights < 0){
        cout << "Invalid input(s)." << endl;
    } else {
        //calculate amount
        budget = budget - (miles*0.16);

        //results
        if (budget >= (100*nights)) {
            //hotel result:
            cout << "You can afford to stay in a nice hotel on this trip." << endl;
        } else if (budget >= (50*nights) && budget < (100*nights)) {
            //motel result:
            cout << "You can afford to stay in a cheap motel on this trip." << endl;
        } else if (budget >= (20*nights) && budget < (50*nights)) {
            //camping result:
            cout << "You can afford to go camping on this trip." << endl;
        } else if (budget < (20*nights)) {
            //budget result:
            cout << "This trip is outside your budget." << endl;
        }
    }

    return 0;
}