#include <iomanip>
#include<iostream>
using namespace std;

int main (){
    char PizzaSize;
    int Toppings;
    double price;

    //get pizza size, make uppercase
    cout << "What size pizza would you like to order?" << endl;
    cin >> PizzaSize;
    cin.ignore();

    //get number of toppings
    cout << "How many toppings do you want?" << endl;
    cin >> Toppings;

    PizzaSize = toupper(PizzaSize);
    //check size of pizza
    if (PizzaSize == 'S' || PizzaSize == 'M' || PizzaSize == 'L') {
        //if the pizza sizing is good, check the topping amount
        if (Toppings >= 0){
            //if toppings are good do the calculations
            if (PizzaSize == 'S') {
                price = 8.00+(Toppings*0.99);
            } else if (PizzaSize == 'M') {
                price = 10.00+(Toppings*1.99);
            } else if (PizzaSize == 'L') {
                price = 14.00+(Toppings*2.99);
            }
            //tell me how much I owe!
            cout << "Your total is $" << setprecision (2) << fixed << price << endl;
        } else {
            //if the topping number isn't good but sizes are, let me know!
            cout << "Invalid number of toppings." << endl;
        }
    } else if (Toppings >= 0) {
        //if pizza size is bad but the toppings are good, tell me
        cout << "Invalid pizza size" << endl;
    } else if (Toppings < 0) {
        //if topping size and size is bad, let me know
        cout << "Invalid pizza size and number of toppings." << endl;
    } else {
        //if you get this error, how
        cout << "ONCE I UNDERSTOOD THE WEAKNESS OF MY FLESH IT DISGUSTED ME. I CRAVED THE STRENGTH AND CERTIANTY OF STEEL." << endl;
    }
    return 0;
}