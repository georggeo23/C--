#include <iostream>

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with "using" (works better w/templates)
    text_t name;
    number_t age;

    std::cin >> name >> age;
    std::cout << "Name: " << name << std::endl
              << "\n"
              << "Age: " << age << std::endl;
    return 0;
}