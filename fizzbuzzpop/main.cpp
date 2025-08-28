#include <iostream> 
    
void fizzbuzz(int value)
{
    for (int i{ 1 }; i <= value; ++i)
    {
        bool flag{}; 
        if ( i % 3 == 0 )
        {
            std::cout << "fizz";
            flag = true;
        }
        if ( i % 5 == 0 )   
        {
            std::cout << "buzz";
            flag = true;
        }
        if ( i % 7 == 0 )
        {
            std::cout << "pop";
            flag = true;
        }
        if(!flag) 
        { 
            std::cout << i;
        }
        std::cout << '\n';
    }
}

int main()
{ 
    fizzbuzz(150);
}
