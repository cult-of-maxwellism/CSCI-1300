#include <iostream>
using namespace std;

int main() {

    int numbers[5] = {10, 20, 30, 40, 50};
    //moving sum up here to make it more global for a quick test
    int sum = 0;

    cout << "The contents of the array are: ";

    for (int i = 0; i < 5; i++) {
        //adding [i] so it returns each number
        cout << numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        //removing this so sum actually adds something sum = 0;
        // adding [i] to numbers to call each part of the array
        sum += numbers[i];
    }

    cout << "Sum = " << sum << endl;
    return 0;
}

