#include <iostream> 

int main() {
    int x = 11;
    float y = 3.14f;
    std::string z = "Hello, pointer!";
        
    void* voidPtr;
    
    voidPtr = &x;
    std::cout << "Integer value: " << *(static_cast<int*>(voidPtr)) << '\n';
    
    voidPtr = &y;
    std::cout << "Float value: " << *(static_cast<float*>(voidPtr)) << '\n';
    
    voidPtr = &z;
    std::cout << "String value: " << *static_cast<std::string*>(voidPtr) << '\n';
    
    return 0;
}
