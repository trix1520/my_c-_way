#include <iostream>

int main()
{
    // outer loops between 1 and 5
    int outer{ 1 };
    while (outer <= 5)
    {
        // For each iteration of the outer loop, the code in the body of the loop executes once

        int space{5}; 
        while (space > outer)
        {
            std::cout << ' ' << ' ';
            --space;
        }

        // inner loops between 1 and outer
        // note: inner will be created and destroyed at the end of the block
        int inner{ outer };
        while (inner >= 1)
        {
            std::cout << inner << ' ';
            --inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    } // inner destroyed here

    return 0;
}
