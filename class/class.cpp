#include <iostream>
#include <string>

int main() {
    class Person {
        public:
            std::string name;
            int age;
            
            void printInfo() {
                std::cout << "Name: " << name << ", Age: " << age << '\n';
            }
    };
    
    Person person {"Panteleimon", 16};
    person.printInfo();
    
    return 0;
}
