#include <iostream>
#include <string>
using namespace std;

int main() {
    
    /*
    Structure of a variable declaration:
    "data_type variable_name = value;"
    
    For example, 'int x = 5;' declares a variable 'x' of type 'int' and assigns it the value 5.
    Here, 'int' is the data type, 'x' is the variable name, and '5' is the value assigned to 'x'.
    
    Variables are used to store data that can be changed during the execution of a program.
    In C++, variables must be declared before they can be used.
    A variable is a named storage location in memory that can hold a value.
    
    The name of the variable should be descriptive and follow certain rules:
    1. It must start with a letter or an underscore (_).
    2. It can contain letters, digits, and underscores.
    3. It cannot contain spaces or special characters (except for underscores).
    4. It cannot be a reserved keyword in C++ (like 'int', 'return', 'if', etc. ).
    5. Variable names are case-sensitive, meaning 'myVariable' and 'myvariable' are considered different variables.
    */

    //------------------------------------------------------------------
    
    /* 
    Variables can be declared and assigned values in two steps:
    1. Declaration: This is where you tell the compiler about the variable's type and name.
    2. Assignment: This is where you give the variable a value.
    int x; //declaration of variable x
    x = 5; //assignment of value 5 to variable x
    
    std::cout << x; // This will print the value of x, which is 5
    */

    //------------------------------------------------------------------

    /*
    In C++, you can also declare and assign a variable in one step, like this:
    
    int x = 5; // declaration and assignment in one step. int is a data type that represents an integer.
    //(Here, 'int' is the type of the variable, and 'x' is the name of the variable.)
    int y = 6; // another variable declaration and assignment
    int sum = x + y; // sum of x and y

    std::cout << x << '\n'; // This will print the value of x followed by a new line
    std::cout << y << '\n'; // This will print the value of y followed by a new line
    std::cout << sum << '\n'; // This will print the value of sum followed by a new line.
    */

    //------------------------------------------------------------------

    //Integers store whole numbers, like 1, 2, 3, etc. Variables of type 'int' can hold these values.
    int age = 21;
    int year = 2025;
    int days = 7.6;
    int a = 5;
    a = 6;
    int b = 6;
    int sum  = a + b;
    std::cout << a << '\n';
    std::cout << sum << '\n';

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n'; // This was supposed to print the value of days, which is 7.5, but it will be truncated to 7 because 'int' cannot hold decimal values. It won't show the decimal part.


    //double is a data type that can hold decimal numbers, like 7.5, 3.14, etc. Decimal portions will not be truncated.
    double price = 10.99;
    double temperature = 30.5;
    double gpa = 3.75;

    std::cout << price << '\n';
    std::cout << temperature << '\n';
    std::cout << gpa << '\n';
    //float is another data type that can hold decimal numbers, but it has less precision than double. It is often used when you need to save memory and don't need very precise values.


    //char is a data type that can hold a single character, like 'a', 'b', 'A', 'b', '1', '#', '$' etc. Also the value has to be enclosed in single quotes. Notice that char can only hold one character at a time, so if you want to store multiple characters, you should use a string instead. Strings will be described later in this file.
    //For example, 'char letter = 'A';' is valid, but 'char letter = 'AB';' is not valid because it tries to assign two characters to a single char variable.
    char grade = 'A';
    char initial = 'b';
    /*char initial = 'ab'; This is incorrect because 'initial' is declared as a char, which can only hold one character. It should be declared as a string if you want to hold multiple characters. 
    The output will come up with an error and show only the last character 'b' because the first character 'a' is ignored.*/
    char dollar = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << dollar << '\n';


    //bool is a data type that can hold only two values: true or false. It is often used for conditions and logical operations.
    bool student = true; // This variable indicates whether someone is a student or not.
    bool power = false; // This variable indicates whether a device is powered on or off.
    bool forSale = true; // This variable indicates whether an item is for sale or not.
    bool breakfast = true; // This variable indicates (let's say) whether I have taken breakfast or not.


    //string is technically an object that represents a sequence of text, but it is often used like a data type. It can hold multiple characters, like words or sentences. Strings are enclosed in double quotes, like "Hello, World!". 
    std::string username = "Rayhan";
    std::string day = "Thursday";
    std::string food = "Burger";
    std::string address = "Uttara, Dhaka";
    std::string hobby = "Reading Books";

    std::cout << "Hello!  My name is " << username << '\n';
    std::cout << "I'm " << age << " years old" << '\n';
    std::cout << "In the last exam, I got a CGPA of " << gpa << '\n';
    std::cout << "I live in " << address << '\n';
    std::cout << "My hobby is " << hobby << '\n';


    string name_1 = "Waseef";
    int age_1 = 20;
    double height = 1.62;

    cout << "I'm " << name_1 << " and I'm " << age_1 << " years old. My height is " << height << " meters" << '\n';

    //int x = 5, y = 6, z = 7;
    //cout << x + y + z << '\n';

    int x, y, z;
    x = y = z = 50;
    cout << x + y + z << '\n';

    double tenp = 12e4;
    double tenP = 12E4;

    cout << tenp << '\n';
    cout << tenP << '\n' << '\n';

    bool codeFun = true;
    bool eggplantTasty = false;

    cout << "The results below will be either in 1 or 0. \n";
    cout << "1 indicates truth, 0 indicates false. \n";
    cout << "Is coding fun? Answer: " << codeFun << '\n';
    cout << "Is eggplant tasty? Answer: " << eggplantTasty << '\n';

    char first_letter = 'A', sec_letter = 'B';
    cout << first_letter << '\n';
    cout << sec_letter << '\n';

    char ascii_A = 65, ascii_B = 66, ascii_C = 67;
    cout << ascii_A << '\n';
    cout << ascii_B << '\n';
    cout << ascii_C << '\n';

    cout << "Complete list of ASCII Characters: https://www.w3schools.com/charsets/ref_html_ascii.asp \n\n";


    string NamE;
    string AddRess;

    
    cout << "Your address (PS and District only): ";
    getline(cin >> ws, AddRess);
    cout << "Your name: ";
    getline(cin >> ws, NamE);
    

    cout << "Your name is " << NamE << '\n';
    cout << "You live in " << AddRess << '\n';



    return 0;
}
