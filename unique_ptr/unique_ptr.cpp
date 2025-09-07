#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() {std::cout << "My class constructor\n";}
    ~MyClass() {std::cout << "My class destructor\n";}

    void doSomething() {std::cout << "Do something\n";}
};

int main() {
    //Create a unique_ptr that ouwns a MyClass object  
    std::unique_ptr<MyClass> ptr = std::make_unique <MyClass>();

    ptr->doSomething();     //Access the object through the pointer

    //Trasfarring Ownership
    std::unique_ptr<MyClass> ptr2 = std::move(ptr);
    //ptr is now NULL 
        
    if(ptr) {
        ptr->doSomething();     //this would couse a crush!!!
    }

    if(ptr2) {
        ptr2->doSomething();    //Safe, ptr2 owns the object
    }
    
    return 0;
}
