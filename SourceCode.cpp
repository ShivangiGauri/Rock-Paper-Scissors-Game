//#include <iostream>
//#include <cstdlib>
//#include <ctime>
#include <bits/stdc++.h>

using namespace std;

string getComputerChoice() {
    std::srand(std::time(0));
    int randomChoice = std::rand() % 3;
    switch(randomChoice) {
        case 0:
            return "Rock";
        case 1:
            return "Paper";
        case 2:
            return "Scissors";
    }
    return "Rock"; // Default case
}

string getUserChoice() {
    string choice;
    cout << "Hello everyone !" << endl;
    cout << "This is the implementation of the game ---> Rock, Paper, Scissors !!! "<< endl;
    cout << "To ensure Transparency, the computer will generate the other choice randomly . " << endl;
    cout << "Enter  your choice --->  Rock, Paper, or Scissors ? " << endl;
    cin >> choice;
    return choice;
}

string determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    } else if ((userChoice == "Rock" | userChoice == "rock" | userChoice == "r" && computerChoice == "Scissors") ||
               (userChoice == "Paper" | userChoice == "paper" | userChoice == "p" && computerChoice == "Rock") ||
               (userChoice == "Scissors" | userChoice == "scissors" | userChoice == "s" && computerChoice == "Paper")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    string userChoice = getUserChoice();
    string computerChoice = getComputerChoice();

    cout << "You chose: " << userChoice << endl;
    cout << "Computer chose: " << computerChoice << endl;

    cout << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}

