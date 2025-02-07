#include <iostream>

using namespace std;

int main(){
    // declare all the variable
    double fahrenheit, celsius;

    // prompt the user & get their input
    cout << "What is the temperature in Fahrenheit?" << endl;
    cin >> fahrenheit;

    // temperature calculation
    celsius = (fahrenheit-32) * 5.0/9.0;

    cout << "The temperature is " << celsius << " degree Celsius." << endl;
    return 0;
}