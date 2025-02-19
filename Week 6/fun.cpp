#include<iostream>

using namespace std;

int main () {
    int num;
    do {
        cout << "gimmie a number" << endl;
        cin >> num;

        if (num > 3) {
            continue;
        }
        
        cout << "wrong." << endl;
        
    }while (num <= 3);
    cout << "numbers less than 4 are despicable, brother" << endl;
}