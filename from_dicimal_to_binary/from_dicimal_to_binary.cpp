#include <iostream>
#include <bitset>
    
void printBit(int x, int pow){
    std::cout << ((x / pow) % 2);
}

void print8BitBinary(int x){
    printBit(x, 128);
    printBit(x, 64);
    printBit(x, 32);
    printBit(x, 16);   
    printBit(x, 8);
    printBit(x, 4);
    printBit(x, 2);
    printBit(x, 1); 
}

int main(){
    int x;
    std::cout << "Enter a number from 0 to 255: ";
    std::cin >> x; 
    
    print8BitBinary(x);
    std::cout << "\n";
    
    return 0;
}
