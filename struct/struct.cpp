#include <iostream>

int main() {
    struct Person {
        std::string name;
        int age;
        float height; 
    };   
    
    Person person1 = {"Panteleimon", 16, 1.74f};
    Person person2 = {"Daniel", 18, 1.80f};
    
    std::cout << "Person 1: " << person1.name << ", Age: " << person1.age << ", Height: " << person1.height << "m" << '\n';
    std::cout << "Person 2: " << person2.name << ", Age: " << person2.age << ", Height: " << person2.height << "m" << '\n';
    
    return 0;
}
