#include <cctype>
#include<iostream>

using namespace std;

char encryptLower(char letter, int shift_value);

int main(){
    char letter;
    int shift_value;

    //ask user for input
    cout << "Enter the lowercase character to encrypt:" << endl;
    cin >> letter;

    cout << "Enter the encryption value:" << endl;
    cin >> shift_value;

    //tell user the result of the problem
    cout << "Letter " << letter << " was encrypted to " << encryptLower(letter,shift_value) << "." << endl;   
}

char encryptLower(char letter, int shift_value){
    while (shift_value != 0) {
        if (letter == 97 && shift_value < 0) {
            letter = 122;
            shift_value ++;
        } else if (letter == 122 && shift_value > 0) {
            letter = 97;
            shift_value --;
        } else if (letter >= 97 && letter <= 122 && shift_value > 0) {
            letter++;
            shift_value--;
        } else if (letter >= 97 && letter <=122 && shift_value < 0) {
            letter--;
            shift_value++;
        } else {
            return (letter);
        }
    }
    return (letter);
}