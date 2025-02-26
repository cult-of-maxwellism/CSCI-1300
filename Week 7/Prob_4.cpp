#include <iostream>
#include <string>

using namespace std;

int main()
{
    string languages[6] = {"C++", "Python", "Java", "Matlab", "Julia"};
    int product = 1; //set to 1 because 0 * any number = 0
    int total = 5;

    for (int i = 0; i < total; i++){
        product *= languages[i].length(); //forgot the ()
    }

    cout << "Product of lengths = " << product << endl;
    return 0;
}
