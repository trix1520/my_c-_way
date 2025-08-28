#include "constants.h"
#include <iostream>

int main(){
    std::cout << "Enter a radius: ";
    double radius{};
    std::cin >> radius; 
    
    std::cout << "The circumference is " << radius * 2 * constants::pi << '\n';

    return 0;
}
