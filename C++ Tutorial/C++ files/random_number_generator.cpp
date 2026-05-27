#include <iostream>
using namespace std;

int main() {

    // psudo-random number generator : not truly random (but close and good enough for most purposes)
    // Here we are using a simple linear congruential generator (LCG) algorithm
    // to generate pseudo-random numbers. This is not suitable for cryptographic purposes.
    
    srand(time(NULL)); // Seed the random number generator with the current time
    // 

    //int num = rand(); // Generates a number between 0 and RAND_MAX, and the value of RAND_MAX is at least 32,767
    //int num = rand() % 6; // Generates a number between 0 and 5 (inclusive)
    // Inlcusive means both 0 and 5 are included in the range of possible values
    // that means the possible values are: 0, 1, 2, 3, 4, 5

    // Reminders (%) : In Bangla, we say it "vagshes" (ভাগশেষ). If 200 is divided by 6, the remainder will be 2. So, remainder is always less than the divisor.
    // So, 200 % 6 = 2

    int num = (rand() % 6 + 1); // Generates a number between 1 and 6 (inclusive)
    // Possible values are: 1, 2, 3, 4, 5, 6

    cout << num << '\n';

    int num2 = (rand() % 100 + 1); // Generates a number between 1 - 100
    cout << num2 << '\n';

    cout << "Let's say we have rolled 3 dice. The results are- \n";
    int die1 = (rand() % 6 + 1);
    int die2 = (rand() % 6 + 1);
    int die3 = (rand() % 6 + 1);

    cout << "First die: " << die1 << '\n';
    cout << "Second die: " << die2 << '\n';
    cout << "Third die: " << die3 << '\n';


    return 0;
}