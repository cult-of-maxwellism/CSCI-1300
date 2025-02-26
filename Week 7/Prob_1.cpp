#include <iostream>
using namespace std;

int main() {

    int x = 3, y = 4;

    for (int i = x; i >= 0; i--) { //I assume it's supposed to be X
        for (int j = y; j >= 0; j--) { //I assume this is supposed to be Y?
            cout << "(" << i << ", " << j << ")  ";
        }
        cout << endl;
    }

    //taking a guess that (i, j) is supposed to be related to (x, y) and not (y, x)

    //might as well add
    return 0;
}

