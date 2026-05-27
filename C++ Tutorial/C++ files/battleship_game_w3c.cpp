#include <iostream>
using namespace std;

// Battleship game with multidimensional arrays
// This game will have the option of choosing dimension, choosing the difficulty level, and will keep track of the number of turns taken to win the game.
// In 1 dimension, there will be 5 elements, and 2 ships.
    // In easy mode, the player will have 5 lives
    // In medium mode, the player will have 4 lives
    // In hard mode, the player will have 3 lives
// In 2 dimensions, there will be a 5x5 grid, and 4 ships.
    // In easy mode, the player will have 8 lives
    // In medium mode, the player will have 7 lives
    // In hard mode, the player will have 6 lives
// In 3 dimensions, there will be a 5x5x5 cube, and 6 ships.
    // In easy mode, the player will have 11 lives
    // In medium mode, the player will have 10 lives
    // In hard mode, the player will have 9 lives
// The players scores 100 points for each ship they hit, and loses 10 points for each turn they take. If they lose all their lives, they lose 50 points.
// The game ends when the player hits all the ships, or loses all their lives.
// The game will display the player's score, number of hits, number of lives remaining at the end of the game.

  int main() {
    int dimension;
    // Game rules:
    cout << "Welcome to Battleship!\n";
    cout << "In 1 dimension, there are 2 ships hidden in a line of 5 positions.\n";
    cout << "In 2 dimensions, there are 4 ships hidden in a 5x5 grid.\n";
    cout << "In 3 dimensions, there are 6 ships hidden in a 5x5x5 cube.\n";
    cout << "You can choose the difficulty level which determines how many lives you have.\n";  
    cout << "You score 100 points for each ship you hit, and lose 10 points for each turn you take.\n";
    cout << "If you lose all your lives, you lose 50 points.\n";
    cout << "The game ends when you hit all the ships, or lose all your lives.\n";
    cout << "Good luck!\n\n";
    cout << "Choose the dimension of the game (1, 2, or 3): ";
    cin >> dimension;

    int difficulty;
    cout << "Choose the difficulty level (1 for easy, 2 for medium, 3 for hard): ";
    cin >> difficulty;

    int lives;
    if (dimension == 1) {
      if (difficulty == 1) {
        lives = 5;
      } else if (difficulty == 2) {
        lives = 4;
      } else {
        lives = 3;
      }
    } else if (dimension == 2) {
      if (difficulty == 1) {
        lives = 8;
      } else if (difficulty == 2) {
        lives = 7;
      } else {
        lives = 6;
      }
    } else {
      if (difficulty == 1) {
        lives = 11;
      } else if (difficulty == 2) {
        lives = 10;
      } else {
        lives = 9;
      }
    }

    int score = 0;
    int hits = 0;
    int numberOfTurns = 0;

    if (dimension == 1) {
      bool ships[5] = {0, 1, 0, 1, 0}; // Two ships in a one-dimensional array
      while (hits < 2 && lives > 0) {
        int position;
        cout << "Choose a position between 0 and 4: ";
        cin >> position;

        if (ships[position]) {
          ships[position] = 0;
          hits++;
          score += 100;
          cout << "Hit! " << (2 - hits) << " left.\n\n";
        } else {
          cout << "Miss\n\n";
        }

        numberOfTurns++;
        score -= 10;
        lives--;
      }
    } else if (dimension == 2) {
      bool ships[5][5] = { 
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0}
      }; // Four ships in a two-dimensional array 
      while (hits < 4 && lives > 0) {
        int row, column;
        cout << "Choose a row number between 0 and 4: ";
        cin >> row;
        cout << "Choose a column number between 0 and 4: ";
        cin >> column;

        if (ships[row][column]) {
          ships[row][column] = 0;
          hits++;
          score += 100;
          cout << "Hit! " << (4 - hits) << " left.\n\n";
        } else {
          cout << "Miss\n\n";
        }

        numberOfTurns++;
        score -= 10;
        lives--;
      } 
    } else {
      bool ships[5][5][5] = {
        {
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 1},
          {0, 0, 0, 0, 0}
        },
        {
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 1, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0}
        },
        {
          {0, 0, 0, 0, 0},
          {0, 1, 1, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0}
        },
        {
          {1, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0}
        },
        {
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0},
          {0, 0, 1, 0, 0},
          {0, 0, 0, 0, 0}
        } 
      }; // Six ships in a three-dimensional array  
      while (hits < 6 && lives > 0) {
        int depth, row, column;
        cout << "Choose a depth number between 0 and 4: ";
        cin >> depth;
        cout << "Choose a row number between 0 and 4: ";
        cin >> row;
        cout << "Choose a column number between 0 and 4: ";
        cin >> column;

        if (ships[depth][row][column]) {
          ships[depth][row][column] = 0;
          hits++;
          score += 100;
          cout << "Hit! " << (6 - hits) << " left.\n\n";
        } else {
          cout << "Miss\n\n";
        }

        numberOfTurns++;
        score -= 10;
        lives--;
      }
    }
    if (lives == 0 && hits < (dimension == 1 ? 2 : dimension == 2 ? 4 : 6)) {
      score -= 50;
      cout << "Game Over! You lost all your lives.\n";
      cout << "Your score is: " << score << "\n";
      cout << "You had " << hits << " hits\n";
      cout << "You had 0 lives remaining\n";
      cout << "Better luck next time!\n";
      cout << "You can try again by running the program again.\n";
      cout << "Thank you for playing!\n";
      cout << "Goodbye!\n";
      cout << "Exiting the game...\n";
      cout << "...\n";
      cout << "...\n";
      cout << "...\n";
    } else {
      cout << "Victory!\n";
      cout << "You won in " << numberOfTurns << " turns\n";
      cout << "Your score is: " << score << "\n";
      cout << "You had " << hits << " hits\n";
      cout << "You had " << lives << " lives remaining\n";
      cout << "Thank you for playing!\n";
      cout << "Goodbye!\n";
      cout << "Exiting the game...\n";
      cout << "...\n";
      cout << "...\n";
      cout << "...\n";
    }
    
    return 0;
  }
