#include<iostream>

using namespace std;

double strandSimilarity(string strand1, string strand2);
int bestStrandMatch(string input_strand, string target_strand);

void identifyMutations(string input_strand, string target_strand) {
    int align, position, in = input_strand.length(), target = target_strand.length();

    //It's messy and wasteful, but we're going based off if statments!!!
    if (in == target) {
        position = 0; //I'm gonna just use this as my error variable
        align = bestStrandMatch(input_strand, target_strand);
        cout << "Best alignment index: " << align << endl;

        for (int i = 0; i < in; i++) {
            if (input_strand[i] != target_strand[i]) {
                cout << "Substitution at position " << i+1 << ": " << input_strand[i] << " -> " << target_strand[i] << endl;
                position++;
            }
        }
        if (position == 0) {
            cout << "No mutations found." << endl;
        }
    } else if (in > target) {
        //align me!
        align = bestStrandMatch(input_strand, target_strand);
        cout << "Best alignment index: " << align << endl;
        
        //here's the loop for the longer function (in this case, in)
        for (int i = 0; i < in; i ++) {
            //I need this - I get faults trying to put this straight into target_strand[...]
            position = i-align;

            //while we're still "in the negatives" or over on target_strand, do this
            if (position < 0 || position > (target-1)) {
                cout << "Deletion at position " << i+1 << ": " << input_strand[i] << " is deleted in target strand" << endl;
            //but if we're bang-on in target_strand, do this.
            } else if (position >= 0 && position < target && input_strand[i] != target_strand[position]) {
                cout << "Substitution at position " << i+1 << ": " << input_strand[i] << " -> " << target_strand[position] << endl;
            }
        } 
    } else if (in < target ) {
        align = bestStrandMatch(target_strand, input_strand);
        cout << "Best alignment index: " << align << endl;
        //here's the loop for the longer function (in this case, target)
        for (int i = 0; i < target; i ++) {
            //I'm going to mostly reuse code here, which means I probably could have made a function for it
            position = i-align;
        
            //while we're still "in the negatives" or over on input_strandS, do this
            if (position < 0 || position > (in-1)) {
                cout << "Insertion at position " << i+1 << ": " << target_strand[i] << " is inserted in target strand" << endl;
            //but if we're bang-on in target_strand, do this.
            } else if (position >= 0 && position < in && target_strand[i] != input_strand[position]) {
                cout << "Substitution at position " << i+1 << ": " << input_strand[position] << " -> " << target_strand[i] << endl;
            }
        } 
    }
}

int main () {
    string strand1, strand2;

    cout << "enter strand1" << endl;
    cin >> strand1;
    cout << "enter strand2" << endl;
    cin >> strand2;

    identifyMutations(strand1, strand2);

    cout << "Exiting program.";

    return 0;

}

/*The function strandSimilarity() compares two strands position by position, counting the number of positions
where the bases are identical. This provides a direct measure of how similar the two sequences are.*/
double strandSimilarity(string strand1, string strand2){
    double simlScore=0.0;
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

int bestStrandMatch(string input_strand, string target_strand) {
    double bestScore = 0.0;
    int startingResult = 0, checkLength = target_strand.length(), overallLength = input_strand.length() - target_strand.length();


    string shortened;

    if (input_strand.length()>= target_strand.length()){
        for (int i = 0; i <= overallLength; i++) {

            shortened = input_strand.substr(i,(checkLength));

            if (strandSimilarity(shortened, target_strand) > bestScore) {
                bestScore = strandSimilarity(shortened, target_strand);
                startingResult = i;
            }
        }
        cout << "Best similarity score: " << bestScore << endl;

        return startingResult;
    } else {
        cout << "Best similarity score: 0.0" << endl;

        return -1;
    }
    return 0;
}