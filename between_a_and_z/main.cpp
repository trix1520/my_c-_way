#include <iostream>

int main()
{
    char myChar {'a'};

    // loops myChar and z
    while (myChar <= 'z')
    {
        std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';     
        ++myChar;   // increment myChar 
    }
    
    return 0;
}
