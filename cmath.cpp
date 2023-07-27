#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter the radius" << endl;
    double radius;
    cin >> radius;
    const double PI = 3.14159265358979; // PI constant//
    cout << "The area of the circle is " << PI * pow(radius, 2) << endl;
    return 0;
}