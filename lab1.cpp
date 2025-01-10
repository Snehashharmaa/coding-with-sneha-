#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

enum Choice { R = 1, P, S };

char choiceToChar(Choice choice) {
    switch (choice) {
        case R: return 'R';
        case P: return 'P';
        case S: return 'S';
        default: return '?';
    }
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed for random generator
    std::vector<int> wins, ties, losses;
    int playerScore = 0, computerScore = 0;

    while (playerScore < 5 && computerScore < 5) {
        // Prompt user for choice
        char playerInput;
        std::cout << "Enter your choice (R: Rock, P: Paper, S: Scissors): ";
        std::cin >> playerInput;

        // Convert input to uppercase for consistency
        playerInput = toupper(playerInput);

        if (playerInput != 'R' && playerInput != 'P' && playerInput != 'S') {
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }

        Choice playerChoice = (playerInput == 'R') ? R : (playerInput == 'P') ? P : S;
        Choice computerChoice = static_cast<Choice>(1 + std::rand() % 3);

        std::cout << "You chose: " << choiceToChar(playerChoice) << "\n";
        std::cout << "Computer chose: " << choiceToChar(computerChoice) << "\n";

        // Determine the result
        if (playerChoice == computerChoice) {
            std::cout << "It's a tie!\n";
            ties.push_back(1);
        } else if ((playerChoice == R && computerChoice == S) ||
                   (playerChoice == P && computerChoice == R) ||
                   (playerChoice == S && computerChoice == P)) {
            std::cout << "You win this round!\n";
            wins.push_back(1);
            playerScore++;
        } else {
            std::cout << "Computer wins this round!\n";
            losses.push_back(1);
            computerScore++;
        }

        std::cout << "Score: You " << playerScore << " - " << computerScore << " Computer\n";
    }

    std::cout << "Game over! ";
    if (playerScore == 5)
        std::cout << "Congratulations, you win!\n";
    else
        std::cout << "The computer wins. Better luck next time!\n";

    return 0;
}
