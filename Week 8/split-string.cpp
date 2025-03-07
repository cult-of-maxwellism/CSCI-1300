#include <iostream>
#include <sstream>
#include <string>

using namespace std;

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

void printArray(string arr[], const int NUM_ELEMENTS) {
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        cout << "arr[" << i << "]:" << arr[i] << endl;
    }
}

int main() {
    string testcase = "RST,UVW,XYZ";
char separator = ',';
const int ARR_SIZE = 3;
string arr[ARR_SIZE];
// num_splits is the value returned by split
int num_splits = split(testcase, separator, arr, ARR_SIZE);
cout << "Function returned value: " << num_splits << endl;
// print array contents
printArray(arr, ARR_SIZE);
}