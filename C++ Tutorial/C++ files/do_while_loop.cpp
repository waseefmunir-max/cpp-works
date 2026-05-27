#include <iostream>
using namespace std;

int main() {

    int number, cont;

    /*
    cout << "Enter a positive number: ";
    cin >> number;

    while (number < 0 || number == 0)
    {
        cout << "Enter a positive number: ";
        cin >> number;
    }
    */

    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number <= 0);
    // Here, if the number is positive, the loop condition evaluates to false and the loop terminates, but will execute the loop body at least once.
    //If the number is negative or zero, the loop condition evaluates to true and the loop body is executed again.
    // Now, if the user enters a positive number on the first try, the loop body is executed only once, as the condition is checked after the loop body. And as the user entered a positive number, the condition evaluates to false and the loop terminates.
    // But if the user enters a negative number or zero, the loop body is executed multiple times until a positive number is entered.
    cout << "Your number is: " << number << '\n'; 

    cout << "Now enter any number: ";
    cin >> number;
    if (number)
    {
        while ((number % 2) == 0)
    {
        cout << "You have entered an even number.\n";
        cin >> cont;
        break;
    }
    }
    else 
    {
    cout << "Your have entered an odd number" << '\n';
    }

    return 0;
}