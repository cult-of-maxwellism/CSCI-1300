#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int split(string input_string, char separator, string arr[], const int ARR_SIZE);
bool validateDouble(string input);

int main () {
    
}


int split(string input_string, char separator, string arr[], const int ARR_SIZE) {
    stringstream str(input_string);
    string result;
    int i = 0;

    if (input_string == "") {
        return 0;
    } else {
        while (getline(str, result, separator)) {
            if (i >= ARR_SIZE){
                return -1;
            }
            arr[i] = result;
            i++;
        }
    }
    return i;
}

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
        if (dotCounter != 1) { isDouble = false; } else { isDouble = true; }
    } else { isDouble = false; }

    r