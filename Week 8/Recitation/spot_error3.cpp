#include <iostream>
#include <string>
using namespace std;

int main() {
  int N = 3;
  string item[] = {"book", "pen", "pencil", "eraser"};

  // printing all the items
  for (int i = 0; i <= N; i++) {
    cout << "The item list has " << item[i] << endl;
  }
  return 0;
}
