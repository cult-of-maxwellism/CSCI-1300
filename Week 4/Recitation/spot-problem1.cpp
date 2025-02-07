//adding headers to compile and test
#include<iostream>
using namespace std;

int main (){
char grade;
cout << "Enter your grade (A, B, C, D, F): " << endl;
cin >> grade;

switch (grade) {
    case 'A': //testing for string not character
        cout << "Excellent work!" << endl;
        //missing break
        break;
    case 'B':
        cout << "Good job!" << endl;
        //missing break
        break;
    case 'C':
        cout << "You passed!" << endl;
        //missing break
        break;
    case 'D':
        cout << "You need to work harder." << endl;
        //missing break
        break;
    case 'F': //adding a case for F
        cout << "You're failing." << endl;
        break;
    default:
        cout << "Invalid grade entered." << endl;
        //missing break
}
}