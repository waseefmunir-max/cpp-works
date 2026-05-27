#include <iostream>
using namespace std;

int main(){

    int rows, columns;
    char symbol;

    cout << "How many rows? : ";
    cin >> rows;

    cout << "How many columns? : ";
    cin >> columns;

    cout << "Enter a symbol to print: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
        cout << symbol << ' '; // Prints numbers from 1 to 10
        }
        cout << '\n'; // New line after inner loop completes.
        // From line 10 to 14, the inner loop completes its full cycle for each iteration of the outer loop.
        // After the inner loop finishes, a newline is printed to separate the outputs of different iterations of the outer loop.
    }

    return 0;
}