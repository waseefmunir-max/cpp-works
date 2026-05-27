#include <iostream>
using namespace std;

int main(){

    int CarPrint = 0;

    string cars[4] = {"Mercedes", "BMW", "Lamborghini", "Koenigsegg "};

    cout << cars[0] << '\n'; // Prints Mercedes
    
    cout << cars[2] << '\n'; //Prints Lamborghini
    cars[2] = "Bugatti"; //Changing the value of index 2 from Lamborghini to Bugatti
    cout << cars[2] << '\n'; // Npw it prints Bugatti instead of Lamborghini

    cout << "Which numbered car do you want to print (0-3)? : ";
    cin >> CarPrint;
    cout << CarPrint << " numbered car is shown below: \n";
    cout << cars[CarPrint];

    return 0;
}