#include<iostream> //adding header stuff
using namespace std;

int main () {
int day = 4;
switch (day){ //missing {}
    case 6:
       cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default: //missing :
        cout << "Looking forward to the Weekend";
}
}