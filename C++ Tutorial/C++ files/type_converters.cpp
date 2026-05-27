#include <iostream>

int main() {

    // Type conversion in C++
    // Type conversion is the process of converting a value from one data type to another. In C++, this can be done implicitly or explicitly.
    // Implicit conversion is done automatically by the compiler, while explicit conversion is done using casting operators.
    // Explicit conversion is also known as type casting, which allows you to convert a value from one type to another using static_cast, dynamic_cast, const_cast, or reinterpret_cast.
    // Explicit is only applies for integer and floating-point types, while implicit conversion can be applied to any type.

    //double x = (int) 3.14; 

    //std::cout << x << '\n'; // Implicit conversion from double to int, truncating the decimal part

    /*The ASCII Table is showed below:
    // A - 65
    // B - 66
    // C - 67
    // D - 68
    // E - 69
    // F - 70
    // G - 71
    // H - 72
    // I - 73
    // J - 74
    // K - 75
    // L - 76
    // M - 77
    // N - 78
    // O - 79
    // P - 80
    // Q - 81
    // R - 82
    // S - 83
    // T - 84
    // U - 85
    // V - 86
    // W - 87
    // X - 88
    // Y - 89
    // Z - 90
    // a - 97
    // b - 98
    // c - 99
    // d - 100
    // e - 101
    // f - 102
    // g - 103
    // h - 104
    // i - 105
    // j - 106
    // k - 107 
    // l - 108
    // m - 109
    // n - 110
    // o - 111
    // p - 112
    // q - 113
    // r - 114
    // s - 115
    // t - 116
    // u - 117
    // v - 118
    // w - 119
    // x - 120
    // y - 121
    // z - 122
    // 0 - 48
    // 1 - 49
    // 2 - 50
    // 3 - 51
    // 4 - 52
    // 5 - 53
    // 6 - 54
    // 7 - 55
    // 8 - 56
    // 9 - 57
    */

    //char x  = 100;

    //std::cout << x << '\n'; // Implicit conversion from int to char, which will print the character 'd' as 100 is the ASCII value for 'd' 

    // We can also write the implicit conversion of previos example in a single line:
    //std::cout << (char) 100 << '\n'; // Implicit conversion from int to char, which will print the character 'd' as 100 is the ASCII value for 'd'

    int obtained = 8; // Example of an obtained score
    int total = 10; // Example of a total score

    double inPercent = (obtained/total) * 100; // Implicit conversion from int to double, which will give a result in percentage
    std::cout << "The obtained score in percentage is: " << inPercent << '\n'; // Output the result
    // The result is 0 because both obtained and total are integers, so the division is performed as integer division, which truncates the decimal part. To get the correct percentage, we need to convert at least one of the operands to double.

    double inPercentCorrected = (double) obtained/total * 100; // Explicit conversion from int to double, which will give a correct result in percentage
    std::cout << "The obtained score in percentage is: " << inPercentCorrected << '\n'; // Output the corrected result
    // It doesn't matter where you put '(double)', before 'obtained' or 'total', or after 'obtained' or 'total', the result will be the same as long as at least one of them is converted to double
    

    return  0;
}