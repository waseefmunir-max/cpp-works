#include <iostream>
using namespace std;

int main() {
    int salary;

    cout << "Enter your salary (per month): ";
    cin >> salary;

    
    if(salary >= 50000){
        cout << "Looks like 'Deshneta' wants more than just chanda from you.";
    }
    else if(salary >= 15000){
        cout << "Prepare your chanda for 'Deshneta'.";
    }
    else if(salary >= 5000 && salary < 15000){
        cout << "Your chanda won't do anything to 'Deshneta'. But okay, at least pay the bills of tea-snacks.";
    }
    else {
        cout << "You are too poor to give chanda. Go and die in hell if you can't give chanda!";
    }

    return 0;
}