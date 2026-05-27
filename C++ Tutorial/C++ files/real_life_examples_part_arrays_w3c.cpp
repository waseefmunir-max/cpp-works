#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    int age[5] = {20, 25, 18, 27, 30};

    for (int ages : age)
    {
        //sum = sum + ages;
        sum += ages; // same as sum = sum + ages;
    }

    int size = sizeof(age)/sizeof(age[0]);
    int avg = sum / size;
    
    cout << "The average age is: " << avg << " years" << '\n';

    cout << '\n';

    int age2[5] = {20, 19, 18, 27, 30};
    int LowestAge = age2[0];
    for(int AgeCheck : age2)
    {
        if (LowestAge > AgeCheck)
        {
            cout << "When LowestAge = " << LowestAge << ", AgeCheck (or age2) = " << AgeCheck << ". " << " Condition (1-true, 0-false): " << (LowestAge > AgeCheck) << '\n';
            LowestAge = AgeCheck;
            cout << "Now, the value of LowestAge is " << LowestAge << '\n';
        }
    }
    cout << "The lowest age is: " << LowestAge << '\n';

    return 0;
}