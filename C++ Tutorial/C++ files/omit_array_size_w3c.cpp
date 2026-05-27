#include <iostream>
#include <vector>
using namespace std;

int main() {

    string cars[] = {"BMW", "Mercedes", "Bugatti", "Lamborghini"};
    //string cars[4] = {"BMW", "Mercedes", "Bugatti", "Lamborghini"}; Same as above.

    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << '\n';
    }
    
    cout << '\n';

    string Proglang[5];
    // Arrays can be declared like this, but this time we have to specify the size of the array, that means 'string Proglang[]' will cause an error
    Proglang[0] = "Python"; 
    Proglang[1] = "Java";
    Proglang[2] = "C#";
    Proglang[3] = "C++";
    Proglang[4] = "C";

    for (int j = 0; j < 5; j++)
    {
        cout << Proglang[j] << '\n';
    }

    cout << '\n';

    cout << "Top Engineering Universities in Bangladesh: \n";
    string EngUni[4] = {"BUET", "CUET", "KUET", "RUET"};
    for(string EngUnis : EngUni)
    {
        cout << EngUnis << '\n'; // No need to declare which element we want to print, it'll print all elements as it has to complete a loop
    }

    cout << '\n';

    cout << "Top Engineering Universities in Bangladesh (corrected): \n";
    vector<string> EngUni1 = {"BUET", "CUET", "KUET", "RUET"}; // Using vector instead of array, so that we can add more elements later.
    EngUni1.push_back("SUST"); // Adding SUST to the list.
    EngUni1.push_back("IUT"); // Adding IUT to the list.
    for(string EngUnis1 : EngUni1)
    {
        cout << EngUnis1 << '\n';
    }

    
    return 0;
}