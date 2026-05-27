#include <iostream>
using namespace std;

// Ternary Operators: It is a shorthand way of writing an if-else statement. It is also known as conditional operator.
// Syntax: condition ? expression_1 : expression_2
// If condition is true, then expression_1 is executed. If condition is false, then expression_2 is executed.

int main() {

    
    int marks = 60;
    // << "Enter your marks: ";
    //cin >> marks;
    /*
    if(marks >= 60){
        cout << "Congratulations! You Passed.";
    }
    else{
        cout << "Sorry! You Failed.";
    }
    */
    marks >= 60 ? cout << "Congratulations! You Passed." << '\n' : cout << "Sorry! You Failed." << '\n';
    //marks % 2 == 1 ? cout << "Your marks is ODD." : cout << "Your marks is EVEN.";
    marks % 2 ? cout << "Your marks is ODD." << '\n' : cout << "Your marks is EVEN." << '\n'; // Output will be same as above line because if marks is odd then marks % 2 will be 1 (true) and if marks is even then marks % 2 will be 0 (false).

    bool isRainy = false;

    //isRainy ? cout << "It is rainy today." : cout << "It's not raining today.";

    cout << (isRainy ? "It is rainy today." : "It's not raining today.");
    cout << '\n';

    int x;
    cout << "Enter an integer number: ";
    cin >> x;

    //cout << ((x / 2) == 0 ? "Your number is even" : "Your number is odd");
    string checking = (x % 2) == 0 ? "Your number is even" : "Your number is odd";
    cout << checking;
    

    return 0;
}