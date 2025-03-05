#include <complex>
#include <iostream>
    using namespace std;
    
    // Function to calculate the transpose of a matrix
    void transposeMatrix(int matrix[3][3], int n, int m) 
    { 
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        //return;
    } 
    
    int main() 
    {
        const int rows = 3;
        const int cols = 3;
        int originalMatrix[rows][cols] = 
        {
            {1, 1, 1},
            {2, 2, 2},
            {3, 3, 3}
        };
    
        // Calculate the transpose matrix using the function
        //int result[rows][cols] = 
        transposeMatrix(originalMatrix, rows, cols);
    
        // Display the transpose matrix
        cout << "Transpose Matrix:" << endl;
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                cout << originalMatrix[i][j] << " ";
            }
            cout << endl;
        }
    
        return 0;
    }
