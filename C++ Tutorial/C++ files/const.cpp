#include <iostream>

int main() {
    //The const keyword in C++ is used to declare constants, which are variables whose values cannot be changed after they are initialized. This is useful for values that should remain constant throughout the program, such as mathematical constants or configuration settings.
    //It tells the compiler that the value of the variable will not change, allowing for optimizations and preventing accidental modifications.
    // it is read-only, meaning you cannot change its value after it has been initialized.

   const double PI = 3.1416; // Now its a constant variable, meaning its value cannot be changed later in the program.
   //PI = 420.69;
   std::cout << PI << '\n';
    
   // double PI = 420.69; This line will cause a compilation error because PI is already defined as a constant.
   //So, the const adds a layer of data security to your code, ensuring that certain values remain unchanged throughout the execution of the program.

   double radius = 10;
   double circumference = 2 * PI * radius; // This calculates the circumference of a circle using the formula C = 2 * π * r.

   const int light_speed = 299792458; // Speed of light in meters per second, defined as a constant.
   const int width = 1920; // Width of a screen in pixels, defined as a constant.
   const int height = 1080; // Height of a screen in pixels, defined as a constant.

   
   std::cout << "Circumference of the circle is " << circumference << " cm" << '\n';
   std::cout << "The radius of the circle was " << radius << '\n';
   std::cout << "The speed of light is " << light_speed << " m/s" << '\n';
   std::cout << "The width of the screen is " << width << " and the height of the screen is " << height << '\n';

   // The const keyword is particularly useful in function parameters to indicate that the function will not modify the argument passed to it.
   // For example, if you pass a const reference to a function, it ensures that the function does not change the value of the argument.

    return 0;
}