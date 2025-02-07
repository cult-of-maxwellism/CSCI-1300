//inital setup,  include iostream, iomanip, and cmath, use STD
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    //variable declaration, I'll need height and time
    double height,time;

    //get user input for fall distance
    cout << "How far did the object fall in meters?" << endl;
    cin >> height;

    //calculate fall time - square root of 2 times height divided by 9.8
    time = sqrt(((2*height)/9.8));

    //set precision and tell the time. setprecision gives significant digits.
    // https://cplusplus.com/reference/ios/fixed/ tells me to do fixed - it'll fix the number of
    // digits, so instead of giving me the 3 significant digits, it'll give me just 2 decimal pts
    cout << "The object fell for " << fixed << setprecision(2) << time << " seconds." << endl;

    return 0;
}