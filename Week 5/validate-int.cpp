//done!
#include <cctype>
#include<iostream>

using namespace std;

bool validateInt (string number) {
    int length = 0;
    int i = 1;
    bool error = false;

    for (length=0; number[length]; length++);

    if (length <= 0) {
        error = true;
    } else if (length > 1) {
        for (i = 1; i < length; i++) {
            if (isdigit(number[i])==false) {
                error = true;
            }
        }
        if (length == i && error != true) {
            error = false;
        }
    } else if (length == 1) {
        if (isdigit(number[0])) {
            error = false;
        } else {
            error = true;
        }
    }

    return (!error);
}

int main()
{
    string number;
    cout << "Enter the integer : " << endl;
    getline(cin, number);
    if(!validateInt(number))
    {
        cout << "The entered string is not a valid integer!!" << endl;
    }
    else
    {
        cout << "The entered string is a valid integer!!" << endl;
    }
    return 0;
}