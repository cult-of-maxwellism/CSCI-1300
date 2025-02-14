/*Design a function validateInt that accepts a string input and determines if it represents a valid integer by checking if
each character in the string is a valid value. Your program should ask the user to input an integer, store it as a string,
and then invoke the validateInt function to check its validity. The program should then print whether the string is a valid integer
or not. (Negative integers are also valid integers).

Function: 	validateInt(string)
bool validateInt(string input)
Purpose: 	Iterate through a string and verify if it is a valid integer or not. The function should not print anything.
Parameters: 	string input - The string to be verified
Return value: 	It returns true if the string is a valid integer. Otherwise, it returns false.
Error handling && Boundary conditions: 	If length of input = 0, false is returned
Example:

        
// Assume the proper libraries are included.

// Assume the proper implementation of validateInt() is included.

int main()
{
    string number;
    cout << "Enter the integer : " << endl;
    getline(cin, number);
    if(!validateInt(number))
    {
        cout << "The entered string is not a valid integer!!" << endl;
    }
    else
    {
        cout << "The entered string is a valid integer!!" << endl;
    }
    return 0;
}

example of running the above code

Enter the integer :

1234

The entered string is a valid integer!!

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste just the validateInt() function into the answer box!

Enter the integer :

-12

The entered string is a valid integer!!
*/