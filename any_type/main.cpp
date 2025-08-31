#include <iostream>
#include <any>

int main() {
    std::any anyValue;
    
    anyValue = 42;
    std::cout << "Integer value: " << std::any_cast<int>(anyValue) << '\n'; 
    
    anyValue = std::string("Hello, std::any!");
    std::cout << "String value: " << std::any_cast<std::string>(anyValue) << '\n';
    
    anyValue = 3.14;
    std::cout << "Double value: " << std::any_cast<double>(anyValue) << '\n';

    return 0;
    
}
