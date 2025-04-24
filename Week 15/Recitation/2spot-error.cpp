#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(42); //= 42;
    cout << v.at(0) << endl;

    //int max = v.size();

    //for (int i = 0; i < max; i++) {
    //    cout << v[i] << "  ";
    //}

    return 0;
}
