#include<iostream>

using namespace std;

void transcribeDNAtoRNA(string strand) {
    int length = strand.length();
    for (int i = 0; i <= length; i++){
        if (strand[i]=='T') {
            strand[i]='U';
        }
    }
    cout << strand << endl;
}

int main () {
    string strand1;

    cout << "enter strand1" << endl;
    cin >> strand1;

    transcribeDNAtoRNA(strand1);

    cout << "Exiting program.";

    return 0;

}