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
    assert(idLengthCheck("123456789") == False);
    return 0;
}