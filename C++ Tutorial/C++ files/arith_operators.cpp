#include <iostream>

int main() {
    
    // Arithmetic Operators in C++
    // Arithmetic operators are used to perform basic mathematical operations. It returns a value based on the operation performed, such as addition, subtraction, multiplication, division, modulus and increment/decrement.
    // Modulus means "ভাগশেষ" in Bengali, which is used to find the remainder of a division operation. For example, 20 % 3 gives a remainder of 2.
    // Increment meaning in Bengali is "বৃদ্ধি" and decrement is "হ্রাস".

    double students = 20;

    std::cout << "The initial number of students is: " << students << '\n';


    //students = students + 5; // Incrementing the number of students by 5
    //students += 5; // Another way to increment the number of students by 5. 
    //std::cout << "The number of students after incrementing by 5 is: " << students << '\n';
    //
    //students ++; // Another way to increment the number of students by 1
    //std::cout << "The number of students after incrementing by one is " << students << '\n';

    

    //students = students - 5; // Decrementing the number of students by 5
    //students -= 5; // Another way to decrement the number of students by 5  
    //std::cout << "The number of students after decrementing by 5 is: " << students << '\n';
    //students --; // Another way to decrement the number of students by 1
    //std::cout << "The number of students after decrementing by one is " << students << '\n';



    /*
    //students = students * 2; // Multiplying the number of students by 2
    students *= 2; // Another way to multiply the number of students by 2
    std::cout << "The number of students after multiplying by 2 is: " << students << '\n';
    */

    //students = students / 4; // Dividing the number of students by 4
    students /= 6; // Another way to divide the number of students by 4
    std::cout << "The number of students after dividing by 4 is: " << students << '\n';

    //students %= 3; // Modulus operation to find the remainder when the number of students is divided by 3
    // This will cause an error if students is not an integer type, as modulus operation is not defined for floating-point numbers.
    // In this case, students is a double, so we need to convert it to an integer type before performing the modulus operation.
    

    int stu = 20;

    int modulus  = stu % 3; // Modulus operation to find the remainder when 20 is divided by 3

    //stu %= 3; // Another way to perform the modulus operation
    //int modulus = stu; // Store the result of the modulus operation in a new variable
    std::cout << "The modulus of 20 divided by 3 is: " << modulus << '\n';

    // Parentheses means "ব্র্যাকেট" in Bengali, which is used to change the order of operations in expressions. There are three types of parentheses: round (), square [], and curly {}. In C++, round parentheses are used for function calls and expressions, square brackets for arrays, and curly braces for initializing lists or defining scopes.

    // C++ follows the BODMAS rule for the order of operations, which stands for Brackets, Orders (powers and square roots, etc.), Division and Multiplication (left to right), Addition and Subtraction (left to right). 

    int example = (5 + 3) * 2 / 4; // Example of using parentheses to change the order of operations

    std::cout << example << '\n'; // Output the result of the expression

    
    return 0;
}