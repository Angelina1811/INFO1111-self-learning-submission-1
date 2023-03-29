
/* code to check if two numbers taken from the user are equal or if one is bigger/smaller than the other */


#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "enter two numbers = " << endl;
    cin >> a >> b;
    
    if (a==b) {
        cout << "the numbers are equal" << endl;
    } else { if (a<b) {
        cout << "a is smaller than b" << endl;
    } else {
        cout << "a is greater than b" << endl;
    }
        return 0;
    }
}
