#include <iostream>
#include <string>

using namespace std;

int main(){

    int x = 10;
    int y = 15;
    int z = x + y; 
    
    cout << z << '\n'; // Here, z will be 25

    string x1 = "10";
    string y1 = "15";
    string z1 = x1 + y1; 

    cout << z1 << '\n'; // But here, z1 will be 1015 (not 25)

    //string a = z1 + x; // This will cause an error because 'int' and 'string' cannot be added with '+' sign.

    //cout << a;

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << "The length of the string is: " << alphabet.length() << '\n';

    string firstName, lastName, district;

    cout << "Enter your first name: ";
    getline(cin >> ws, firstName);

    cout << "Enter your second name: ";
    getline(cin >> ws, lastName);

    cout << "Enter the district that you live in: ";
    getline(cin >> ws, district);

    string fullName = firstName + " " + lastName;
    district.append(", Bangladesh");

    cout << "Your full name is: " << fullName << '\n';
    cout << "Your name has " << fullName.length() << " characters" << '\n';
    cout << "You live in " << district << '\n';

    return 0;
}
