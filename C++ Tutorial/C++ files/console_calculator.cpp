#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "****************CALCULATOR****************\n\n";

    cout << "Enter either (+ - * /): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op){ // We are examining our operator, so inside 1st brackets of switch, we have to put 'op'.
        case '+':
          result = num1 + num2;
          cout << "The sum of the two numbers are : " << result << '\n' << '\n';
          break;
        case '-':
          result = num1 - num2;
          cout << "The subtraction of the two numbers are: " << result << '\n' << '\n';
          break;
        case '*':
          result = num1 * num2;
          cout << "The multiplication of the two numbers are: " << result << '\n' << '\n';
          break;
        case '/':
          result = num1 / num2;
          cout << "The division of the two numbers are: " << result << '\n' << '\n';
          break;
        default:
          cout << "Please select your operator correctly!" << '\n';

    }

    cout << "******************************************";

    return 0;
}
