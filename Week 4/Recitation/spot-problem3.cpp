#include <iostream>
using namespace std;

int main()
{
    int angle = 40;
    if (angle < 90 ) //variable is angle, not x
    {
        cout<<"It is an acute angle." ;
    }
    else if(angle == 90 ) //variable is angle, not x, missing a second = to do logical operation
    {
        cout<<"It is a right angle.";
    }
    else //missing e
    {
        cout<<"It is an obtuse angle.";
    }
}

