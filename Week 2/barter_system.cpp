#include <iostream>

using namespace std;

int main (){
    //declare variables
    int potatoes, chicken, avacado, watermelon;

    //get potato number:
    cout << "Enter the number of potatoes:" << endl;
    cin >> potatoes;

    //I need to take that number and subtract potatoes until I run out or can't subtract potatoes anymore.

    //instead of doing that, this lil snippet calculates how many of each I would be able to buy with just potatoes
    watermelon = potatoes/4;
    avacado = watermelon/2;
    chicken = avacado/6;

    //test: cout << "Taters: " << potatoes << " Watermelon: " << watermelon << " Avacado: " << avacado << " Chicken: " << chicken << endl;

    //and then this takes that number and removes the number it costs to buy the next highest amount
    potatoes = potatoes-(watermelon*4);
    watermelon = watermelon-(avacado*2);
    avacado = avacado-(chicken*6);

    //test: cout << "Taters: " << potatoes << " Watermelon: " << watermelon << " Avacado: " << avacado << " Chicken: " << chicken << endl;

    //actual results:
    cout << "Maximum number of chicken(s) " << chicken << ", avocado(s) "
    << avacado << ", watermelon(s) " << watermelon << ", potato(es) " << potatoes << endl;
}