#include <iostream>
#include <string>
using namespace std;

int main() {

    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "It's Sunday";
        break;
    case 2:
        cout << "It's Monday";
        break;
    case 3:
        cout << "It's Tuesday";
        break;
    case 4:
        cout << "It's Wednesday";
        break;
    case 5:
        cout << "It's Thursday";
        break;
    case 6:
        cout << "It's Friday";
        break;
    case 7:
        cout << "It's Saturday";
        break;
    default:
        cout << "Please enter your day number correctly.";
        break;
    }

    cout << '\n';

    string district;
    cout << "Enter your district (divisional only): ";
    getline(cin >> ws, district);

    if (district == "Dhaka" || district == "dhaka")
    {
        cout << "Hello, Dhaka bashi!";
    }

    else if (district == "Chittagong" || district == "chittagong")
    {
        cout << "Hello, Chatgaiya!";
    }

    else if (district == "Rajshahi" || district == "rajshahi")
    {
        cout << "Hello, Rajshahir amm pagla!";
    }

    else if (district == "Sylhet" || district == "sylhet")
    {
        cout << "Hello, Sylheti!";
    }

    else if (district == "Barishal" || district == "barishal")
    {
        cout << "Hello, Barishailla!";
    }

    else if (district == "Khulna" || district == "khulna")
    {
        cout << "Hello, Khulna bashi!";
    }

    else if (district == "Mymensingh" || district == "mymensingh")
    {
        cout << "Hello, Momishinga!";
    }

    else if (district == "Rangpur" || district == "rangpur")
    {
        cout << "Hello, Rangpur bashi!";
    }
    else{
        cout << "Please enter your district correctly.";
    }

    return 0;
}