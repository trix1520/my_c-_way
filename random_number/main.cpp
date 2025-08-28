#include <iostream>
#include "Random.h"
    
int getNumber(int min, int max)
{
    while (true)
    {
        std::cout << "Enter a number: ";
        int user_number;
        std::cin >> user_number;
    
        bool seccess{ std::cin };
        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (user_number < min || user_number > max)
        {
            continue;
        }
        return user_number; 
    }
}
    
void playRandom(int min, int max)   
{
    std::cout << "Let's play a game. I'm thinkig of a number between " << min << " and " << max << ". You have a trie to guess what it is.\n";

    int random_number { Random::get(min, max) };
    
    int user_number { getNumber(min, max) };
   
    if ( random_number == user_number)
    {
        std::cout << "Correct. You win!\n"; 
    }
    else 
        std::cout << "Sorry, you lose.\n";
    
}

bool playAgain()
{
    while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
	    }
	}

}

int main()
{
    int min{1};
    int max{10};

    do
    {
        playRandom(min, max);
    }while(playAgain());

    std::cout << "Thank you for your playing!\n";
}
