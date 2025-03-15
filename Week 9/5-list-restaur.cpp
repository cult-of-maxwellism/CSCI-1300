#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

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

int readRestaurantDetails(string filename, Restaurant restaurant[], const int MAX_RESTAURANTS){
    string currentRestr;
    int loops = 0, totalRun = 0, pos;
    ifstream compareFile(filename);

    if (compareFile.fail()) {
        return -1;
    }

    while (getline(compareFile, currentRestr)) {
        stringstream str(currentRestr);
        if (currentRestr != "") {
            pos = 0;
            while (getline(str, currentRestr, '~') && pos < 4) {
                if (pos == 0) {
                    restaurant[loops].name = currentRestr;
                } else if (pos == 1) {
                    restaurant[loops].food_quality = stod(currentRestr);
                } else if (pos == 2) {
                    restaurant[loops].cleanliness = stod(currentRestr);
                } else if (pos == 3) { 
                    restaurant[loops].wait_time = stod(currentRestr);
                }
                restaurant[loops].overall = getOverallRating(restaurant[loops]);
                pos++;
            }

            if (pos != 4) {
                restaurant[loops].name = "";
                restaurant[loops].food_quality = 0;
                restaurant[loops].cleanliness = 0;
                restaurant[loops].wait_time = 0;
                loops--;
                break;
            }
            loops++;
        }

        totalRun ++;
        if (loops > MAX_RESTAURANTS || totalRun > MAX_RESTAURANTS) {
            break;
        }
    }

    return loops;
}

int getBest(Restaurant restaurants[], int arr_size, string metric ) {
    int bestLoca = 0;
    double bestVal = 0.0, comp1 = 0.0, comp2 = 0.0;

    if (metric == "Food Quality") {
        for (int i = 0; i < arr_size; i++) {
            for (int j = 0; j < arr_size; j++) {
                bestVal = restaurants[bestLoca].food_quality;
                comp1 = restaurants[i].food_quality;
                comp2 = restaurants[j].food_quality;
                if (comp1 >= comp2 && comp1 > bestVal) {
                    bestLoca=i;
                }
            }
        }
    } else if (metric == "Cleanliness") {
        for (int i = 0; i < arr_size; i++) {
            for (int j = 0; j < arr_size; j++) {
                bestVal = restaurants[bestLoca].cleanliness;
                comp1 = restaurants[i].cleanliness;
                comp2 = restaurants[j].cleanliness;
                if (comp1 >= comp2 && comp1 > bestVal) {
                    bestLoca=i;
                }
            }
        }
    } else if (metric == "Wait Time") {
        for (int i = 0; i < arr_size; i++) {
            for (int j = 0; j < arr_size; j++) {
                bestVal = restaurants[bestLoca].wait_time;
                comp1 = restaurants[i].wait_time;
                comp2 = restaurants[j].wait_time;
                if (comp1 >= comp2 && comp1 > bestVal) {
                    bestLoca=i;
                }
            }
        }
    } else if (metric == "Overall") {
        for (int i = 0; i < arr_size; i++) {
            for (int j = 0; j < arr_size; j++) {
                comp1 = restaurants[i].overall;
                if (i >= 1) {
                    bestVal = restaurants[bestLoca].overall;
                }
                comp2 = restaurants[j].overall;
                if (comp1 >= comp2 && comp1 > bestVal) {
                    bestLoca=i;
                }
            }
        }
    } else {
        return -1;
    }


    return bestLoca;
}

int main()
{
    string filepath = "homework_7_input_files/q5_list_of_restaurants/restaurants_", userIn;
    // PART A
    Restaurant restaurants[30];

    cout << "input filename " << endl;
    cin >> userIn;

    filepath+=userIn;



    int res_size = readRestaurantDetails(filepath, restaurants, 30);

    // Checking if the file was opened correctly
    if (res_size == -1)
    {
        cout << "Failed to open file." << endl;
    }
    else
    {
        for (int i = 0; i < res_size; ++i) {
            cout << "Restaurant: " << restaurants[i].name << " ";
            cout << "Ratings: ";
            cout << restaurants[i].food_quality << " ";
            cout << restaurants[i].cleanliness<< " ";
            cout << restaurants[i].wait_time << " ";
            cout << "Overall: ";
            cout << restaurants[i].overall << " ";
            cout << endl;
        }
    }

    // PART B
    // Checking if the file was opened correctly
    if (res_size == -1)
    {
        cout << "Failed to open file." << endl;
    }
    else if (res_size == 0)
    {
        cout << "Empty file." << endl;
    }
    else
    {
        int idx = getBest(restaurants, res_size, "Cleanliness");

        if (idx == -1)
        {
            cout << "Invalid metric." << endl;
        }
        else
        {
            cout << "Restaurant: " << restaurants[idx].name << " ";
            cout << "Ratings: ";
            cout << restaurants[idx].food_quality << " ";
            cout << restaurants[idx].cleanliness << " ";
            cout << restaurants[idx].wait_time << " ";
            cout << "Overall: ";
            cout << restaurants[idx].overall << " ";
            cout << endl;
        }
    }
}