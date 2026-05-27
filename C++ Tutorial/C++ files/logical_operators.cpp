#include <iostream>
using namespace std;

// &&, ||, ! - 3 logical comparison operators

int main() {

    double temp;
    cout << "Enter today's temperature: ";
    cin >> temp;
    if (temp >= 10 && temp <= 35)
    {
        cout << "The weather is fine.";
    }
    else{
        cout << "The weather is bad.";
    }

    cout << '\n';
    
    cout << "Enter today's temperature once again : ";
    cin >> temp;
    
    if (temp >= 10 || temp <= 35)
    {
        cout << "The weather is fine.";
    }
    else{
        cout << "The weather is bad.";
    }

    cout << '\n';
    
    cout << "Enter today's temperature for the last time (AND Operator) : ";
    cin >> temp;
    
    if (!(temp >= 10 && temp <= 35))
    {
        cout << "The weather is fine.";
    }
    else{
        cout << "The weather is bad.";
    }
    
    cout << '\n';
    
    cout << "Enter today's temperature for the last time (OR Operator) : ";
    cin >> temp;
    
    if (!(temp >= 10 || temp <= 35))
    {
        cout << "The weather is fine.";
    }
    else{
        cout << "The weather is bad.";
    }
    

    return 0;
}