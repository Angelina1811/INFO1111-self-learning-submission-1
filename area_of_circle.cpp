
/* code to calculate the area of a circle from its radius, where radius is taken by the user */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int radius;
    double const pi = 3.14;
    cout << "radius = ";
    
    cin >> radius;
    double area = pi * radius * radius;
    
    cout << "Area of the circle = " << area;
    cout << "\n";
    return 0;
}
