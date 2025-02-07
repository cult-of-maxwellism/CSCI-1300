#include <iostream>

using namespace std;

int main() 
{
    // declare all the variables
    int temperature;

    // prompt the user & get their input
    cout << "What is the temperature?" << endl;
    cin >> temperature;

    // input validation: temperature must be positive
    if (temperature <= 0) // FILL IN THIS LINE 
    {
        cout << "Invalid temperature." << endl;
        return 0;
    }
    
    // decide if you need to carry extra water based on the temperature
    if (temperature > 85)
    {
        cout << "You need to carry extra water." << endl;
    }
    else
    {
        cout << "You don't need extra water." << endl;
    }

    return 0;
}