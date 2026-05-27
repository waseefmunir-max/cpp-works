#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 5; i++){
        cout << i << '\n';
    }

    int sum = 0; //If the value of 'sum' isn't declared, then 'sum = 0' by default
    for (int i = 1; i <= 5; i++) {
        cout << "Before: i=" << i << " (Here, \'i <= 5\' condition is true) "<< " sum=" << sum << "  -> ";
        sum = sum + i; //এই লাইনের অর্থ হলো sum এর মানের সাথে i এর মান যোগ করে sum এর মান আপডেট করা   
        cout << "After: sum=" << sum << '\n';
    }
    cout << "Final: Sum is " << sum << '\n'; // Condition false হওয়ার আগ পর্যন্ত লুপ চলতে থাকবে। Condition false হলে, লুপ থেমে যাবে এবং লুপ থেমে যাওয়ার পর সর্বশেষ 'sum' এর যে মানটি গৃহীত হয়েছে সেই মানটিই লুপ শেষ হওয়ার পর এই লাইনে দেখাবে। 

    cout << '\n';
    cout << '\n';
    
    return 0;
}