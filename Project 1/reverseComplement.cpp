#include<iostream>

using namespace std;

void reverseComplement(string strand) {
    int length = strand.length();

    string placeholder="";

    //not that pretty but it's readable & gets the job done.
    for (int i = length-1; i >= 0; i--) {
        placeholder+=strand[i];
    }

    strand = placeholder;
    
    for (int i = 0; i <= length; i++){
        if (strand[i]=='A') {
            strand[i]='T';
        } else if (strand[i]=='T') {
            strand[i]='A';
        } else if (strand[i]=='C') {
            strand[i]='G';
        } else if (strand[i]=='G') {
            strand[i]='C';
        }
    }
    cout << strand << endl;
}

int main () {
    string strand1;

    cout << "enter strand1" << endl;
    cin >> strand1;

    reverseComplement(strand1);

    cout << "Exiting program.";

    return 0;

}