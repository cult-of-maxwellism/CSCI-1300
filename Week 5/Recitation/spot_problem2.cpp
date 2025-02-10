#include <iostream>
#include <string>
using namespace std;

string passcodeMatchCheck(string passcode, string confirmPasscode) 
{
    return passcode == confirmPasscode;
}

int main()
{
   bool passcodeMatch = passcodeMatchCheck(2158,"2158");
   assert(passcodeMatch == true);
}