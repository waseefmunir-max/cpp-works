#include <iostream>
using namespace std;

int main(){

    bool login, admin;
    int SecLevel;
    
    cout << "Do you want to login? (1 = Yes, 0 = No): ";
    cin >> login;
        if (login == 1)
        {
            login = true;
            cout << "Are you an admin? (1/0): ";
            cin >> admin;
                if (admin == 1)
                {
                    admin = true;
                    cout << "Access granted. Welcome.\n";
                }
                else if (admin == 0)
                {
                    admin = false;
                    cout << "Enter the security level for access: ";
                    cin >> SecLevel;
                        if (SecLevel >= 1 && SecLevel <= 2)
                        {
                            cout << "Access granted. Welcome.\n";
                        }
                        else
                        {
                            cout << "Access denied. Please try again later.\n";
                        }
                }
                else
                {
                    while (admin != 1 && admin != 0)
                    {
                        cout << "Please enter a valid choice: ";
                        cin >> admin;
                    }
                }     
        }
        else if (login == 0)
        {
            cout << "Shutting down the program..........\n";
            cout << "The program has been shut down.\n";
        }
        else 
        {
            cout << "Please enter a number only from 1 or 0: ";
            cin >> login;
        }
        
        

    return 0;
}