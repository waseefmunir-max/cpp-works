#include <iostream>
using namespace std;

int main(){

    cout << "The characters in decimals are shown below: " << '\n';
    for (int i = 0; i < 10; i++)
    {
        if (i == 3) // Stops executing the code when the value is equal to '3'
        {
            break;
        }
        
        cout << i <<'\n';
    }

    cout << "Once again: \n";
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 3) // Only skips the value '3', rest part of the code is executed
        {
            continue;
        }
        
        cout << i <<'\n';
    }

    cout << '\n';
    cout << "Using break/continue in \'while\' loops: \n";

    int j = 0;
    while (j < 10)
    {
        if (j == 3) // It doesn't matter where you put the break/continue statement in the loop (while/for), it will work the same way.
        {
            break;
        }
        //cout << j << '\n';
        cout << j;
        j++;
        cout << '\n'; // Line 35 and 38 executes same output

        /*
        if (j == 3)
        {
            break; 
        } - Output will be same as above
        */
    }

    cout << '\n';
    cout << '\n';
    
    j = 0; // Resetting j to 0 for the next loop
    while (j < 10)
    {
        if (j == 3)
        {
            j++; // Increment of j before continue, otherwise it will result in an infinite loop because j will always be 3
            continue;
        }
        //cout << j << '\n';
        cout << j;
        j++;
        cout << '\n';

        /* 
        if (j == 3)
        {
            continue; 
        } - Output will be same as above 
        */
    }
    
    

    return 0;
}