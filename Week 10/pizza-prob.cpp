#include<iostream>
#include<iomanip>

using namespace std;

struct Pizza {
    string type, size;
    double price;
};

struct Order {
    Pizza zaArray[10];
    int numPizzas = 0;
};

void displayPizza(Pizza theZa) {
    cout << theZa.size << " " << theZa.type << setprecision(2) << fixed << ": $" << theZa.price << endl;
}

Order addPizza (Order theOrder, Pizza theZa) {
    if (theOrder.numPizzas < 10) {
        theOrder.zaArray[theOrder.numPizzas] = theZa;
        theOrder.numPizzas ++;
    } else {
        cout << "ERROR: too many pizzas added..." << endl;
        return theOrder;
    }
    return theOrder;
}

double calculateTotal (Order theOrder) {
    double total = 0;
    for (int i = 0; i < theOrder.numPizzas; i++) {
        total += theOrder.zaArray[i].price;
    }
    return total;
}

void displayOrder (Order theOrder) {
    for (int i = 0; i < theOrder.numPizzas; i++) {
        displayPizza (theOrder.zaArray[i]);
    }
    cout << "Your total is $" << setprecision(2) << fixed << calculateTotal(theOrder);
}

int main () {
    Pizza za1 {"Pepperoni", "Large", 9.50};
    Pizza za2 {"Cheese", "Large", 9.00};
    Pizza za3 {"Pepperoni", "Medium", 7.50};
    Pizza za4 {"Hawaiian", "Large", 10.00};
    Pizza za5 {"Custom", "Small", 7.00};
    Pizza za6 {"Custom", "Small", 7.00};
    Pizza za7 {"Cheese", "Small", 5.50};
    Pizza za8 {"Pepperoni", "Small", 6.50};
    Pizza za9 {"Cheese", "Large", 9.00};
    Pizza za10 {"Meat Lovers", "Medium", 8.50};

    Order finalOrder;

    finalOrder = addPizza(finalOrder, za1);
    finalOrder = addPizza(finalOrder, za2);
    finalOrder = addPizza(finalOrder, za3);
    finalOrder = addPizza(finalOrder, za4);
    finalOrder = addPizza(finalOrder, za5);
    finalOrder = addPizza(finalOrder, za6);
    finalOrder = addPizza(finalOrder, za7);
    finalOrder = addPizza(finalOrder, za8);
    finalOrder = addPizza(finalOrder, za9);
    finalOrder = addPizza(finalOrder, za10);

    displayOrder(finalOrder);

    return 0;
}