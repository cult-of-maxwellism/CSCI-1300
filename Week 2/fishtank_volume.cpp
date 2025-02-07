//init program
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //create variables (L/W/H/G)
    double length, width, height, gallons;

    //get length
    cout << "What is the length of the fish tank in inches?" << endl;
    cin >> length;

    //get width
    cout << "What is the width of the fish tank in inches?" << endl;
    cin >> width;

    // get height
    cout << "What is the height of the fish tank in inches?" << endl;
    cin >> height;

    //calculate the volume in gallons of this fish tank.

    gallons = ((length*width*height)*0.004329);

    //tell us the conclusion to this!!!! print the message with gallons.
    cout << "This fish tank has a " << fixed << setprecision (1) << gallons << " gallon capacity.";

    return 0;
}
