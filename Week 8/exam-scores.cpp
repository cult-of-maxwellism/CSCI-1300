#include<iostream>
using namespace std;
/*
You’re helping your teacher analyze student exam scores across 10 subjects. Each row represents a student’s scores in these
subjects. Your task is to identify the first student whose average score falls below a defined threshold. Write a function minAverg
that returns the index of the first student with an average score below the threshold.
*/
int minAverg(int scores[][10], const int NUM_STUDENTS, double threshold ) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        double average = 0;
        for (int j = 0; j < 10; j++){
            average += scores[i][j];   
        }
        if ((average/10) <= threshold) {
            return i;
        }
    }
    return -1;
}
 
//cout << "total score is " << average << endl;
//cout << "student " << i << " grade is at " << (average/10) << endl;
/*
Function: 	minAverg( int, int, double )
Purpose: 	A function to return the index of a student whose average score is less than or equal to the threshold.
Parameters: 	int scores[][10]: A 2D integer array with 10 columns for storing the scores for each of the 10 subjects
const int NUM_STUDENTS: An integer number of rows for each student
double threshold: A floating number threshold for low average score.
Return value: 	The function returns an int representing the index of the first student with a low average score that is less than or equal to the threshold.
Error handling/Boundary conditions: 	- The function returns -1 if there is no average score that is less than or equal to the threshold
- You may assume that the score[][] array is non-empty
*/

int main()
{
    int scores[4][10] = {
        {50, 60, 55, 65, 70, 60, 58, 62, 55, 65}, 
        {70, 80, 75, 85, 90, 65, 78, 82, 88, 74},
        {10, 20, 15, 25, 12, 30, 18, 22, 17, 15},  
        {100, 110, 105, 115, 120, 90, 108, 102, 114, 104},
    };
    cout << "returned student index: " <<  minAverg(scores, 5, 40);
}

// OUTPUT:
// returned student index: 1