#include <iostream>
#include <string>


int main(){
    // Input variable
    std::string country {};

    // Query the user
    std::cout << "Where do you live? ";
    std::cin >> country;

    // Print results
    std::cout << "I've heard great things about "<< country << ". I'd like to go sometime.\n";

}