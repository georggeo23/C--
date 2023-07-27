#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "BEER!!!!!!!!!!!!" << std::endl;
    }
    else
    {
        std::cout << "milk" << std::endl;
    }
}