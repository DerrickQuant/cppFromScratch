#include <iostream>
int main()
{
    int feet, inches, centimetres;
    std::cout << "please enter the length you want convert. Enter in feet and inches" << std::endl;
    std::cout << "feet: " << std::endl;
    std::cin >> feet;
    std::cout << "inches: " << std::endl;
    std::cin >> inches;

    centimetres = 2.54 * ((12 * feet) + inches);
    std::cout << "your length in centimetres is " << centimetres << std::endl;
}