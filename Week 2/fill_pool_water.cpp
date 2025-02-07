//init program
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //create variables (outdoor and indoor, time)
    double indoor, outdoor, time;

    //give me a TIME FILLED
    cout << "How many hours have passed?" << endl;
    cin >> time;

    //calculate the amounts inside and out by multiplying hours and then adding the water level
    outdoor = (22+((0.3*time)-(0.1*time)));
    indoor = (19+((0.6*time)-(0.4*time)));

    //here's where the answer gets spit out
    cout << setprecision(3) << "The indoor pool has " <<
    indoor << " inches of water, and the outdoor pool has " << outdoor << " inches of water." << endl;

    return 0;
}