#include <iostream>
#include <string>

// Function to get user input
std::string getInput() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}

// Function to display game messages
void displayMessage(const std::string& message) {
    std::cout << message << std::endl;
}

// Function to handle game logic
void playGame() {
    displayMessage("Welcome to the Adventure Game!");

    // Game loop
    while (true) {
        displayMessage("You are in a dark room. There are two doors, one on the left and one on the right. Which door do you choose? (left/right)");

        std::string choice = getInput();

        if (choice == "left") {
            displayMessage("You enter the left room. It is empty.");
        } else if (choice == "right") {
            displayMessage("You enter the right room. There is a treasure chest!");
            break;
        } else {
            displayMessage("Invalid choice. Please try again.");
        }
    }

    displayMessage("Congratulations! You found the treasure chest. You win!");
}

int main() {
    playGame();

    return 0;
}

