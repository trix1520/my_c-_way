#include <iostream> 

int main() {
    union Data {
        int num;
        char letter;
        float decimal;
    };
    
    Data data;
    
    data.num = 42;
    std::cout << "Data as integer: " << data.num << '\n';

    data.letter = 'A';
    std::cout << "Data as character: " << data.letter << '\n';
    
    data.decimal = 3.14f;
    std::cout << "Data as float: " << data.decimal << '\n';
    
    void* pData = &data; 
    
    std::cout << "Union address(as int*): " << static_cast<void*>(&data.num) << '\n';
    std::cout << "Union address(as char*): " << static_cast<void*>(&data.letter) << '\n';
    std::cout << "Union address(as float*): " << static_cast<void*>(&data.decimal) << '\n';
    std::cout << "Union address(as void*): " << pData << '\n';
    
    data.num = 65;
    std::cout << "Set as integer, read as character: " << data.letter << '\n';
    
    return 0;
}
