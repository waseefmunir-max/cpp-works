#include <iostream>
using namespace std;

int main() {

    string conf;
    int PlaNum = 0;
    string planets[8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int PlaDist[8] = {58, 108, 150, 228, 778, 1430, 2870, 4500};

    do
    {
        cout << "How many planets do you want to see? : ";
        cin >> PlaNum;
    } while (PlaNum > 8 || PlaNum <= 0);
    
    cout << "The list of " << PlaNum << " planets: \n";
    for (int i = 0; i < PlaNum; i++)
    {
        cout << planets[i] << '\n';
    }

    cout << '\n';

    cout << "The list of " << PlaNum << " planets with numbers : \n";
    for (int i = 0; i < PlaNum; i++)
    {
        cout << (i + 1) << ". " << planets[i] << '\n';
    }

    cout << '\n';
    
    cout << "The distance of each planet from sun: \n";
    for (int i = 0; i < PlaNum; i++)
    {
        cout << (i + 1) << ". " << planets[i] << ": " << PlaDist[i] << " million km" << '\n';
    }
    // PlaDist is an array here, not a variable.

    cout << '\n';

    for(string PlanName : planets) // Used semi-colon (:) instead of equal (=), and didn't have to put 'planets' inside double quotes
    {
        cout << PlanName << '\n'; // Using for-each loop to print the names of planets
    }
    
    cout << '\n';
    
    for(int PlanDistance : PlaDist)
    {
        cout << PlanDistance << '\n'; // Using for-each loop to print the distances of all planets
    }



    return 0;
}