#include <iostream>
using namespace std;

int main(){

    cout << "****************** Factorial Calculator ******************" << '\n';

    int numb;
    int fact = 1;

    cout << "Enter the integer number that you want the factorial of: ";
    cin >> numb;

    for(int j = 1; j <= numb; j++){
        fact *= j;
    }
    cout << "The factorial of " << numb << " is: " << fact << '\n';
    cout << "**********************************************************\n";

    return 0;
}