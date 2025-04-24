#include <vector>
#include <iostream>
using namespace std;

//The following program attempts to double every element in the vector and add it at the end of the vector.
//Identify the error(s) in the code and provide the corrected line(s). My comments in purple.

int main() {
    vector<int> v = {5, 6, 7, 8, 9};

    int vectSize = v.size();
    
    for(int i = 0; i < vectSize; i++){
        v.push_back(v[i] * 2);
    }
    
    vectSize = v.size();

    for(int i=0; i<vectSize; i++){
        cout<< v[i]<< endl;
    }
}
