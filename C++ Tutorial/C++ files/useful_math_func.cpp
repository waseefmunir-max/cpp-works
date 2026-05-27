#include <iostream>
#include <cmath>

int main() {

    double x = 4.5;
    double y = 3.3;
    double x1 = 3.1;
    double y1 = 5.9;
    double z;
    const double e = 2.718;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(2, 4); //pow() is the power function, pow(x, y) = x^y
    //z = sqrt(16); //sqrt() is the square root function, sqrt(x) = √x 
    //z = abs(-4); //abs() is the absolute function, which indicates how far is a number from zero. Any negative number will become positive. abs(±x) = x
    //z = round(x); //round() makes a decimal value into a round figure (follows traditional rule)
    //z = round(y); //Same rule applied here
    //z = ceil(x1); //ceil() turns a number into its next number, even if the decimal porton is less than 5
    //z = floor(y1); //floor() turns a number into its previouys number, even if the decimal portion is greater that 5
    //z = log(e); //log() function returns the natural logarithm of a number.
    z = log(2);
    
    std::cout << z;

    return 0;
}