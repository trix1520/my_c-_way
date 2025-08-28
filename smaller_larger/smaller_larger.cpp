#include <iostream>

int main(){
    int smaller, larger;
    std::cout << "Enter a number: ";
    std::cin >> smaller;
    std::cout << "Enter a larger values: ";
    std::cin >> larger;

    if (smaller > larger){
        std::cout << "Swapping the values\n"; 

        int a {smaller}; 
        smaller = larger;
        larger = a; 
    }

    std::cout << "The smaller value: " << smaller << "\n";
    std::cout << "The larger value: " << larger << "\n";
    
    return 0;
}
