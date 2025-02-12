#include <iostream>
#include <string>
#include <cassert>
using namespace std;

//bool passwordMatchCheck(string, string); //this uses string throughout the rest of the program. Commenting out because I moved functions up for my readability
//bool idLengthCheck(int); //this thing needs to check ID numbers, not passwords. See above for commenting reason

//even though functions are declared already, I'm adding this to the top for my readability.
bool passwordMatchCheck(string password, string confirmPassword)
{
    return password == confirmPassword;
}

bool idLengthCheck(int ID) //need to use int ID, no point checking string password in the ID checker.
{
    if (ID >= 999 && ID < 10000) //using and instead of or
    {
        return true;
    } else {
        return false; //this had to go in else to function
    }
}

int main() {
    int ID;
    string password;
    string confirmPassword;

    cout << "Enter your member ID: ";
    cin >> ID;

    if(!idLengthCheck(ID)) //doesn't need to be an else for below statement, moving up to happen and execute if username is bad
    {
        cout << "ID is invalid." << endl;
    }

    //moving assert down here to happen after ID length check out
    assert(idLengthCheck(ID) == true); //this didn't pass an argument
    
    cout << "Enter your password: ";
    cin >> password;

    cout << "Confirm your password: ";
    cin >> confirmPassword;

    if (passwordMatchCheck(password, confirmPassword)) 
    {
        cout << "Password set successfully for " << ID << "." << endl; //username was not a defined variable, ID was.
    } 
    else if (!passwordMatchCheck(password, confirmPassword)) 
    {
        cout << "Passwords do not match." << endl;
    } 
    
    return 0;
}