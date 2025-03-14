#include<iostream>

using namespace std;

void compareAttendanceSheet(string first_attendance_file, string second_attendance_file) {
    
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

Example:

// This is only an example usage, and you should develop your own main function
// Assume the proper libraries are included.
// Assume the proper implementation of compareAttendanceSheet() is included.
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