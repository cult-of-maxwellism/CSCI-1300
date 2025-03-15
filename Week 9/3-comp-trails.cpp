#include <iomanip>
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

void printHikeStats(string file_name) {
    string Hikes[15][3], currentHike;
    int loops = 0, pos = 0, totalLines = 0, longest = 0, shortest = 0, steepest = 0;
    ifstream compareFile(file_name);

    if (compareFile.fail()) {
        cout << "Could not open file." << endl;
        return;
    }

    while (getline(compareFile, currentHike)) {
        stringstream str(currentHike);
        if (currentHike != "") {
            pos = 0;
            while (getline(str, currentHike, '|') && pos < 3) {
                Hikes[loops][pos] = currentHike;
                pos++;
            }
            loops++;
        }

        totalLines ++;
        if (loops > 15 || totalLines > 15) {
            break;
        }
    }

    for (int i = 0; i < loops; i++) {
        for (int j = 0; j < loops; j++) {
            double hike1 = stod(Hikes[i][1]), hike2 = stod(Hikes[j][1]), longHike(stod(Hikes[longest][1])), shortHike(stod(Hikes[shortest][1]));
            //find longest of the two
            if (hike1 >= hike2 && hike1 > longHike) {
                longest = i;
            }

            //find shortest of the two
            if (hike1 < hike2 && hike1 < shortHike) {
                shortest = i;
            }

            //find steepest of the two
            if (((stod(Hikes[i][2]))/hike1) >= (stod(Hikes[j][2])/hike2) && (stod(Hikes[i][2])/hike1) > (stod(Hikes[steepest][2])/(stod(Hikes[steepest][1])))){
                steepest = i;
            }
        }
    }

    cout << fixed << setprecision(1) << "Number of lines read: " << loops << "." << endl
         << "Longest hike: " << Hikes[longest][0] << " at " << Hikes[longest][1] << " miles." << endl
         << "Shortest hike: " << Hikes[shortest][0] << " at " << Hikes[shortest][1] << " miles." << endl
         << "Steepest hike: " << Hikes [steepest][0] << " at " << (stod(Hikes[steepest][2])/stod(Hikes[steepest][1])) << " feet gained per mile." << endl;

    return;
}

int main() {
    string file1, file2;
    cout << "File with stuff to compare:" << endl;
    cin >> file2;

    file1 = "homework_7_input_files/q3_compare_trails/";

    file1 += file2;

    printHikeStats(file1);
    return 0;
}