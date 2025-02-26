#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {

    if (num <= 1) 
        return false;

    for (int i = 2; i < sqrt(num); i++) {
        if ((num%i) == 0) { //make mod a operation and then make the = a judgement ==
            return true; //flip true and false to get the right outs
        }
    }

    return false; //flip true and false to get the right outs, if i=2 and num%2 != 0 then it's not even
}

int main(){

    int num = 36;
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
