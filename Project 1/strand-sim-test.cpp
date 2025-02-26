#include<iostream>

using namespace std;

/*The function strandSimilarity() compares two strands position by position, counting the number of positions
where the bases are identical. This provides a direct measure of how similar the two sequences are.*/
double strandSimilarity(string strand1, string strand2){
    double simlScore;
    int length = strand1.length();

    if (strand1.length() != strand2.length()) {
        cout << "Length Incompatible!" << endl;
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
    double bestScore = 0.0;
    int startingResult = 0, checkLength = target_strand.length(), overallLength = input_strand.length() - target_strand.length();


    string shortened;

    if (input_strand.length()>= target_strand.length()){
        for (int i = 0; i < overallLength; i++) {

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

int main () {
    string strand1, strand2;

    cout << "enter strand1" << endl;
    cin >> strand1;
    cout << "enter strand2" << endl;
    cin >> strand2;

    cout << bestStrandMatch(strand1, strand2) << endl;

    /*int bestMatch = bestStrandMatch (strand1, strand2);
    double similar = strandSimilarity (strand1, strand2.substr(bestMatch,strand1.length()));
    cout << "best strand similarity score " << similar << endl;
    cout << "best starting for strand " << bestMatch << endl;*/

    cout << "Exiting program.";

    return 0;

}