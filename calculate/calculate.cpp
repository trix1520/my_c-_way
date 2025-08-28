#include <iostream>

int calculate(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-': 
        return a - b;
    case '*': 
        return a * b;
    case '/': 
        return a / b;
    case '%': 
        return a % b;
    default: 
        std::cout << "You are entered incorrect operator.\n";
        return 0;
    }
}

int main()
{
    int a{};
    std::cout << "Enter a first integer number: ";
    std::cin >> a;
    
    int b{};
    std::cout << "Enter a second integer number: ";
    std::cin >> b; 

    char c{};
    std::cout << "Enter a operator(+, -, *, /, %)";
    std::cin >> c;

    int resualt{calculate(a, b, c)};
    std::cout << "The value is " << resualt << '\n';
    
    return 0;
}
