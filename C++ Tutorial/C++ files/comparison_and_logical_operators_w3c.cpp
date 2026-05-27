#include <iostream>
using namespace std;

int main() {

    double x,y;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    cout << '\n';
    cout << "If the statement is true, then the output will be 1. And if false, then it will be 0." << '\n' << '\n';
    cout << "x is greater than y? Ans: " << (x > y) << '\n';
    cout << "x is less than y? Ans: " << (x < y) << '\n';
    cout << "x is equal to y? Ans: " << (x == y) << '\n';
    cout << "x is not equal to y? Ans: " << (x != y) << '\n';
    cout << "x is greater than or equal to y? Ans: " << (x >= y) << '\n';
    cout << "x is less than or equal to y? Ans: " << (x <= y) << '\n';
    cout << "Are both x > 5 and y < 3 true? Ans: " << (x > 5 && y < 3) << '\n';
    cout << "Is x >= 7 or y != 3 true? Ans: " << (x >= 7 || y != 3) << '\n';
    cout << "Ironically, is x == 5 and y <= 3 true? Ans: " << (!(x == 5 && y <=3)) << '\n';
    cout << "Ironically, is x != 5 or y >= 3 true? Ans: " << (!(x != 5 || y >=3)) << '\n';
    return 0;
}