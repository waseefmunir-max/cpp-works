#include <iostream>
using namespace std;

int main() {

    int FundNum[8] = {2, 3, 5, 7, 11, 13, 17, 19};

    for(int FundNums : FundNum)
    {
        cout << FundNums << '\n';
    }

    string capital = "Dhaka"; // Just a string, not an array

    for(char CharCap : capital)
    {
        cout << CharCap << '\n'; // Will print each character (D, h, a, k, a) in a new line
    }

    return 0;
}