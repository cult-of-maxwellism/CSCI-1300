#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int x = 5.7;
    cout << x << endl;
    double y = x*2;
    cout << y << endl;

    y= 321.1234567890;

    cout << setprecision(4) << fixed << y << endl;

    return 0;
}