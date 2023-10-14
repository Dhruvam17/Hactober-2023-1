#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int attempts = 3;
    int guess;

    std::cout << "Welcome to the Unusual Guessing Game!\n";
    std::cout << "You have 3 attempts to guess the secret number between 1 and 100.\n";
    std::cout << "Hint: The secret number is associated with a fun fact about the universe!\n";

    for (int attempt = 1; attempt <= attempts; ++attempt) {
        std::cout << "Attempt " << attempt << ": Enter your guess: ";
        std::cin >> guess;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the secret number and unlocked a cosmic trivia fact:\n";
            std::cout << "Did you know that the number of stars in the Milky Way is estimated to be around 100 billion?\n";
            std::cout << "You win a starry prize!\n";
            break;
        } else if (guess < secretNumber) {
            std::cout << "Try a higher number.\n";
        } else {
            std::cout << "Try a lower number.\n";
        }

        if (attempt == attempts) {
            std::cout << "Out of attempts. The secret number was " << secretNumber << ". Keep reaching for the stars!\n";
        }
    }

    return 0;
}
