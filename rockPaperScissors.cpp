/*
* Huthsady Legend Boun
* rockPaperScissors.cpp
* October 24th 2024
* 
* short program for playing rock paper scissors
*
*/




#include <iostream>
#include <ctime>
#include <random>
#include <string>

std::string progStopper = "y";







// Generates a random number and returns it. 
int numGen()
{
    srand(time(NULL));
    int randNum = rand() % 3 + 1;
    
    return randNum;
}




// Prompts a user for input then accepts it.
int userInput()
{
    int userChoice = 0;


    std::cout << "Please lock-in your choice. |[1]Rock| |[2]Paper| |[3]Scissors|\nYou:";
    std::cin >> userChoice;

    return userChoice;
}


// Compares each combination and sees who wins.
std::string resultCalc(int player, int bot)
{
    std::cout << "CPU: " << bot << std::endl;

    if (player == bot)
    {
        return "It's a tie!\n";
    }

    else if ((player == 1 && bot == 3) || (player == 2 && bot == 1) || (player == 3 && bot == 2))
    {
        return "You win!\n";
    }

    else
    {
        return "You lose!\n";
    }
}


// Simple function that stops the program.
void progStop()
{
    std::cout << "Would you like to play again? Type [y]es or [n]o\n";
    std::cin >> progStopper;

}







// Main function, every c++ program needs it
int main()
{
    std::cout << "Welcome to Rock, Paper, and Scissors!" << std::endl;

    while (progStopper == "y")
    {
        std::cout << resultCalc(userInput(), numGen()) << std::endl;
        progStop();
    }
}







