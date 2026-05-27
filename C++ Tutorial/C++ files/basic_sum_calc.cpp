#include <iostream>
using namespace std;

int main() {

    double x, y, z, sum;
    // sum = x + y + z; Don't write the calculation line here.

    

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;
    
    cout << "Enter the value of z: ";
    cin >> z;

    sum  = x + y + z; // Write the calculation line after all the inputs.
    cout << "The sum of x, y, z is: " << sum << '\n' << '\n';

    string name, address;

    cout << "Enter your full name: ";
    getline(cin >> ws, name);

    cout << "Enter your address: ";
    getline(cin >> ws, address);

    cout << "Your name is " << name << '\n';
    cout << "Your address is " << address << '\n';

    return 0;
}