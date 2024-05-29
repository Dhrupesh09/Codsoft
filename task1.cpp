#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int userGuess;

    std::cout << "Guess the number between 1 and 100: ";
    
    do {
        std::cin >> userGuess;
        
        if (userGuess < randomNumber) {
            std::cout << "Too low. Try again: ";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high. Try again: ";
        }
    } while (userGuess != randomNumber);

    std::cout << "Congratulations! You guessed the correct number." << std::endl;

    return 0;
}

