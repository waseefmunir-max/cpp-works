#include <iostream>
#include <vector>
// Notice that you MUST mention the header file <vector> to use tyoedefs and type aliases with vectors. Let's skip the vector part for now and see some basic examples of typedefs and type aliases in C++.
//typedef std::string name_t;
//typedef int number_t;

//using name_t = std::string;
//using number_t = int;
// The above lines create type aliases for std::string and int, respectively. 
// 'name_t' is now an alias for std::string and 'number_t' is an alias for int.//

//typedef std::string myname;
//typedef int age;
//typedef double temp;
//typedef std::string city;
// Instead of using typedef, we can use type aliases with the 'using' keyword, which is more modern and flexible.

using myname = std::string;
using age = int;
using temp = double;
using city = std::string;
// And the output will be the same as before.


int main(){

    // Typedefs and type aliases in C++
    // Typedefs are reserved keywords in C++ that allow you to create an alias for a type. New identifiers can be created using the `typedef` keyword and it helps in reducing complexity in code and providing better readability.

    //name_t yourName = "Waseef";
    //number_t age = 20;

    //std::cout << yourName << '\n'; // This will print the value of yourName, which is "Waseef"
    //std::cout << age << '\n'; // This will print the value of age, which is 20

    // typedef has largely been replaced by type aliases in modern C++ (C++11 and later). Type aliases are created using the `using` keyword, which is more flexible and easier to read.  It works better with templates and can be used to create aliases for more complex types. Its better to use 'using' instead of 'typedef' in modern C++ as its more readable, flexible and more suitable for templates. 
    // Head to line no. 4, 5 and replace typedef with 'using' to see the difference.

    myname name = "Waseef";
    age Age = 20;
    temp temperature = 20.5;
    city location = "Dhaka";

    std::cout << name << '\n'; // This will print the value of name, which is "Waseef"
    std::cout << Age << '\n'; // This will print the value of Age, which is 20
    std::cout << temperature << '\n'; // This will print the value of temperature, which is 20.5
    std::cout << location << '\n'; // This will print the value of location, which is "Dhaka"





    return 0;
}