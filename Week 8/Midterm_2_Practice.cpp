#include <cmath>
#include<iostream>
#include <ostream>
#include<sstream>

using namespace std;

void modifyArray(int arr[2][3]){
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] *= 2;
        }
    }
}

void question7(int arr[2][3]){
    cout << "before modification:" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++) {
            arr[i][j] += i;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    modifyArray(arr);
    cout << "after modifyArray:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j=0; j<3; j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}

void question11() {

}

void question12 () {

}

void question13() {

}

void question14() {

}

void mysteryFunction(int A[2][2], int B[2][2]) {
    //for (int i = 0;) {}
}

void question15() {

}

void question16() {
    stringstream alpha("ed+discord+slack");
    string bravo[3];
    int i = 0;
    string temp;
    while (getline(alpha,temp,'+')) {
        bravo[i] = temp;
        i++;
    }

    cout << "pos 1: " << bravo[0] << endl << "pos 2: " << bravo[1] << endl << "pos 3: " << bravo[2] << endl;
}

int main () {
    int userIn=1;
    int arr1[2][3] = {{8,7,5}, {5,2,9}};
    while (userIn != 0) {
        cout << "Choose your menu option:" << endl
             << "1. Question 7 - array" << endl
             << "2. Question 11 - kate switch" << endl
             << "3. Question 12 - el/var" << endl
             << "4. Question 13 - nums array thing" << endl
             << "5. Question 14 - fruit strings" << endl
             << "6. Question 15 - mystery function array fun" << endl
             << "7. Question 16 - how does stringstream work?" << endl
             << "0. Exit!" << endl;
        cin >> userIn;
        switch (userIn) {
            case 1:
            question7(arr1);
            break;
            case 2:
            question11();
            break;
            case 3:
            question12();
            break;
            case 4:
            question13();
            break;
            case 5:
            question14();
            break;
            case 6:
            question15();
            break;
            case 7:
            question16();
            break;
            case 0:
            cout << "Exiting program..." << endl;
            return 0;
            break;
            default:
            cout << "error, please re-enter..." << endl;
        }
    }

    return 0;
}