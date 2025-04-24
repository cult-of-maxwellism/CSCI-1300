#include <vector>
#include <iostream>
using namespace std;

//The following program attempts to erase the first number (0th index) from a vector.
// Identify the error(s) in the code and provide the corrected line(s).

int main() {
    vector<int> v = {5, 6, 7, 8, 9};
    v.erase(v.begin());
    
    cout << v[0] << endl;
    for (int i = 0; i < 4; i++) {
        cout << v[i] << "  ";
    }
    return 0;
}
