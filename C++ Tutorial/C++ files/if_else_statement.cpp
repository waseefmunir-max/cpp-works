#include <iostream>
using namespace std;

int main(){

    int age;

    cout << "Enter your age: ";
    cin >> age;
    
    if(age >= 80){
        cout << "You are a voter, but be careful of your health";
    }
    else if(age >= 18){       
        cout << "Congratulations! You are a voter.";
    }
    else if(age < 7){
        cout << "You are still a kid!";
    }
    else{
        cout << "Sorry, you are not a voter.";
        cout << " You must be at least 18 years old to vote.";
        cout << " You are currently " << age << " years old.";
        cout << " You will be eligible to vote in " << (18 - age) << " years.";
    }

    return 0;
}