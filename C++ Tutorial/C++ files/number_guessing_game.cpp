#include <iostream>
using namespace std;

int main() {

    srand(time(0));
    int guess;
    int tries = 0;
    int num = (rand() % 100) + 1;

    cout << "****** NUMBER GUESSING GAME ******\n";
    do
    {
        cout << "Enter a number (1-100): ";
        cin >> guess;
        tries++; // Increment of tries with each guess
        if (guess > num)
        {
            cout << "Too high!\n";
        }
        else if (guess < num)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "CORRECT! # of tries: " << tries << '\n';
        }
    } while (guess != num); // Re-runs the loop when the condition is true (when user's input number is NOT equal to the randomly generated one.)
    cout << "**********************************\n";

    return 0;
}