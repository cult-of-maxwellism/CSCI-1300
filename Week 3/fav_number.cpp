#include <iostream>

using namespace std;

int main (){
    int usersFavoriteNum;
    cout << "What is your favorite number?" << endl;
    cin >> usersFavoriteNum;

    if (usersFavoriteNum == 6) {
        cout << "That's my favorite number!";
    } else if (4 < usersFavoriteNum && usersFavoriteNum < 8){
        cout << "That's really close to my favorite number!";
    } else {
        cout << "I don't think I've ever met someone who's favorite number is " << usersFavoriteNum << endl;
    }

    return 0;
}