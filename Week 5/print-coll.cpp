/*For this question, you will write a program that prompts the user to enter an integer value between 10 and 500 (both exclusive). 
Your program should then print out a sequence of numbers between the given value and 1 (inclusive) following the pattern below: For a given number ai,

    If ai is even, then ai+1 = floor(ai/2)
    If ai is odd, then ai+1 = 3*ai + 1

Your program should stop printing numbers once the sequence reaches the value of 1.

If the user enters a number that is not between 10 and 500 (both exclusive), print Invalid input. and prompt the user for a number again.

This sequence is referred to as the Collatz sequence. The Collatz Conjecture states that this sequence will eventually reach the value of 1 
for any starting number, a fact that has not yet been proven by modern mathematics!

Note: floor(x) means that x should be rounded down to the nearest integer.*/

#include<iostream>
#include <cmath>

using namespace std;

int evenNumbers (int number) {
    number = floor(number/2);
    return (number);
}

int oddNumbers (int number) {
    number = 3*number+1;
    return (number);
}

int main () {
    int userin, steps;
    steps = 0;

    cout << "Enter a number between 10 and 500:" << endl;
    cin >> userin;

    while (userin <= 10 || userin >= 500) {
        cout << "Invalid input." << endl << "Enter a number between 10 and 500:" << endl;
        cin >> userin;
    }

    while (userin > 1) {
        if ((userin%2 == 0)) {
            userin = evenNumbers(userin);
        } else {
            userin = oddNumbers(userin);
        }
        cout << userin << endl;
        steps++;
    }

    cout << "Total steps: " << steps << endl;
}
