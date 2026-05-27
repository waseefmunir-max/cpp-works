#include <iostream>
#include <string>
using namespace std;

int main() {

    string weather = "It\'s a sunny day.";
    string name = "We call him \"Joe\".";
    string FileLoca = "The file is located at \'C:\\Users\\User\\Desktop\'.";
    string Tab = "Hello \t World!";
    string newLine = "\nHi there! \nHow you doing?";

    cout << "Today's weather: " << weather << '\n';
    cout << "What do we call him? " << name << '\n';
    cout << "We\'ve sent the file. " << FileLoca << '\n';
    cout << "This line will have a tab space - " << Tab << '\n';
    cout << "This line will have a line break - " << newLine << '\n';

    string Name, greetings, city;

    cout << "Enter your full name: ";
    getline(cin >> ws, Name);

    cout << "The first letter of your name is " << Name[0] << '\n';
    cout << "The second letter of your name is " << Name[1] << '\n';
    cout << "The third letter of your name is " << Name[2] << '\n';
    cout << "The last letter of your name is " << Name[Name.length() - 1] << '\n';

    cout << "Type \"Hello\": ";
    getline(cin >> ws, greetings);
    
    cout << "The output won't replace anything: " << greetings <<'\n';

    greetings[0] = 'J';
    cout << "The output will replace \'H\' with \'J\': " << greetings <<'\n';
    greetings[4] = 'a';
    cout << "The output will replace \'H\' and \'o\' with \'J\' and \'a\': " << greetings <<'\n';

    cout << "Enter the city you live in: ";
    getline(cin >> ws, city);

    cout << "You live in " << city.append(", Bangladesh") << '\n';
    cout << "The first letter of your city is " << city.at(0) << '\n';
    cout << "The second letter of your city is " << city.at(1) << '\n';
    cout << "The third letter of your city is " << city.at(2) << '\n';
    cout << "The last letter of your city is " << city.at(city.length() - 1) << '\n';
    city.at(0) = 'a';
    city.at(2) = 'e';
    cout << "If the first and third letter of your city is replaced by \'a\' and \'e\', then the name of your city will be - " << city << '\n';

    return 0;
}