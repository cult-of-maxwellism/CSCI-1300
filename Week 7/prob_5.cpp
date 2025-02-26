#include<iostream>
using namespace std;

int main () {
    //declare set1 and set2
    int set1[3], set2[2];

    //get set1 (this isn't the "best" way, but is the conceputally simplest. Will add error configs, etc, if necessary.)
    cout << "Please enter 3 codes for the main dishes:" << endl;
    cin >> set1[0] >> set1[1] >> set1[2];

    //get set2
    cout << "Please enter 2 codes for the drinks:" << endl;
    cin >> set2[0] >> set2[1];

    //this runs for every possible set1
    for (int i = 0; i <= 2; i++) {
        //this part here runs for every possible set2
        for (int j = 0; j <= 1; j++) {
            //this basically goes set1[0], with every set2, then set1[1] with every set2, etc
            cout << "Dish " << set1[i] << " with Drink " << set2[j] << "." << endl;;
        }
    }
    return 0;
}