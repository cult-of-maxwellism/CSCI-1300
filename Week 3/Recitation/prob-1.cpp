#include <iostream>
using namespace std;

int main()
{
int num = 6;

    if (num > 8) {
        cout << "The number is greater than 8." ;
    }
    else if (num == 8) { //missing a = here
        cout << "The number is equal to 8.";
    }
    else {
        cout << "The number is less than 8.";
    }

    return 0;

}