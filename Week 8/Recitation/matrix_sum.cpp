/*Write a function that accepts two 2x3 
integer arrays as input parameters and displays the sum matrix (displayed in 2 rows). Example header:

void matrixSum(int a[2][3], int b[2][3])

Then, create a main() function that asks the user to input the values for each matrix one row at a time. 
Store these in two arrays, and pass them to matrixSum. Example output (red is user input)*/
#include<iostream>

using namespace std;

void matrixSum(int a[2][3], int b[2][3]) {
    //int summedMat[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j]+b[i][j] << " ";
        }
        cout << endl;
    }
}

void matrixIn(int a[2][3], int run){
    cout << "Enter values for matrix " << run << ", one row at a time:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
}

int main () {
    int matrix1[2][3], matrix2[2][3];

    matrixIn(matrix1, 1);
    matrixIn(matrix2,2);

    cout << "The sum is:" << endl;
    matrixSum(matrix1, matrix2);

    return 0;
}