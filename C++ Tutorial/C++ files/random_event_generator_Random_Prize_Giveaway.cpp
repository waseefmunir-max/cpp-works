#include <iostream>
#include <ctime>
using namespace std;

int main() {

    //srand(time(NULL)); // Seed the random number generator with the current time (sinxce epoch or 1st January, 1970)
    // Epoch time is the number of seconds that have elapsed since 00:00:00 Coordinated Universal Time (UTC), Thursday, 1 January 1970, not counting leap seconds.
    
    srand(time(0)); // Same as srand(time(NULL)) because NULL is actually 0.
    
    int RandNumb = (rand() % 10) + 1;

    cout << "Random Prize Giveaway: \n";
    cout << "---------------------\n";
    switch (RandNumb)
    {
    case 1:
        cout << "Congratulations! You have won the grand prize, which is a Gaming Laptop.\n";
        break;
    case 2:
        cout << "Congratulations! You have won the second best prize, which is a RTX 3090 Graphics Card.\n";
        break;
    case 3:
        cout << "Congratulations! You have won GTX 1080 Ti Graphics Card.\n";
        break;
    case 4:
        cout << "Congratulations! You have won a Samsung Galaxy S21.\n";
        break;
    case 5:
        cout << "Congratulations! You have won a Poco F3.\n";
        break;
    case 6:
        cout << "Congratulations! You have won a Realme Narzo 50.\n";
        break;
    case 7:
        cout << "Congratulations! You have won a Oracle Noise Canceling Headphone.\n";
        break;
    case 8:
        cout << "Congratulations! You have won a Airpod 6.\n";
        break;
    case 9:
        cout << "Congratulations! You have won DM9 Earphone.\n";
        break;
    case 10:
        cout << "We are sorry, you didn't win anything.\n";
        break;
    default:
        break;
    }

    return 0;
}