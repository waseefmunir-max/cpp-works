#include <iostream>
using namespace std;

int main() {

    string letters[2][4] = // A 2D array with 2 rows and 4 columns
    {
        {"A", "B", "C", "D"}, // row 0
        {"E", "F", "G", "H"}  // row 1
    };

    cout << letters[0][3] << '\n'; // Prints "D"

    letters[1][2] = "I"; // Changing the value of row 1, column 2 from "G" to "I"
    cout << letters[1][2] << '\n'; // Prints "I" instead of "G"

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << '\n';

    //---------------- Separating 2D and 3D arrays -----------------//

    string letters1[2][2][2] = // A 3D array with 2 blocks or layers, each containing 2 rows and 2 columns
    {
        {
            {"a", "b"},
            {"c", "d"}
        }, //Putting comma instead of semi-colons, because it's an array of arrays
        {
            {"e", "f"},
            {"g", "h"}
        }
    };

    cout << letters1[0][1][1] << '\n'; // Prints "d"

    letters1[1][0][1] = "k"; // Changing the value of block 1, row 0, column 1 from "f" to "k"
    cout << letters1[1][0][1] << '\n'; // Prints "k" instead of "f"
    cout << '\n';

    cout << "The loop follows - letters[k][l][m].\n";
    cout << '\n';
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            for (int m = 0; m < 2; m++)
            {
                //cout << letters1[k][l][m] << ' ';
                cout << "When k=" << k << ", l=" << l << ", m=" << m << ", it follows - letters1[" << k << "][" << l << "][" << m << "], output is: " << letters1[k][l][m] << " || ";
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
