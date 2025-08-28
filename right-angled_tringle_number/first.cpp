// Thanks to Shiva for this solution
#include <iostream>

int main()
{
	// There are 5 rows, we can loop from 1 to 5
	int outer{ 1 };

	while (outer <= 5)
	{
		// Row elements appear in descending order, so start from 5 and loop through to 1
		int inner{ 5 };

		while (inner >= 1)
		{
			// The first number in any row is the same as the row number
			// So number should be printed only if it is <= the row number, space otherwise
			if (inner <= outer)
				std::cout << inner << ' '; // print the number and a single space
			else
				std::cout << "  "; // don't print a number, but print two spaces

			--inner;
		}

		// A row has been printed, move to the next row
		std::cout << '\n';

		++outer;
	}

	return 0;
}
