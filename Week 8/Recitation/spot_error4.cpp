#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int N = 6;
    string animals[N] = {"lion", "cat", "bear", "dog", "elephant", "fox"};
    for (int i = 0; i < N; i++) 
    {
        if (animals[i].length() == 4)
        {
            cout << animals[i] << endl;
        }
    }
    return 0;
}
