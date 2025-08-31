#include <iostream>
    
auto add = [] (auto a, auto b) { return a + b;};

int main() {
     

    std::cout << "Enter two numbers to add: ";
    std::cin >> a >> b;
    std::cout << add(a, b) << '\n';

    return 0;
}
