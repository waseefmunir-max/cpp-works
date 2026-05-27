#include <iostream>

namespace first{
    int x = 1; //This will not conflict with the 'x' in the global namespace.
}
namespace second{
    int x = 2; //This will not conflict with the 'x' in the global namespace either.
}

//Entites can have the same name in different namespaces.
// The global namespace is the default namespace where all entities are defined if no other namespace is specified.

int main() {

    // Namespaces = provides a solution to the problem of name conflicts in large projects.
    //              Each entity (class, function, variable) needs a unique name.
    //              A namespace allows for identically named entities as long as the namespaces are different.
    // int x = 0;
    // int x = 1; // This will cause a compilation error because 'x' is defined twice in the same scope.
    using namespace second; // This brings all entities from the 'first' namespace into the current scope, but it won't work if any value is declared in the global namespace with the same name.
    // If we add 'second' prefix to 'x', it will access the 'x' from the 'second' namespace and will ignore the declation 'using namespace first;'.
    //'using namespace second;' would bring all entities from the 'second' namespace into the current scope.
    
    std::cout << first::x << '\n'; // Accessing the 'x' from the global namespace.;
    //std::cout << first::x; // Accessing the 'x' from the 'first' namespace.
    //std::cout << x; // Accessing the 'x' from the global namespace.
    //std::cout << ::x; // Accessing the 'x' from the global namespace explicitly.
    //std::cout << second::x; // Accessing the 'x' from the 'second' namespace.

    using namespace std; // This brings all entities from the 'std' namespace into the current scope.
    // When we declared std in 'using namespace std;', we can use 'string' without the 'std::' prefix.

    using std::cout; // This brings only 'cout' from the 'std' namespace into the current scope.
    // We can also use 'using std::cout;' to bring only 'cout' from the 'std' namespace into the current scope.
    using std::string; // This brings only 'string' from the 'std' namespace into the current scope.
    // We can also use 'using std::string;' to bring only 'string' from the 'std' namespace into the current scope.
    
    std::string names = "Wasif"; // Using 'std::string' to declare a string variable.

    cout << names << '\n';
    cout << "Hello!" << '\n';
    cout << "I'm learning C++" << '\n';



    return 0;
}