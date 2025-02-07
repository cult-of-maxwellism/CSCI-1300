#include<iostream>
using namespace std;

//init.d function
int main(){

    //create variables
    int userSpeed, speed;
    string roadType;

    cout << "Enter the initial speed:" << endl;
    cin >> userSpeed;

    cout << "Enter the road type:" << endl;
    cin >> userSpeed;

    if (userSpeed < 20){
        //speed calculation under 20 mph
        if (roadType == "Highway"){
            speed = userSpeed + (8*25);
        } else if (roadType == "City"){
            speed = userSpeed + (5*25);
        } else if (roadType == "Offroad"){
            speed = userSpeed + (2*25);
        } else {
            cout << "Invalid road type.";
        }
    } else if (userSpeed >= 20 || userSpeed < 60){
        //user speed calcs between 20 and 60
        if (roadType == "Highway"){
            speed = userSpeed + (10*25);
        } else if (roadType == "City"){
            speed = userSpeed + (7*25);
        } else if (roadType == "Offroad"){
            speed = userSpeed + (3*25);
        } else {
            cout << "Invalid road type.";
        }
    } else if (userSpeed >= 60){
        //user speed calculations above 60kph
        if (roadType == "Highway"){
            speed = userSpeed + (5*25);
        } else if (roadType == "City"){
            speed = userSpeed + (3*25);
        } else if (roadType == "Offroad"){
            speed = userSpeed + (1*25);
        } else {
            cout << "Invalid road type.";
        }
    } else {
        cout << "Speed is invalid" << endl;
    }
    
    cout << "The final speed is " << speed << " km/h." << endl;

    return 0;
}
