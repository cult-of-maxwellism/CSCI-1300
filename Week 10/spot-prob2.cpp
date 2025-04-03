#include <iostream>
using namespace std;

class Account {
public:
    Account(double bal) {
        balance = bal;
    }

    double getBalance() const {
        return balance;
    }

private:
    double balance;
};

int main() {
    Account myAcc(1000.0);
    cout << "Current balance: " << myAcc.getBalance() << endl;
    return 0;
}
