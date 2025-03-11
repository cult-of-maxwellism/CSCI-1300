#include<iostream>
#include<cctype>
#include<string>
using namespace std;

bool validateDouble(string input) {
    bool isDouble = true;
    int length = input.length(), dotCounter = 0;
    
    if (length == 0) {
        return false;
    } else if (input[0] == '-' || isdigit(input[0])) {
        for (int i=1; i < length; i++) {
            if (input[i] != '.' && !isdigit(input[i])){
                isDouble = false;
            } else if (input[i] == '.') {
                dotCounter++;
            }
        }
        if (dotCounter != 1) {
            return false;
        } else {
            return true;
        }
    } else { isDouble = false; }

    return isDouble;
}

int main () {
    string userIn;
    cout << "Enter a Double: " << endl;
    cin >> userIn;
    
    if (validateDouble(userIn)) {
        cout << "Valid double." << endl;
    } else {
        cout << "INVALID!!" << endl;
    }
    
    return 0;
}