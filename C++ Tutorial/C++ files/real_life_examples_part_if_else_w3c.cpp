#include <iostream>
using namespace std;

int main() {

    int doorcode;
    cout << "Enter the door code: ";
    cin >> doorcode;

    if( doorcode == 1234){
        cout << "Correct code.\nThe door is now open.\nWelcome back.";
    }
    else{
        cout << "Incorrect code.\nPlease try again.";
    }

    cout << '\n';

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if((number % 2) == 0){
        cout << "The number " << number << " is even.";
    }
    else{
        cout << "The number " << number << " is odd.";
    }

    cout << '\n';

    double age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 80){
        cout << "You are a senior citizen, and your vote will be highly appreciated";
    }
    else if(age >= 18){
        cout << "Congratulations! You are a voter.";
    }
    else if(age <= 10){
        cout << "You are still a kid!";
    }
    else{
        cout << "Sorry! You are not a voter.";
    }

    cout << '\n';

    double x1;
    cout << "Enter a number: ";
    cin >> x1;
    string check = (x1 > 0) ? "Your number is positive." : "Your number is negative.";
    cout << check << '\n';

    int VoteAge;
    string CitizConf;

    cout << "Please enter your age: ";
    cin >> VoteAge;
    cout << "Are you a citizen? : ";
    getline(cin >> ws, CitizConf);
    if (VoteAge >= 18)
    {
        cout << "You are old enough to vote.\n";
        if (CitizConf == "Yes" || CitizConf == "YES" || CitizConf == "yes")
        {
            cout << "You are also a citizen, so you can vote.\n";
        }
        else
        {
            cout << "But you are not a citizen. Therefore you cannot vote.\n";
        }
    }
    else {
            cout << "Sorry, you are not old enough to vote.\n";
    }

    return 0 ;
}
    