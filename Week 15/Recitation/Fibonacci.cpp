#include<iostream>
#include<vector>

using namespace std;

int fib (int series_num) {
    vector<int> fibo_seq { 0,1};
    int current_num;

    for (int i = 1; i < series_num-1; i++) {
        current_num = fibo_seq[i] + fibo_seq[i-1];
        fibo_seq.push_back(current_num);
    }

    return fibo_seq.back();
}

int main () {
    int userIn = 0;
    int fib_num = 0;
    cout << "Please enter the nth number of the Fibonacci sequence you'd like to know." << endl;
    cin >> userIn;

    fib_num = fib(userIn);

    cout << "The fibonacci sequence number you're looking for is: " << fib_num << endl;

    return 0;
}