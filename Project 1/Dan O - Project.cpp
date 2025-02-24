#include<iostream>
#include<iomanip>

using namespace std;

bool isValidBase(char base);
bool isValidStrand(string strand);
double strandSimilarity(string strand1, string strand2);

// This is a required function to successfully test Double functions in C++:
/*
  - doublesEqual will test if two doubles are equal to each
  - other within two decimal places.
*/
bool doublesEqual(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}

int main () {
    //char userin;
    string strands, strand1, strand2;
    /*
    cout << "enter a letter" << endl;
    cin >> userin;

    cout << "enter a string" << endl;
    cin >> strands;
    */
    cout << "enter strand1" << endl;
    cin >> strand1;
    cout << "enter strand2" << endl;
    cin >> strand2;

    cout << strandSimilarity(strand1, strand2) << endl;
/*
    if (isValidBase(userin)) {
        cout << userin << " is a valid letter for this!" << endl;
    } else {
        cout << userin << " ISN'T a valid letter!";
    }

    if (isValidStrand(strands)) {
        cout << "is a strand" << endl;
    } else  {
        cout << "strand isn't valid" << endl;
    }
*/
    return 0;

}

bool isValidBase(char base) {
    if (base == 'A' || base == 'C' || base == 'G' || base == 'T') {
        return true;
    } else {
        return false;
    }
}

bool isValidStrand(string strand) {
    int length = strand.length();
    bool results = true;

    for (int i=0; i < length; i++) {
        if (!isValidBase (strand[i])){
            results = false;
        }
    }

    return results;
}

/*The function strandSimilarity() compares two strands position by position, counting the number of positions
where the bases are identical. This provides a direct measure of how similar the two sequences are.*/
double strandSimilarity(string strand1, string strand2){
    double simlScore;
    int length = strand1.length();

    if (strand1.length() != strand2.length()) {
        return 0;
    } else {
        for (int i=0; i < length; i++) {
            if (strand1[i]==strand2[i]){
                simlScore ++;
            }
        }
    }

    return (simlScore/strand1.length());
}