#include <iostream>
using namespace std;

int main(){

    int BasNum[8] = {2, 3, 5, 7, 11, 13, 17, 19};

    cout << sizeof(BasNum) << '\n'; // Each int character = 4 bytes, 8 characters = 4x8 or 32 bytes
    // To find the number of elements in the array, divide the total size of the array by the size of one element
    int ActSize = sizeof(BasNum) / sizeof(BasNum[2]);

    cout << "The array has " << ActSize << " elements." << '\n';

    cout << '\n';

    // Let's display BasNum array in different ways: 

    //1st way: Using for loop when i has a fixed condition (i < 8), which only works for arrays of a specified size
    cout << "Basic numbers till 20; \n";
    for (int i = 0; i < 8; i++)
    {
        cout << BasNum[i] << '\n';
    }

    cout << '\n';
    
    //2nd way: Using for loop with sizeof() function to determine the number of elements in the array, which works for arrays of any size and is more flexible
    cout << "Basic numbers till 20; \n";
    for (int i = 0; i < (sizeof(BasNum)/sizeof(BasNum[0])); i++)
    {
        cout << BasNum[i] << '\n';
    }
    
    cout << '\n';

    //3rd way: Using range-based for-each loop (C++11 and later), which is the most concise and readable way to iterate through all elements in the array
    cout << "Basic numbers till 20; \n";
    for(int BasNums : BasNum)
    {
        cout << BasNums << '\n';
    }

    return 0;
}