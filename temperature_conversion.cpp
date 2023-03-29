/* code to convert a fahrenheit value taken by user to its celcius value */

#include <iostream>
using namespace std;

int main () {                                           /* int main () is used to tell the program that the code starts from here */
    cout << "fahrenheit: ";                             /* giving a statement to display in the console */
    int fahrenheit;                                     /* declaring a variable */
    cin >> fahrenheit;                                  /* taking in a value from the console */
    double celcius = (fahrenheit - 32)/1.8;              /* the formula for celcius; double shows value in both integer or float form  */
    cout << celcius;                                    /* giving out celcius value to console */
    cout << "\n";                                       /* \n is used to make it leave a line for better readibility */
    return 0;                                           /* exit code from the program */
}

