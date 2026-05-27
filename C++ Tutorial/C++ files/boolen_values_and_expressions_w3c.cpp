#include <iostream>
#include <string>
using namespace std;

int main() {

    bool icf = true;
    bool iet = false;

    cout << "Is coding fun? Answer : " << icf << '\n';
    cout << "Is eggplant tasty? Answer: " << iet << '\n';

    double x, y;

    cout << "Enter the value of x : ";
    cin >> x;

    cout << "Enter the value of y : ";
    cin >> y;

    cout << "Is x greater than y? Answer : " << (x > y) << '\n';
    
    //(x > y) ? cout << "Is x greater than y? Answer : 1" : cout << "Is x greater than y? Answer : 0";

    //cout << ((x > y) ? "Is x greater than y? Answer : 1" : "Is x greater than y? Answer : 0");

    return 0;
}