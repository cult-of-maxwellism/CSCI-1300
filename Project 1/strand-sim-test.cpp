#include<iostream>

using namespace std;

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
            
            if (result1 > bestScore) {
                bestScore = result1;
                startingResult = i;
            }
        }
        return startingResult;
    } else {
        cout << "“Best similarity score: 0.0”." << endl;
        return -1;
    }
}

int main () {
    string strand1, strand2;

    cout << "enter strand1" << endl;
    cin >> strand1;
    cout << "enter strand2" << endl;
    cin >> strand2;

    int bestMatch = bestStrandMatch (strand1, strand2);
    double similar = strandSimilarity (strand1, strand2.substr(bestMatch,strand1.length()));
    cout << "best strand similarity score " << similar << endl;
    cout << "best starting for strand " << bestMatch << endl;

    cout << "Exiting program.";

    return 0;

}