#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 8;
    
    std::cout << "Addres ptr is " << ptr << '\n';
    std::cout << "ptr is " << *ptr << '\n';
        
    int a = *ptr;
    std::cout << "a (with value ptr) = " << a << '\n';
        
    delete ptr;
    ptr = nullptr;

    return 0;
}
