#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber() {
    return rand() % 100 + 1;
}

int getUserGuess() {
    int userGuess;
    cout << "Enter your guess (between 1 and 100): ";
    cin >> userGuess;

    while (userGuess < 1 || userGuess > 100) {
        cout << "Please enter a number between 1 and 100: ";
        cin >> userGuess;
    }

    return userGuess;
}

string evaluateGuess(int userGuess, int targetNumber) {
    if (userGuess == targetNumber) {
        return "Congratulations! You guessed the correct number.";
    } else if (userGuess < targetNumber) {
        return "Too low. Try again.";
    } else {
        return "Too high. Try again.";
    }
}

void playGame() {
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it." << endl;

    int targetNumber = generateRandomNumber();

    while (true) {
        int userGuess = getUserGuess();

        string result = evaluateGuess(userGuess, targetNumber);
        cout << result << endl;

        cout << "Do you want to play again? (yes/no): ";
        string playAgain;
        cin >> playAgain;

        if (playAgain != "yes") {
            cout << "The correct number was " << targetNumber << ". Thanks for playing. Goodbye!" << endl;
            break;
        }
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Start the game
    playGame();

    return 0;
}
