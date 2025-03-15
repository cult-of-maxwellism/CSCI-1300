#include<iostream>

using namespace std;


struct Restaurant {
    string name;
    int food_quality;
    int cleanliness;
    int wait_time;
    double overall;
};

double getOverallRating(Restaurant restaurant) {
    double result = 0.0;
    if (restaurant.food_quality < 0 || restaurant.food_quality > 10) {
        return -1;
    } else {
        result = 0.5 * restaurant.food_quality;
    }
    if (restaurant.cleanliness < 0 || restaurant.cleanliness > 10) {
        return -1;
    } else {
        result += 0.3 * restaurant.cleanliness;
    }
    if (restaurant.wait_time < 0 || restaurant.wait_time > 5) {
        return -1;
    } else {
        result += 0.2 * restaurant.wait_time;
    }
    return result;
}

int main() {
    string userIn;
    int userInt;
    Restaurant r;
    cout << "Enter resturant name:" << endl;
    cin >> userIn; 
    r.name = userIn;

    cout << "food quality (0-10): " << endl;
    cin >> userInt;
    r.food_quality = userInt;

    cout << "cleanliness (0-10): " << endl;
    cin >> userInt;
    r.cleanliness = userInt;

    cout << "wait time (0-5): " << endl;
    cin >> userInt;
    r.wait_time = userInt;

    r.overall = getOverallRating(r);

    if(r.overall == -1)
    {
        cout << "Invalid rating(s) entered." << endl;
    }
    else
    {
        cout << "Restaurant: " << r.name << " Overall: " << r.overall << endl;
    }
    return 0;
}