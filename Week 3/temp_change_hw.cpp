#include<iostream>

using namespace std;

int main () {
    double temp1, temp2, temp3;
    
    cout << "Enter temperatures over the last three days:" << endl;
    cin >> temp1 >> temp2 >> temp3;

    if (temp1 < 0 || temp2 < 0 || temp3 < 0) {
        //invalid
        cout << "Invalid temperature input." << endl;
    } else if (temp1 < temp2 && temp2 < temp3) {
        //warmer
        cout << "It's getting warmer!" << endl;
    } else if (temp1 > temp2 && temp2 > temp3){
        //colder
        cout << "It's getting cooler!" << endl;
    } else {
        //unpredictable
        cout << "The temperature is changing unpredictably." << endl;
    }

    return 0;
}
