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
    /*
        //if 
        
        //char userin;
        string strands, strand1, strand2;

        cout << "enter a letter" << endl;
        cin >> userin;
    
        cout << "enter a string" << endl;
        cin >> strands;
        cout << "enter strand1" << endl;
        cin >> strand1;
        cout << "enter strand2" << endl;
        cin >> strand2;
    
        cout << strandSimilarity(strand1, strand2) << endl;
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

    } while (menuChoice != 7);

    cout << "Exiting program.";

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


/*this function returns the best value of scores betweeb */
int bestStrandMatch(string input_strand, string target_strand) {
    double result1 = 0.0, bestScore = 0.0;
    int nerdstuff = input_strand.length() - target_strand.length();
    int startingResult;
    string shortened; //= target_strand.substr(0,input_strand.length());

    if (input_strand.length()>= target_strand.length()){
        for (int i = 0; i < nerdstuff; i++) {
            shortened = input_strand.substr(0,(target_strand.length()+i));

            result1 = strandSimilarity(input_strand, shortened);
            
            if (result1 >= bestScore) {
                bestScore=result1;
                startingResult = i;
            }
            /*if ((i%2) != 0) {
                result1 = strandSimilarity(input_strand, shortened);
            } else {
                result2 = strandSimilarity(input_strand, shortened);
            }
            if (result1 >= result2) {
                bestScore = result1;
            } else if (result2 > result1) {
                bestScore = result2;
            }
            */
        }
        return startingResult;
    } else {
        cout << "“Best similarity score: 0.0”." << endl;
        return -1;
    }
}