#include <iostream>

using namespace std;


int main() {
  string str = "This,is,a,string";
  stringstream sstr(str);
  string word[4];
  int i = 0;
  while (getline(sstr, word[i], 'i')) {
    i++;
  }
  cout << word[2] << endl;
}