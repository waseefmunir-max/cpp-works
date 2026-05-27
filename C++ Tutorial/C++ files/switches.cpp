#include <iostream>
using namespace std;

// 'switch' is a control statement that allows a variable to be tested for equality against a list of values. Its an alternative to using many "else if" statements when you need to compare the same variable to different values.

int main(){
    
    /*
    int month;
    
    cout << "Enter month's number (1-12): ";
    cin >> month;

    switch(month){
        case 1:
          cout << "It is January";
          break;
        case 2:
          cout << "It is February";
          break;
        case 3:
          cout << "It is March";
          break;
        case 4:
          cout << "It is April";
          break;
        case 5:
          cout << "It is May";
          break;
        case 6:
          cout << "It is June";
          break;
        case 7:
          cout << "It is July";
          break;
        case 8:
          cout << "It is August";
          break;
        case 9:
          cout << "It is September";
          break;
        case 10:
          cout << "It is October";
          break;
        case 11:
          cout << "It is November";
          break;
        case 12:
          cout << "It is December";
          break;
        default: //'default' is like 'else' in an if-else statement. It is executed if none of the cases match the variable value. 
          cout << "Please give a number only from 1 to 12.";
    }
    */

    char grade;

    cout << "Enter your Grade: ";
    cin >> grade;

    switch(grade){ // Inside the brackets of switch, we have to put the variable we are examining. In this case, we are examining 'grade'. So inside the brackets of switch, we put 'grade'.
      // In easy words, we are going to give input to 'grade' variable, so inside the brackets of switch, we have to put the same variable name, which is 'grade'.
        case 'A': //Note that after 'case' we have to use single quotes for characters and double quotes for strings, and no quotes for numbers (int, float, double etc).
          cout << "You did awesome! Keep it up.";
          break;
        case 'B':
          cout << "You did great, just a little more effort will take you to the top!";
          break;
        case 'C':
          cout << "You did good, try a little more and you will be unstoppable!";
          break;
        case 'D':
          cout << "You did your best, and you truly have the potential to improve yourself and bring a better result next time. Believe in yourself!";
          break;
        case 'F':
          cout << "You FAILED! Try harder and put more efforts next time.";
          break;
        default:
          cout << "Please enter a letter from A, B, C, D and F only.";
    }

    return 0;
}