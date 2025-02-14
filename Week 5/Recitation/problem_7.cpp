#include<iostream>
#include<cmath>
#include<iomanip>
#include<cassert>

using namespace std;

//cylinder calculation
double calculateCylindricalVolume(double radius, double height) {
    return (3.1415 * pow(radius,2) * height);
 }

//sphere calculation
double calculateSphericalVolume(double radius) { 
    return ((4.0/3.0) * 3.1415 * pow(radius,3));
}

int main () {
    //variable creation
    double radius, height, volume;
    char userinput;


    //set cylinder or sphere
    cout << "(C)ylinder or (S)pherical container?" << endl;
    cin >> userinput;
    userinput = toupper(userinput);
    assert(userinput == 'C' || userinput == 'S');

    if (userinput == 'C') {
        //cylindrical in
        cout << "What is the container's radius?" << endl;
        cin >> radius;
        cout << "What is the container's height?" << endl;
        cin >> height;

        assert (height > 0 && radius > 0);

        volume = calculateCylindricalVolume(radius,height);

    } else if (userinput == 'S') {
        //spherical calculation
        cout << "What is the container's radius?" << endl;
        cin >> radius;

        assert (radius > 0);

        volume = calculateSphericalVolume(radius);
    } else {
        cout << "this error message shouldn't be possible" << endl;
    }

	cout << "Your container's volume is ~" << setprecision(2) << fixed << volume << endl;
    return 0;

}