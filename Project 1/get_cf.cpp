#include<iostream>
using namespace std;


void getCodingFrames(string strand) {
    int length=strand.length();
    string toPrint;
    bool printing = false, saidStuff = false;

    //Check string for sequence ATG, if A is followed by T and G, print starting at A until T-A-A, T-A-G, or T-G-A.
    for (int i = 0; i <= length; i++) {
        int check2 = i+2, check1 = i+1, checkN1 = i-1, checkN2 = i-2; // checkN3 = i-3;

        /*Function: getCodingFrames(string) 	void getCodingFrames(string strand)
          Purpose: 	The function will print out complete reading frames.
          Parameters: 	string strand - The DNA strand from which to extract reading frames.
          Return Value: 	N/A
          Error handling/ Boundary condition: 	- If no reading frames are found, the function should print “No reading frames found.”
                                                - You may assume that the input DNA strand is a valid DNA sequence.
                                                - **Note: **There could be multiple ORF within a single DNA strand.*/
        if (strand[i]=='A' && strand[check1]=='T' && strand[check2]=='G') {
            printing = true;
            saidStuff = true;
        }
        if (printing == true) {
            toPrint += strand[i];
        }
        /*
        cout << strand[i] << strand[i+1] << strand[i+2];
        //checkN3 >= 0 && (strand[checkN3] != 'G' && 
        if (strand[checkN2] == 'T' && (strand[checkN1] == 'A' || strand[checkN1] == 'G') && (strand[i]=='A' || strand[i]=='G')) {
            cout << toPrint << endl;
            toPrint = "";
            printing = false;
        }*/
    }

    if (saidStuff == false) {
        cout << "No reading frames found." << endl;
    }
}

int main () {
    string strand1;

    cout << "enter strand1" << endl;
    cin >> strand1;

    //getCodingFrames(strand1);

    cout << strand1[1] << endl;

    cout << "Exiting program.";

    return 0;

}