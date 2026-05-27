#include <iostream>
using namespace std;

int main() {

    double temp, ConvTemp;
    char unit;

    cout << "*****Temperature Converter*****\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "What unit you would like to convert to: ";
    cin >> unit;

    //Using 'if-else' statements:
    /*
    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;
        ConvTemp = (1.8 * temp) + 32;
        cout << "The temperature is: " << ConvTemp << " F" << '\n';
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        ConvTemp = (temp - 32) / 1.8;
        cout << "The temperature is: " << ConvTemp << " C" << '\n';
    }
    else
    {
        cout << "Please enter a character only from F and C" << '\n';
    }
    */

    //Now using 'switch':
    
    switch (unit)
    {
    case 'F':
    case 'f':
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;
        ConvTemp = (1.8 * temp) + 32;
        cout << "The temperature is " << ConvTemp << " F" << '\n';
        break;
    case 'C':
    case 'c':
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        ConvTemp = (temp - 32) / 1.8;
        cout << "The temperature is " << ConvTemp << " C" << '\n';
        break;

    default:
        cout << "Please enter a character only from F and C" << '\n';
        break;
    }
    
    cout << "*******************************" << '\n';

    return 0;
}