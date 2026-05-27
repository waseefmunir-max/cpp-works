#include <iostream>
#include <string>
using namespace std;

int main() {

    string name, username;

    cout << "Enter your name: ";
    //getline(cin >> ws, name);
    getline(cin, name);
    
    cout << "Your name has " << name.length() << " characters." << '\n';


    /*
    if (name.length() > 15) //string.length() allows to count the length of a string
    {
        cout << "Please enter a name within 15 characters.";
    }
    else if (name.empty()) //string.empty() checks if the string is empty or not
    {
        cout << "You didn't emter your name.";
    }
    else{
        cout << "Welcome, " << name;
    }
    */
    //name.clear(); //string.clear() clears the string, making it an empty string
    cout << "Hello, " << name << '\n';                                                                                                                                                                   
    cout << "The space in your name is at " << name.find(' ') << " no. character" << '\n';

    cout << "Enter your username: ";
    getline(cin, username);
    cout << "Your username is " << username.insert(0, "@") << '\n';
    //cout << username.erase(0, 1) << '\n';
    string mailname = username.erase(0, 1);
    cout << "Your mail address is " << mailname.append("@gmail.com") << '\n';
    cout << "The first character of your username is \'" << username[0] << "\'" << '\n';
    cout << "The second character of your username is \'" << username[1] << "\'" << '\n';
    cout << "The third character of your username is \'" << username[2] << "\'" << '\n';
    cout << "The last character of your username is \'" << username[username.length() - 1] << "\'" << '\n';
    //cout << "The first character of your username is \'" << username.at(0) << "\'" << '\n';
    //cout << "The second character of your username is \'" << username.at(1) << "\'" << '\n';
    //cout << "The third character of your username is \'" << username.at(2) << "\'" << '\n';
    //cout << "The last character of your username is \'" << username.at(username.length() - 1) << "\'" << '\n';
    //cout << username.erase(1, 4) << '\n';

    cout << "To know more about strings, visit - https://cplusplus.com/reference/string/ " << '\n';
    
    
    

    return 0;
}