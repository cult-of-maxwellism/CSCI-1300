#include<iomanip>
#include<iostream>
//#include<ostream>
//#include<sstream>
#include<fstream>
#include<string>

using namespace std;

int split(string input_string, char separator, string arr[], const int ARR_SIZE) {
    stringstream str(input_string);
    string result;
    int i = 0;

    if (input_string == "") {
        return 0;
    } else {
        while (getline(str, result, separator)) {
            if (i >= ARR_SIZE){
                return -1;
            }
            cout << result << endl;
            arr[i] = result;
            i++;
        }
    }
    return i;
}

bool validateDouble(string input) {
    bool isDouble = true;
    int length = input.length(), dotCounter = 0;
    
    if (length == 0) {
        return false;
    } else if (input[0] == '-' || isdigit(input[0])) {
        for (int i=1; i < length; i++) {
            if (input[i] != '.' && !isdigit(input[i])){
                isDouble = false;
            } else if (input[i] == '.') {
                dotCounter++;
            }
        }
        if (dotCounter > 1) { isDouble = false; }
    } else { isDouble = false; }

    return isDouble;
}

int main () {
    ifstream term_grade;
    string currentStudent, studentGrades[4][3];
    char seperate = ',';
    int numStudents = 0;
    double midtAvg1 = 0.0, midtAvg2 = 0.0, midtAvg3 = 0.0;
    term_grade.open("midterms.txt");

    if (term_grade.fail()) {
        cout << "Could not open file." << endl; 
    }

    while (getline (term_grade, currentStudent)) {
        cout << "Student " << numStudents << "... getting grades..." << endl;
        split(currentStudent, seperate, studentGrades[numStudents], 3);
        for (int i = 0; i < 3; i++) {
            if (!validateDouble(studentGrades[numStudents][i])) {
                //bad grade check time!
                cout << "Invalid value detected in Student " << (numStudents+1) << "'s scores!" << endl;
                return 0;
            }
        }
        numStudents++;
    }

    for (int i = 0; i < numStudents; i++) {
        //convert and add, boys, convert and add
        midtAvg1 += stod(studentGrades[i][0]);
        midtAvg2 += stod(studentGrades[i][1]);
        midtAvg3 += stod(studentGrades[i][2]);
    }

    cout << setprecision(4) << "The average scores per midterm are:" << endl
         << "Midterm 1: " << (midtAvg1/numStudents) << endl
         << "Midterm 2: " << (midtAvg2/numStudents) << endl
         << "Midterm 3: " << (midtAvg3/numStudents) << endl;

    return 0;
}
