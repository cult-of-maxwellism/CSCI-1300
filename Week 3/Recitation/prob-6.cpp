#include <iostream>
using namespace std;

int main()
{
char grade;
cout << "Provide a grade (A, B, C, D, or F):" << endl;
cin >> grade;

     if (grade == 'A' || grade == 'B' || grade == 'C'){ //this originally only checked if grade=a or if B was true or if C was true
         cout << "This is a passing grade." << endl;
     }
     else if (grade == 'D'){
         cout << "This grade passes with conditions." << endl;
     }
     else {
         cout << "This is a failing grade." << endl;
     }

     return 0;

}