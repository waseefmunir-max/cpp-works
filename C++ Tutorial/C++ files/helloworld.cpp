#include <iostream>
using namespace std;
    //To write a comment in C++, you can use // for single-line comments or * ... */ for multi-line comments.
    /*This
    is a 
    multi-line
    comment*/
    //<iostram> is a header file that contains definitions for input and output stream objects.

    //main function is the entry point of a C++ program.

int main(){
    cout << "I like pizza!" << std::endl;
    cout << "It's really good!" << '\n';
    cout << 100 << endl;
    cout << 8 * 2 << endl;
    cout << "Hello World \n\n";
    cout << "I'm learning C++" << endl;   
    cout << "I'm learning C++" << endl;   
    cout << "I'm learning C++" << endl; 
    
    cout << "C++ is a mid-level language \t";
    cout << "C++ is fun to learn!" << '\t';
    cout << "This line will have horizontal tabs \n";
    
    cout << "You can call me \"Waseef\" \n";
    cout << "They named the cat \"Precious\" \n";

    cout << "In windows, \\ is used in indicating locations in PC \n";
    cout << "The file is located in - C:\\Users\\Wasif\\Desktop\\C++_Course \n";

    //semicolon is like full stop in a sentence, it indicates the end of a statement.
    //'std::cout' altogether means standard character output stream.
    //'\n' and 'std::endl' are used to insert a new line in the output.
    //std::endl also flushes the output buffer, ensuring that all output is written to the console immediately.
    //'\n' has to be put inside single quotes, while 'std::endl' is used without quotes as it is a manipulator function.
    //'std::endl' can also be put inside single quotes, but it is not common practice.
    //You have to put "" around the text you want to print, like "I like pizza!". But for printing variables, you can just use the variable name without quotes.
    return 0; /*if return is 0, it indicates successful execution of the program. but if return is non-zero, it indicates an error or abnormal termination.*/
}