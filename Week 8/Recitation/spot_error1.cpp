#include <iostream>
#include <string>

using namespace std;

int main() {
  const int size = 6;
  double scores[size+1] = {85.4, 90.3, 100, 89, 74.5, 95.0, 82.3};
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += scores[i];
  }
  int avg = sum / 6.0;
  cout << "Average = " << avg << endl;
  return 0;
}