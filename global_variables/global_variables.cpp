#include <iostream>
    
namespace Foo {
    int g_x {};
}

void dosomething(){
    Foo::g_x = 3;
    std::cout << Foo::g_x << '\n'; 
}

int main(){
    dosomething();
    std::cout << Foo::g_x << '\n';

    Foo::g_x = 5;
    std::cout << Foo::g_x << '\n';
        
    return 0;
}
