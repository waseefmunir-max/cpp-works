#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;

    cout << "Enter your full name: ";
    getline(cin >> ws, name);

    cout << "Hi, " << name << '\n';

    char intro[] = "Hope you are well"; // It's mandatory to give '[]' after declaring the name.
    
    cout << intro << '\n';

    char address[] = "Dhaka";

    cout << "I live in " << address << " city" << '\n';

    // It's better to use 'string' instead of 'char',


    return 0;
}