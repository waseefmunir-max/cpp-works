#include <iostream>
using namespace std;

void square(double length, double result);

int main() {

    double result;
    double length = 5;
    square(length, result);
    cout << result;

    return 0;
}

void square(double length, double result) {
    double result = length * length;
}