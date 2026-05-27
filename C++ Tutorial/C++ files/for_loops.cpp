#include <iostream>
using namespace std;

int main(){

    //'for loops' are used when we need to repeat a code for a certain amount of time

    //for(int i = 0; i <= 10; i+=2){ //i++ means the value of i ('i' is a variable name) will increase by 1, i+=2 means increment by 2. i-- means the value of i will increase by 1, i-=2 means decrement by 2.
    for(int i = 10; i >= 0; i-=2){ 
        cout << i << '\n';
    }
    cout << "Happy Birthday!\n";

    return 0;
}