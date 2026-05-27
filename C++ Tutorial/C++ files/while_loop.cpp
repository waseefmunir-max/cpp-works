#include <iostream>
using namespace std;

int main(){

    string name, conf;

    /*
    if (name.empty())
    {
        cout << "Enter your name: ";
        getline(cin, name);
    }
    */

    while (name.empty())
    {
        cout << "Enter your name: ";
        getline(cin, name);
    }
    cout << "Hello, " << name << '\n';

    cout << "Do you want to start the infinite loop (say YES or NO)? : ";
    getline(cin, conf);

    while (conf == "YES" || conf == "yes" || conf == "Yes")
    {
        cout << "Haha! , " << name << "! You are stuck in an infinite loop. ";
    }


    return 0;
}
