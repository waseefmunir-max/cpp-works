#include <iostream>
using namespace std;

int main() {

    string stuName = "Waseef";
    int stuID = 15;
    int stuAge = 23;
    double stuFee = 75.25;
    char stuGrade = 'B';

    cout << "Student Name: " << stuName << '\n';
    cout << "Student ID: " << stuID << '\n';
    cout << "Student Age: " << stuAge << '\n';
    cout << "Student Fee: " << stuFee << '\n';
    cout << "Student Grade: " << stuGrade << '\n' << '\n';
    //cout << "Student Grade: \n\n" << stuGrade; (It will make the linebrakes before 'stuGrade')


    int recLength = 4;
    int recWidth = 6;

    cout << "Length is: " << recLength << '\n';
    cout << "Width is: " << recWidth << '\n';
    cout << "Area of the rectangle is: " << recLength * recWidth << '\n';

    return 0;
}