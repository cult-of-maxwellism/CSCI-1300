#include<iostream>

using namespace std;


void getCodingFrames(string strand) {
    int length=strand.length();
    string toPrint;
    bool stuffSaid = false, printing = false;
    //cout << "strand length reflects as " << length << endl;

    for (int i = 0; i <= length; i++) {
        //cout << "At i " << i << " checking " << strand[i] << " start/end checks: " << (strand.substr(i,3)) << endl;
        if (strand.substr(i,3) == "ATG") {
            if (strand.substr(i,3) == "ATG" && printing == true && toPrint.length()%3 != 0) {
                cout << "toPrint = " << toPrint << " and cleared" << endl;
                toPrint = "";
            }
            cout << "ATG True, while at i " << i << endl;
            printing = true;
        }
        
        if (printing == true) {
            //cout << "Adding to toPrint at i " << i << " toPrint divided by 3 " << ((toPrint.length()+2)%3) << endl;
            toPrint += strand[i];

            //cout << ((toPrint.length()+2)%3) << endl;
            if ((toPrint.length()+2)%3 == 0 && (strand.substr((i),3) == "TAA" || strand.substr((i),3) == "TAG" || strand.substr((i),3) == "TGA")) {
                //adds the last 2 characters and then prints
                toPrint += strand.substr(i+1,2);
                cout << "Noted endline char at i " << i << endl;
                cout << toPrint << endl;
                toPrint = "";
                printing = false;
                stuffSaid = true;
            }
            //toPrint += strand.substr(i,3);
        }
    }

    if (stuffSaid == false) {
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