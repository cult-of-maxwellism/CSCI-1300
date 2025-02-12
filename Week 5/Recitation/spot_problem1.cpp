#include<iostream>
#include<cassert> // original version of this program doesn't include the cassert library, which breaks functionality

using namespace std;

double findMean(int a, int b, int c)
{
    double mean = (a+b+c)/3.0; //missing semicolon, why is this a integer make it a double
    return mean;
}

int main()
{
    double average = findMean(2,5,2); //using function avg instead of findMean - avg is undefined
    
    cout << average << endl; //tell me what the average is real quick
    
    assert(average == 3); //this is just gonna kill the program if it doesn't return 3
    return 0;
}