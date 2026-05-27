#include <iostream>

using namespace std;

int main() {

    double UserAge;
    double VoteAge = 18;

    cout << "Enter your age : ";
    cin >> UserAge;

    if(UserAge >= VoteAge){
        cout << "Congratulations! You are a voter.";
    }
    else{
        cout << "Sorry! You are not old enough to vote.";
    }

    return 0;
}