#include <iostream>
using namespace std;

int main()
{
    int sales = 95000;
    cout << "Sales: $" << sales << endl;

    double stateTaxRate = 0.04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    double localTaxRate = 0.05;
    double localTax = sales * localTaxRate;
    cout << "Local Tax: $" << localTax << endl;

    double totalTax = stateTax + localTax;
    cout << "Total Tax: $" << totalTax << endl;
    return 0;
}