#include <iostream>

int main()
{
    // type conversion = converting a value of one data type to another
    //                   implicit = Automatic
    //                  explicit = precede value with  new data type(int)

    int x = 3.1;
    std::cout << x << std::endl;         // Implicit conversion
    std::cout << (char)100 << std::endl; // Explicit conversion

    int correct = 8;
    int questions = 10;
    double score = (double)correct / questions * 100;
    std::cout << score << std::endl;

    return 0;
}