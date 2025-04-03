#include <iostream>
using namespace std;

class Car {
    int milesDriven;
    public:
    void setMiles(int newMiles) {
        milesDriven = newMiles;
    }
};

int main() {
    Car myCar;
    myCar.setMiles(100);
    return 0;
}
