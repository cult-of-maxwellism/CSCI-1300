#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {2, 4, 6, 8, 9};

    int vectSize = v.size();

    for (int i = 0; i < vectSize; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < vectSize; i++) {
        if (v[i] % 2 == 0) {
            cout << "v[i] is: " << v[i] << " at i: " << i << endl;
            v.erase(v.begin() + i);
            i = -1;
            //vectSize = v.size();
        }
    }

    vectSize = v.size();

    // Print remaining elements
    for (int i = 0; i < vectSize; i++) {
        cout<< v[i] <<" ";
    }
    cout << endl;
    return 0;
}