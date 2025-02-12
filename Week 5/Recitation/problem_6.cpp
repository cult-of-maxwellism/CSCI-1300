/*What output does the following pseudocode produce?
Start
  Declare an integer variable `m` and initialize it to -1.
  Declare an integer variable `i` and initialize it to 0.
  While `i` is less than 5, do:
	Declare an integer variable `s` and initialize it to 1.
	If `i` is not 0 and the remainder of `i` divided by 3 is 0, then:
  		Multiply `s` by -1 and assign the result back to `s`.
  		Print the product of `m` and `s`.
	Else:
  		Increment `m` by 2.
  		Print the value of `m`.
	Increment `i` by one.
End
*/

#include<iostream>

using namespace std;

int main () {
    int m = -1;
    int i = 0;

    while (i < 5) {
        int s = 1;
        if ((i != 0) && ((i%3) == 0)){
            s = s*(-1);
            cout << (m*s) << endl;
        } else {
            m = m+2;
            cout << m << endl;
        }
        i ++;
    }
    return 0;
}