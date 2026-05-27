#include <iostream>
using namespace std;
 
int main(){

    for(int i = 1; i <= 20; i++){
        if (i == 5)
        {
            break;
        }
        
        cout << i << '\n';
    }

    cout << '\n';
    
    for(int i = 1; i <= 20; i++){
        if (i % 4 == 0)
        {
            continue; // Skips the multipliers (গুণিতক or 'gunitok')of 4 
        }
        cout << i << '\n';
    }
    

    return 0;
}