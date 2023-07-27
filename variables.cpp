#include <iostream>

int main()
{
    // Interger (whole number)
    int file_size = 100;
    int age = 1;
    int year = 3;

    // Float (decimal number)
    float x = 4.32f;

    // Double (stores floating point numbers, with decimals)
    double y = 1.0;

    // Boolean (true or false)
    bool c = true;

    // Char (single character)
    char d = 'A';

    // string (stores text, such as "Hello World")
    std::string s = "Hello World";

    long z = 100000000000000L;
    int temp = age;
    age = year;
    year = age;
    std::cout << file_size << std::endl;
    std::cout << age << std::endl;
    return 0;
}