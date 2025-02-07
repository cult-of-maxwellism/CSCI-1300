#include <iostream>
using namespace std;

int main()
{
int num = 0;

    if (num<0) {
        cout << "The number is less than zero.";
    }
    else if (num == 0) { //missing "if (num == 0)"
        cout << "The number is zero.";
    }
    else if (num>0) {
        cout << "The number is greater than zero.";
    }

    return 0;

}