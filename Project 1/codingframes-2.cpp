#include<iostream>

using namespace std;


void getCodingFrames(string strand) {
    int length=strand.length();
    bool readingFrames=false;
    //cout << "strand length reflects as " << length << endl;

    for (int i = 0; i < (length-2); i++) {
        if (strand.substr(i,3) == "ATG") {
            for (int j = i+3; j < (length-2); j+=3) {
                if (strand.substr(j,3) == "TAA" || strand.substr(j,3) == "TAG" || strand.substr(j,3) == "TGA") {
                    cout << strand.substr(i,j-i+3) << endl;
                    i=j+2;
                    readingFrames=true;
                    break;
                }
            }
        }
    }

    if (readingFrames == false) {
        cout << "No reading frames found." << endl;
    }
}

int main () {
    string strand1;
    do {
    cout << "enter strand1" << endl;
    cin >> strand1;

    getCodingFrames(strand1);
    
    cout << "next to try:" << endl;

    } while (strand1 != "exit");
    cout << "Exiting program.";

    return 0;
}

//ATGCTTAGCGATGAATGATCGTAAATGCGTGAATGGCCGTAGTGAATGCGTTAG needs to work!