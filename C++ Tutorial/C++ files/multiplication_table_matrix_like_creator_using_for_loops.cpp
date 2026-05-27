#include <iostream>
using namespace std;

int main() {
    
    int rows, columns;

    cout << "********************* Multiplication Table Creator *********************\n";
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    cout << '\n';
    cout << '\n';

    cout << "The multiplication table with " << rows << " rows and " << columns << " columns are shown below: \n";
    cout << "------------------------------------------------------------------\n";

    for(int r = 1; r <= rows; r++)
    {
        for(int c = 1; c <= columns; c++)
        {
            cout << "(" << r << "*" << c << ") = " << r * c << ' ' << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    cout << "************************************************************************\n";

    return 0;
}