#include <iostream>

int main()
{
    // Switch statements  = an alternative to many else-if statements
    int month;
    std::cout << "Enter the month(1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "The month is January";
        break;
    case 2:
        std::cout << "The month is February";
        break;
    case 3:
        std::cout << "The month is March";
        break;
    case 4:
        std::cout << "The month is April";
        break;
    case 5:
        std::cout << "The month is May";
        break;
    case 6:
        std::cout << "The month is June";
        break;
    case 7:
        std::cout << "The month is July";
        break;
    case 8:
        std::cout << "The month is August";
        break;
    case 9:
        std::cout << "The month is September";
        break;
    case 10:
        std::cout << "The month is October";
        break;
    case 11:
        std::cout << "The month is November";
        break;
    case 12:
        std::cout << "The month is December";
        break;
    default: // If there is no matching case
        std::cout << "PLEASE ENTER A VALID MONTH NUMBER";
    }
    return 0;
}