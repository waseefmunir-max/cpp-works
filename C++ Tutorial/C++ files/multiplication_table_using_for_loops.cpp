#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "******************* Multiplication Table *******************";
    cout << '\n';
    cout << '\n';

    cout << "Enter the number that you want the multiplication table of: ";
    cin >> number;
    cout << "The multiplication table of " << number << " is:" << '\n';
    cout << "--------------------------------" << '\n';

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * 1;
        cout << '\n';
    }

    cout << '\n';
    cout << "************************************************************";

    return 0;
}