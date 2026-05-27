#include <iostream>
using namespace std;

// Function - A block of reusable code

void HappyBirthday(string name, int age);
int main() {

    string name;
    int age;
    
    /*
    cout << "Enter your name and age to get a birthday wish.\n";
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    */

    //HappyBirthday(name);
    //HappyBirthday(name);
    
    HappyBirthday(name, age);

    return 0;
}
/* 
//
void HappyBirthday(string BirthdayBoi){ // Here, inside the function, within the parentheses is the parameter or argument variable.
    //Here, inside the function, we use the parameter name.
    //The argument name can be different from the parameter name.
    // It doesn't matter what the parameter name is, the argument name can be different.
    cout << "Happy birthday to " << BirthdayBoi << '\n';
    cout << "Happy birthday to " << BirthdayBoi << '\n';
    cout << "Happy birthday dear " << BirthdayBoi << '\n';
    cout << "Happy birthday to " << BirthdayBoi << '\n' << '\n';
}
*/
void HappyBirthday(string name, int age){ 
    
    cout << "Enter your name and age to get a birthday wish.\n";
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    cout << "Happy birthday to you, " << name << '\n';
    cout << "Happy birthday to you, " << name << '\n';
    cout << "Happy birthday dear " << name << '\n';
    cout << "Happy birthday to you, " << name << '\n';
    cout << "You are now " << age << " years old.\n";
}