#include <cctype>
#include<iostream>

using namespace std;

char encryptLetter(char letter, int shift);

int main(){
    char letter;
    int shift;

    //ask user for input
    cout << "Enter the lowercase character to encrypt:" << endl;
    cin >> letter;

    cout << "Enter the encryption value:" << endl;
    cin >> shift;

    cout << "Letter " << letter << " was encrypted to " << encryptLetter(letter,shift) << "." << endl;   
}

char encryptLetter(char letter, int shift){
    char eLetter;

    if (letter >= 97 && letter <= 122) {
        return (letter);
    } else {
        while (shift != 0) {
            if (shift < 0) {
                eLetter = letter--;
                shift++;
            } else {
                eLetter = letter++;
                shift--;
            }
        }
        
    }
    cout << shift << endl;
    cout << eLetter << endl;
      eLetter = letter+shift;
    return (eLetter);
}