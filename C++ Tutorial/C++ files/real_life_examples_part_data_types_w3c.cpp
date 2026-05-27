#include <iostream>
using namespace std;

int main() {
    int num = 50;
    double cost = 9.99;
    char currency = '$';
    //double total_cost = 499.5;

    cout << "Number of items: " << num << '\n';
    cout << "Cost per item: " << cost << currency << '\n';
    cout << "Total cost: " << cost * num << currency << '\n';

    return 0;
}