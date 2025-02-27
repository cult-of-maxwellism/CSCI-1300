#include<iostream>
using namespace std;


void getCodingFrames(string strand) {
    int length=strand.length();
    string toPrint;
    bool printing = false, saidStuff = false;

    //Check string for sequence ATG, if A is followed by T and G, print starting at A until T-A-A, T-A-G, or T-G-A.
    for (int i = 0; i <= length; i++) {
        //This checks if i is at the beginning of ATG, and if it is, sets printing to true.
        if (strand.substr(i,3) == "ATG") {
            printing = true;
            saidStuff = true;
            //in theory, this checks to ensure that it's not part of the "read" characters: strand.substr(i-4,3) != "ATG" && 
            //this part checks if i is at the end of TAA, TAG, or TGA
        }
        if ((toPrint.length()%3 == 0) && i>6 && (strand.substr((i-3),3) == "TAA" || strand.substr((i-3),3) == "TAG" || strand.substr((i-3),3) == "TGA")) {
            cout << toPrint << endl;
            toPrint = "";
            printing = false;
        }
        //If printing is true, append a character to the print funct 
        if (printing == true) {
            toPrint += strand[i];
        }
    }
    cout << toPrint;

    if (saidStuff == false) {
        cout << "No reading frames found." << endl;
    }
}

int main () {
    string strand1;

    cout << "enter strand1" << endl;
    cin >> strand1;

    getCodingFrames(strand1);

    cout << "Exiting program.";

    return 0;

}