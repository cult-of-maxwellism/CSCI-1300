//7d.
#include <iostream>
using namespace std;

int main (){
    int waterDrank, waterLeft;
    cout << "How many glasses of water have you drank?" << endl;
    cin >> waterDrank;

    waterLeft = 7-waterDrank;

    if (waterDrank <= 3 && waterDrank >= 0) {
        cout << "You are falling behind! Drink more water! You have " << waterLeft << " glasses left to drink." << endl;
    } else if (waterDrank > 3 && waterDrank < 7) {
        cout << "You're doing well! Keep it up! You still have " << waterLeft << " glasses left to drink." << endl;
    } else if (waterDrank == 7) {
        cout << "Congratulations! You've hit your water goal for the day! Stay hydrated!" << endl;
    } else if (waterDrank > 7) {
        cout << "You may be overhydrated, consult a (medical) doctor." << endl;
    } else {
        cout << "This answer isn't in scope." << endl;
    }

}

/*Problem 7.a.: algorithm

Write an algorithm in pseudocode for the program above.
    DECLARE WaterDrank and WaterLeft
    OUT: "How many glasses of water have you drank?"
    IN: WaterDrank
    SET WaterLeft = 7-WaterDrank

    IF WaterDrank LESS THAN 3
        OUT: You are falling behind! Drink more water! You have WaterLeft glasses left to drink.
    ELSE IF WaterDrank between 3 and 7
        OUT: You're doing well! Keep it up! You still have WaterLeft glasses left to drink.
    ELSE IF WaterDrank is 7
        OUT: Congratulations! You've hit your water goal for the day! Stay hydrated!
    ELSE 
        //manage exceptions, like negative numbers or over 7
*/

/*Problem 7.b.: examples

Imagine how a sample run of your program would look like. Write at least two examples.

./a.out
How many glasses of water have you drank?
> 4
You're doing well! Keep it up! You still have 3 glasses left to drink

./a.out
How many glasses of water have you drank?
> 7
Congratulations! You've hit your water goal for the day! Stay hydrated!
*/

/*
Problem 7.c.: boundary conditions

Identify the values that you must test for. We call these values “boundary conditions”.
We must test for values between 0 and 4, 4 and 7, and 7
*/