#include <iostream>
#include <cmath>

int main() {

    double a, b, c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    //a = pow(a, 2); // Here, the pow(a, 2) acts as a²
    //b = pow(b, 2); //Here, the pow(b, 2) acts as b²
    c = sqrt(pow(a, 2) + pow(b, 2)); //Here, the 'pow(a, 2) + pow(b, 2)'' acts as (a²+b²)
    //And sqrt(pow(a, 2) + pow(b, 2)) acts as √(a²+b²)

    std::cout << "The value of hypotenus of the right triangle is: " << c << '\n'; 

    return 0;
}