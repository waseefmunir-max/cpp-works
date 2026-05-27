#include <iostream>
using namespace std;

int main(){

    int countdown = 3;
    int number, roll;

    while (countdown > 0)
    {
        cout << countdown << '\n';
        countdown--;
    }
    cout << "Happy New Year!" << '\n';

    cout << '\n';

    cout << "Enter a number less than or equal to 20: ";
    cin >> number;

    cout << "The numbers (increment by 2) from " << number << " to 20 are shown below: \n";
    while (number <= 20)
    {
        cout << number << '\n';
        number+=2;
    }

    cout << '\n';

    cout << "Enter 1 to roll the dice: ";
    cin >> roll;

    while (roll < 6)
    {
        cout << "No chokka\n";
        roll++;
    }
    cout << "Chokka!\n";
    

    return 0;
}