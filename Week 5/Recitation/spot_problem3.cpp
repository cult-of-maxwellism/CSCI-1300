#include <iostream>
#include <cassert>
using namespace std;

bool idLengthCheck(int ID) 
{
    if (ID >= 999 || ID < 10000)
    {
        return true;
    }
    return false;
}

int main()
{
    assert(idLengthCheck(12345678));

    assert(idLengthCheck(123456789) == false); //capital "F" False is a variable, not a boolean operator. Also, function needs input as int and not string.
    //also, do we really need both of these asserts?
    return 0;
}