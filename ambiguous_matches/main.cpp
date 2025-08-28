#include <iostream>

void foo(unsigned int)
{
}

void foo(char)
{
}

int main() 
{
    foo(5u);

    return 0;
}
