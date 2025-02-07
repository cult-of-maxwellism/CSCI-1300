#include <iostream>

using namespace std;

//tipping tool
//need: total, tip %,etc

main () {
    //sets a variable (xx.xx) for the total in
    double total;

    //sets a variable (xx.xx) for user input on second question
    double tip;

    //asks for total
    cout << "How much is the total?" << endl;
    cin >> total;
    //gives options
    cout << "What percent do you want to tip?" << endl << "A. 10%        B. 15%" << endl << "C. 20%        D. 25%" << endl << cout "or other number, please enter:" << endl;
    cin >> tip;
    if (tip = "A") {
        total = total*1.1;
        cout << total;
    }
}
