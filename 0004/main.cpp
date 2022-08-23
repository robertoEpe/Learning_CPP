#include <iostream>

int main()
{
    // Print Hello, world | \n is a new line
    std::cout << "Please enter a degree value in Celsius :\n";
    // grades in celsius as input
    double celsius;
    std::cin >> celsius;
    double fahrenheit = (9.0 / 5) * celsius + 32;
    std::cout << celsius << " Celsius is " << fahrenheit << " Farenheit\n";
    // Finishing successfully the program
    return EXIT_SUCCESS;
}