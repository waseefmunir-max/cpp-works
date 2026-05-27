#include <iostream>
#include <string>

using namespace std;

// Concatenation is a process of combining two or more strings into a single larger string.

int main() {

    /*
    string Name; 
    string greeting = "Hello, ";
    cout << "Enter your name: ";
    // But we have to remove leading whitespace characters
    getline(cin >> ws, Name);
    cout << greeting << Name << '\n';
    */
    /*
    string firstname = "Alan ";
    string lastName = "Walker";
    string fullName = firstname.append(lastName);
    

    cout << "Your name is " << fullName << '\n';

    string city = "Dhaka";
    city.append(", Bangladesh");

    cout << "I live in " << city;
    */

    string city;

    cout << "Enter your city name (inside Bangladesh): ";
    getline(cin >> ws, city);

    city.append(", Bangladesh");

    cout << "You live in " << city;

    /*
    string firstName, lastName;

    cout << "Enter your first name: ";
    getline(cin >> ws, firstName);
    cout << "Enter your last name: ";
    getline(cin >> ws, lastName);

    //string fullName = firstName + " " + lastName;
    string fullName = firstName.append(lastName);

    cout << "Your full name is " << fullName;
    */

    return 0;
}