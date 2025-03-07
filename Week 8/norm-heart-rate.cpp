#include<iostream>
#include<string>

using namespace std;
/*Normal Heart Rate
As a pediatrician, you need to monitor newborns’ heart rates, which should fall between 70 and 190 bpm. To simplify this task,
write a function printNormalHeartRates() that takes two arrays: one with patient names and another with their heart rates. The
function will print the names of patients with normal heart rates.
*/
void printNormalHeartRates(string patients[], int heart_rate[], const int NUM_PATIENTS) {
    for (int i = 0; i < NUM_PATIENTS; i++) {
        if (heart_rate[i] >= 70 && heart_rate[i] <= 190) {
            cout << patients[i] << " " << heart_rate[i] << endl;
        }
    }
}

int main() 
{
    
    string patients[3] = {"Jamie", "Sebastien", "Shaun"};
    int heart_rate[3] = {90, 70, -12};
    
    printNormalHeartRates(patients, heart_rate, 3);
        
    return 0;
}

// OUTPUT
// Jamie 90
// Sebastien 70