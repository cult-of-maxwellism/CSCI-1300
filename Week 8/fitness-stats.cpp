#include<iostream>
#include<iomanip>

using namespace std;

void stepCountCumulativeSum(int daily_steps[], const int NUM_DAYS, int cumulative_steps[]) {
    int total = 0;

    for (int i = 0; i < NUM_DAYS; i++){
        total += daily_steps[i];
        cumulative_steps[i] = total;
    }
}

double stepCountDeviation(int daily_steps[], const int NUM_DAYS, const int OPTIMAL_STEP_COUNT) {
    double deviation = 0.0, mean = 0.0,  total = 0.0;

    for (int i = 0; i < NUM_DAYS; i++){
        total += daily_steps[i];
    }
    mean = total/NUM_DAYS;
    deviation = mean-OPTIMAL_STEP_COUNT;

    return deviation;
}

int main() {
    const int NUM_DAYS = 5;
    int daily_steps[NUM_DAYS] = {5000, 4000, 5000, 2000, 4000};
    int cumulative_steps[NUM_DAYS];
    const int OPTIMAL_STEP_COUNT = 5000;
    double deviation = stepCountDeviation(daily_steps, NUM_DAYS, OPTIMAL_STEP_COUNT);
    stepCountCumulativeSum(daily_steps, NUM_DAYS, cumulative_steps);
    // We are printing the contents of the cumulative_steps array here.
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << cumulative_steps[i] << endl;
    }
    cout << fixed << setprecision(3) << deviation << endl;
    
    return 0;
}