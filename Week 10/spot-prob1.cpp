#include <iostream>
using namespace std;

class Temperature {
public:
	Temperature(double t) {
    	temp = t;
	}

	double getTemp() const {
    	return temp;
	}

private:
	double temp;
};

int main() {
	const Temperature todayTemp(98.6);
	cout << "Today's temperature is: " << todayTemp.getTemp() << " degrees." << endl;
	return 0;
}
