#include<iostream>
#include<ostream>
#include<string>
using namespace std;

void mostPopularWord(string words[], const int WORDS_SIZE){
    int winnerInt = 0, winnerFreq = 0, checkFreq;

    for (int i = 0; i < WORDS_SIZE; i++){
        checkFreq = 0;
        cout << "checking word " << words [i] << "against:" << endl;
        for (int j = 0; j < WORDS_SIZE; j++){
            cout << "'" << words[j] << "' ";
            if (words[i] == words[j]){
                cout << "Bingo!";
                checkFreq++;
            }
            cout << endl;
        }
        if (checkFreq >= winnerFreq) {
            winnerFreq = checkFreq;
            winnerInt = i;
        }
    }
    cout << "The most popular word: " << words[winnerInt] << endl
         << "Frequency: " << winnerFreq << endl
         << "Found at pos: ";
        for (int i = 0; i < WORDS_SIZE; i++) {
            if (words[winnerInt] == words[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
}


int main()
{
    const int WORDS_SIZE = 4;
    string words[WORDS_SIZE] = {"mail", "text", "spam", "spam"};
    mostPopularWord(words, WORDS_SIZE);
    return 0;
}