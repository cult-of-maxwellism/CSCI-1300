#include<iostream>
//#include<iomanip>

using namespace std;

bool isValidBase(char base);
bool isValidStrand(string strand);
int bestStrandMatch(string input_strand, string target_strand);
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
    int menuChoice;
    string strand1, strand2;

    do {
    cout << "--- DNA Analysis Menu ---" << endl << "1. Calculate the similarity between two sequences of the same length" << endl
    << "2. Calculate the best similarity between two sequences of either equal or unequal length" << endl << "3. Identify mutations" << endl <<
    "4. Transcribe DNA to RNA" << endl << "5. Find the reverse complement of a DNA sequence" << endl << "6. Extract reading frames" << endl << "7. Exit"
    << endl << "Please enter your choice (1 - 7): " << endl;
    cin >> menuChoice;

    switch(menuChoice) {
        case 1:
            cout << "Enter the first DNA sequence:" << endl;
            cin >> strand1;
            while (!isValidStrand(strand1)){
                cout << "Invalid input. Please enter a valid sequence." << endl;
                cout << "Enter the first DNA sequence:" << endl;
                cin >> strand1;
            }

            cout << "Enter the seccond DNA sequence:" << endl;
            cin >> strand2;
            while (!isValidStrand(strand2)){
                cout << "Invalid input. Please enter a valid sequence." << endl;
                cout << "Enter the seccond DNA sequence:" << endl;
                cin >> strand2;
            }
            
            if ((strandSimilarity(strand1, strand2)) == 0) {
                cout <<" Error: Input strands must be of the same length." << endl;
            } else {
                cout << "Similarity score: " << strandSimilarity(strand1, strand2) << endl;
            }

        break;

        case 2:
        cout << "Enter the first DNA sequence:" << endl;
            cin >> strand1;
            while (!isValidStrand(strand1)){
                cout << "Invalid input. Please enter a valid sequence." << endl;
                cout << "Enter the first DNA sequence:" << endl;
                cin >> strand1;
            }

            cout << "Enter the seccond DNA sequence:" << endl;
            cin >> strand2;
            while (!isValidStrand(strand2)){
                cout << "Invalid input. Please enter a valid sequence." << endl;
                cout << "Enter the seccond DNA sequence:" << endl;
                cin >> strand2;
            }
            
            cout << "Best similarity score: " <<
            strandSimilarity(strand1, strand2.substr(bestStrandMatch(strand1, strand2),strand1.length()))
            << endl;
            cout << "Best alignment index: " << bestStrandMatch(strand1,strand2) << endl;

        break;
        
        default:
        cout << "Invalid input. Please select a valid option." << endl;
    }
    } while (menuChoice != 7);

    cout << "Exiting program.";

    return 0;

}
/*this function ensures every letter is valid*/
bool isValidBase(char base) {
    if (base == 'A' || base == 'C' || base == 'G' || base == 'T') {
        return true;
    } else {
        return false;
    }
}
/*this function checks to ensure a strand is valid*/
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
/*The function ompares two strands position by position, counting the number of positions where the bases are identical.*/
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
/*this function returns the location of the best value of scores between two strands*/
int bestStrandMatch(string input_strand, string target_strand) {
    double bestScore = 0.0;
    //everything after startingResult (which is misnamed, it's the result you start at) exists because I was getting errors just 
    //using the .length() operators in the if statements.
    int startingResult = 0, checkLength = target_strand.length(), overallLength = input_strand.length() - target_strand.length();


    string shortened;
    //The theory here (took a while to work out): AS LONG AS the input strand is larger than or equal to the target strand...
    if (input_strand.length() >= target_strand.length()){
        //create a value "i" - which starts at 0, and is the "start digit" for each run
        for (int i = 0; i <= overallLength; i++) {
            //tell me what the shortened input strand is, based off of i and the length of the target strand
            shortened = input_strand.substr(i,(checkLength));

            if (strandSimilarity(shortened, target_strand) > bestScore) {
                bestScore = strandSimilarity(shortened, target_strand);
                startingResult = i;
            }
        }
        cout << "Best similarity score: " << bestScore << endl;

        return startingResult;
    } else {
        cout << "Best similarity score: " << bestScore << endl;

        return -1;
    }
    return 0;
}
/*this function couts mutations in a given piece of DNA*/
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
/*this function basically just replaces T with U for RNA*/
void transcribeDNAtoRNA(string strand) {
    int length = strand.length();
    for (int i = 0; i <= length; i++){
        if (strand[i]=='T') {
            strand[i]='U';
        }
    }
    cout << strand << endl;
}
/*this function reverses and compliments a DNA strand*/
void reverseComplement(string strand) {
    int length = strand.length();

    string placeholder;

    //not that pretty but it's readable & gets the job done.
    for (int i = length; i >= 0; i--) {
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