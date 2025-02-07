#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Provide an integer:" << endl;
    cin >> num;

     if ((num%2)==0){ //missing the part where we check what % does. If it returns 0, then num is divisable by 2.
         cout << "The number is even." << endl;
     }
     else {
         cout << "The number is odd." << endl;
     }

     return 0;

}