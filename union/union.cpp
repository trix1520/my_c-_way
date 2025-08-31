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
    
    void* pNum; 
    
    pNum = static_cast<int*>(&data.num);
    std::cout << "Data interpreted as integer: " << &pNum << '\n';
    
    pNum = static_cast<float*>(&data.decimal);
    std::cout << "Data interpreted as float: " << &pNum << '\n';
    
    pNum = static_cast<char*>(&data.letter);
    std::cout << "Data interpreted as character: " << &pNum << '\n';

    return 0;
}
