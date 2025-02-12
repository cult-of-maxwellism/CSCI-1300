#include <iostream>
#include <string>
#include <cassert> //need to include this for assert to work

using namespace std;

bool passcodeMatchCheck(string passcode, string confirmPasscode) //changed to bool return, because we're doing bool things here
{
    return passcode == confirmPasscode;
}

int main()
{
   bool passcodeMatch = passcodeMatchCheck("2158","2158");
   //have to set both to strings - initially, one was a int but the function can't manage int

   cout << passcodeMatch; //adding this to see what passcodematch is set to
   assert(passcodeMatch == true);
}