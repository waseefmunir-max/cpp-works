#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 3; i++) // Try changing the value of 'i' to see the difference.
    {
        cout << "Outer Loop: " << i << '\n';
        for(int j = 1; j <= 4; j++) // Try changing the value of 'i' to see the difference.
        { 
            cout << " Inner Loop: " << j << '\n';
        }
    }
    
    cout << '\n';
    cout << "A simple multiplication table (3x3): \n";
    for(int a = 1; a <= 4; a++){
        for(int b = 1; b <= 3; b++)
        {
            cout << a * b << ' ';
        }
        cout << '\n';
    }

    return 0;
}