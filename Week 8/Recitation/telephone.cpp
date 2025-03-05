#include <iostream>

using namespace std;

void suggestActivity(const string forecast[], int day) {

    if (forecast[day] == "sunny") {
        cout << "We can go skiing tomorrow because it's sunny" << endl;
    } else if (forecast[day] != "sunny" && day <= 3) {
        cout << "we can't go skiing tomorrow because no sun" << endl;
    } else if (forecast[day] == "") {
        cout << "we can't go skiing because there's no day" << endl;
    } else {
        cout << "Input invalid!" << endl;
    }
}

int main() {
  // We'll store the forecast in a string array of size 3.
  string forecast[NUM_DAYS];

  cout << "Please enter the weather for the next 3 days (sunny, rainy, or "
          "snowy).\n\n";

  // Read in user input for each day
  for (int i = 0; i < NUM_DAYS; i++) {
    cout << "Day " << i << ": ";
    cin >> forecast[i];
  }

  cout << "\nSPRING FORECAST ACTIVITY SUGGESTIONS:\n\n";

  // For each day, suggest an activity
  for (int i = 0; i < NUM_DAYS; i++) {
    suggestActivity(forecast, i);
  }

  return 0;
}