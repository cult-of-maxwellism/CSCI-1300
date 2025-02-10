#include<iostream>
#include<iomanip>

using namespace std;

double calculateSowingTime(double area, char machine_type) {
    switch (machine_type) {
        case ('W'):
            return ((area/8)*12);
            break;
        case ('X'):
            return ((area/3)*10);
            break;
        case ('Y'):
            return ((area/2)*7);
            break;
        case ('Z'):
            return ((area/7)*8);
            break;
        default:
            return (0);    
    }
}

int main () {
    double area;
    char machine_type;

    cout << "Enter area of the farmland in sq ft:" << endl;
    cin >> area;

    cout << "Enter the type of sowing machine to be used:" << endl;
    cin >> machine_type;

    if (calculateSowingTime (area, machine_type) > 0) {
        cout << "The time taken is: " << setprecision(2) << fixed << calculateSowingTime(area, machine_type) << " minutes." << endl;
    } else {
        cout << "Area or machine type is invalid. Time cannot be calculated." << endl;
    }

    return 0;
}