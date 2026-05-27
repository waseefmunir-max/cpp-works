#include <iostream>
using namespace std;

int main() {
    std::string name;
    int age;
    
    std::cout << "What's your age? ";
    std::cin >> age;
    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, name); // যেই লাইনে ইনপুট দিতে পারছিনা, সেই লাইনের কোডে 'std::ws' বসবে। আর 'std::ws' বসানোর আগে অবশ্যই '>>' বা '<<' ব্যবহার করতে হবে।  
    /*
    std::cout << "What's your age? ";
    std::cin >> age;
    std::cout << "What's your full name? ";
    std::getline(std::cin, name);
    // If I put 'age' before 'name' like this, I will only be able to enter the age, not the name.
    // To fix this, use 'std::ws' following '<<' or '>>' (<< for cout and >> for cin). It removes the whitespaces which is stopping me to enter my next input (name).
    */
    //'std::getline' allows to create spaces in input. 
    //'std::ws' is used to remove whitespaces.   
    

    std::cout << "Your name is: " << name << '\n';
    std::cout << "You're " << age << " years old" << '\n';

    

    return 0;
}