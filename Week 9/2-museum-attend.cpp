#include<cstdio>
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void stringMaker(string attendanceFile, string fileArray[30]) {
    ifstream attendance(attendanceFile);
    string currentAttend;
    int i = 0;

    while (getline(attendance, currentAttend)) {
        fileArray[i] = currentAttend;

        i++;
        if (i > 30) {
            break;
        }

    }
    attendance.close();
}

void compareAttendanceSheet(string first_attendance_file, string second_attendance_file) {
    string file1[30], file2[30], missingStudent[30];
    int k = 0;
    ifstream firstList(first_attendance_file), secondList(second_attendance_file);
    if (firstList.fail() || secondList.fail()) {
        cout << "Failed to open attendance files" << endl;
        return;
    }

    stringMaker(first_attendance_file, file1);
    stringMaker(second_attendance_file, file2);
    
    for (int i = 0; i < 30; i++) {
        bool flag = false;
        for (int j = 0; j < 30; j++){
            if (file1[i] == file2[j]) {
                flag = true;
            } 
        }

        if (flag == false) {
            missingStudent[k] = file1[i];
            k++;
        }
    }

    if (missingStudent[0] == "") {
        cout << "Every student has boarded the bus. It's time to leave." << endl;
    } else {
        cout << "Students yet to board the bus are" << endl; 
        for (int i = 0; i < 30; i++) {
            if (missingStudent[i] == "") {
                return;
            }
            cout << missingStudent[i] << endl;
        }
    }
    return;
}
/*
Function: 	compareAttendanceSheet( string, string )
Purpose: 	Given two attendance sheets, the function will compare and print out any individuals who are present in the first sheet but missing in the second.
Parameters: 	string first_attendance_file - The first attendance sheet.
string second_attendance_file - The second attendance sheet.
Return Value: 	N/A.
Error Handling: 	- If either file does not exist, print “Failed to open attendance files”.
- If a name exists in the second_attendance_file, it will also be present in the first_attendance_file. In other words, no new names are added to the second_attendance_file that were not in the first.
- Hint: The largest file has 24 names; therefore, declare your array with size 30 to ensure it accommodates all test cases.
*/

int main() {
    string file1, file2;
    cout << "First file to compare:" << endl;
    cin >> file1;

    cout << "Second file to compare:" << endl;
    cin >> file2;

    compareAttendanceSheet(file1, file2);
    return 0;
}