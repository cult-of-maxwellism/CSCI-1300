#include<iostream>
#include<cassert>

using namespace std;

double applyDeductions (double income, int numDependents) {
	double taxableAmount = ((income - 14600)-(500*numDependents));

    if (taxableAmount <= 0) {
        taxableAmount = 0;
    }

    return taxableAmount;
}

double calculateTax (double taxableIncome) { 
	double taxrate;
	if (taxableIncome <= 10000) {
		taxrate = .10;
    } else if (taxableIncome > 10000 && taxableIncome <= 50000){
		taxrate = .15;
	} else if (taxableIncome > 50000) {
		taxrate = .2;
	}
	
	return taxrate*taxableIncome;
}

double computeNetIncome (double grossIncome, int numDependents) {
    return (grossIncome-(calculateTax(applyDeductions (grossIncome, numDependents))));
}

int main () {
	double  grossIncome, taxableIncome;
    int numDependents;

    
	cout << "How much did you make last year?" << endl;
    cin >> grossIncome;
	assert(grossIncome >= 0);

    cout << "How many dependents do you have? Enter 0 for none." << endl;
    cin >> numDependents;
	assert(numDependents >= 0);

    taxableIncome = (grossIncome-computeNetIncome(grossIncome, numDependents));

    /*
    tests:
    cout << "gross $" << grossIncome << endl;
    cout << "tax amount $" << taxableIncome << endl;
    cout << "tax amount $ " << calculateTax(taxableIncome) << endl;
    cout << "taxable $" << applyDeductions(grossIncome, numDependents) << endl;
    cout << "dependents " << numDependents << endl;
    */
	
	cout << "You made $" << computeNetIncome (grossIncome, numDependents) << " net this year, and you owe $" << taxableIncome << " in taxes." << endl;

	return 0;
}
