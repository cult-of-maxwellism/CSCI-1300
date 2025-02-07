// This program implements XOR
#include <iostream> //missing <> for what to include
using namespace std;

//Set the variable value to 1 when x or y is 1
int main()
{
    int x=1,y=0,value;

    if (x==1){ //bad formatting, fixing for readability
        if(y==0) { //missing {
            value = 1;
        } else { //missing }
            y = 0; //extra = means logical operation, changing to one = adjusts variable value
        } // missing } to close if/else statement
    } //missing } to close the if statement properly

    if(x==0){
        if(y==0) { // missing {
            value = 0;
        } else { // missing both } and {
            value = 1;
        } // missing } to close if/else statement
    } //I think I added this to close the above if statement


    cout << value << endl; //single < is a logical operator, << is the associative character to do cout operations.
    //The above line is missing one < after cout and one after value
    
    return 0;

} //using or adding a } to close int main().