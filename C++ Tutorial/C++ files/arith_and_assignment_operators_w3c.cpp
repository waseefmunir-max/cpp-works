#include <iostream>
using namespace std;

int main() {
    
    int x1 = 100 + 50;
    int sum1  = x1 + 50;
    int sum2  = sum1 + x1;

    cout << x1 << '\n';
    cout << sum1 << '\n';
    cout << sum2 << '\n';

    double x,y;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    //int modulus = (static_cast<int>(x) % static_cast<int>(y)); // 'static_cast' is used to convert double to int, as modulus operator works only with integers.

    
    cout << "The sum of x and y is: " << x + y << '\n';
    cout << "The subtraction (x - y) of  x and y is " << x - y << '\n';
    cout << "The multiplication of x and y is " << x * y << '\n';
    cout << "The division (x/y) of x and y is " << x / y << '\n';
    cout << "The modulus of 'x/y' is " << (static_cast<int>(x) % static_cast<int>(y)) << '\n'; // Modulus operation after converting to int, as modulus operator works only with integers. 
    //Bitwise operators in C++
    // Bitwise operators are used to perform bit-level operations on integer types. They operate on individual bits of the operands. The common bitwise operators are AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).
    // Note: Bitwise operators work only with integer types. If you try to use them with floating-point types (like float or double), you will get a compilation error.
    cout << "The value of (x &= y) is " << (static_cast<int>(x) & static_cast<int>(y)) << '\n'; 
    cout << "The value of (x |= y) is " << (static_cast<int>(x) | static_cast<int>(y)) << '\n';
    cout << "The value of (x ^= y) is " << (static_cast<int>(x) ^ static_cast<int>(y)) << '\n'; 
    cout << "The value of (x >>= 2) is " << (static_cast<int>(x) >> 2) << '\n'; // In Binary, if the value of x is 32 (which is 0010 0000 in binary), then shifting the bits to the right by 2 positions results in 0000 1000 (which is 8 in decimal).
    cout << "The value of x <<= 2 is " << (static_cast<int>(x) << 2) << '\n'; // In Binary, if the value of x is 32 (which is 0010 0000 in binary), then shifting the bits to the left by 2 positions results in 1000 0000 (which is 128 in decimal).
    // Note that you should put bitwise operations and arithmetic operations before increment and decrement operations, as increment and decrement operations increase or decrease value of variable, which may lead to unexpected results.
    cout << "The increment of x by 1 is " << ++x << '\n'; // Increment x by 1
    cout << "The decrement of y by 1 is " << --y << '\n'; // Decrement y by 1
    cout << "The increment of x by 5 is " << (x += 5) << '\n'; // Increment x by 5
    cout << "The decrement of y by 4 is " << (y -= 4) << '\n'; // Decrement y by 5

    

    x += 5;
    y -= 4;
    cout << "Now the value of x is: " << x << '\n';
    cout << "Now the value of y is: " << y << '\n';


    return 0;
}