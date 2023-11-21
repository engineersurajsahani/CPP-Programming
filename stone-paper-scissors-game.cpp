#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string getUserChoice() {
    string userChoice;
    cout << "Enter your choice (rock/paper/scissors): ";
    cin >> userChoice;

    while (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
        cout << "Invalid choice. Please enter rock, paper, or scissors: ";
        cin >> userChoice;
    }

    return userChoice;
}

string getComputerChoice() {
    string choices[] = {"rock", "paper", "scissors"};
    int randomIndex = rand() % 3;
    return choices[randomIndex];
}

string determineWinner( string userChoice,  string computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    } else if (
        (userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "paper" && computerChoice == "rock") ||
        (userChoice == "scissors" && computerChoice == "paper")
    ) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

void playGame() {
    cout << "Welcome to Rock, Paper, Scissors!" << endl;

    while (true) {
        string userChoice = getUserChoice();
        string computerChoice = getComputerChoice();

        cout << "You chose " << userChoice << endl;
        cout << "Computer chose " << computerChoice << endl;

        string result = determineWinner(userChoice, computerChoice);
        cout << result << endl;

        cout << "Do you want to play again? (yes/no): ";
        string playAgain;
        cin >> playAgain;

        if (playAgain != "yes") {
            cout << "Thanks for playing. Goodbye!" << endl;
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
