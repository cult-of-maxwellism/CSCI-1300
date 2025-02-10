#include <iostream>

using namespace std;

double findMean(int a, int b, int c)
{
    int mean = a+b+c / 3; //missing semicolon
    return mean;
}

int main()
{
    double average = findMean(2,5,2); //using function avg instead of findMean - avg is undefined
    assert(average == 3);
    return 0;
}