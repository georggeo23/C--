#include <iostream>
using namespace std;

// cout << (insertion operator)
// cin >> (extraction operator)

// int main()
// {
//     cout << "Enter the values for x and y: ";
//     double x;
//     double y;
//     cin >> x >> y;
//     cout << "total: " << x + y << endl;
//     return 0;
// }

int main()
{
    cout << "Enter the temperature in Fahrenheit: ";
    double Fahrenheit;
    cin >> Fahrenheit;
    double Celsius = (Fahrenheit - 32) * 5 / 9;
    cout << "The temperature in Celsius is: " << Celsius << endl;
}