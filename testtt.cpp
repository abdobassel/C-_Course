#include <iostream>
#include <cctype>
using namespace std;

void driverhired()
{
    int age;
    bool hasldriver;
    bool haswasta;

    cout << "your age \n";

    cin >> age;
    cout << "li driver? 1 == yes || 0 == no \n";
    cin >> hasldriver;
    cout << "wasta ? 1 == yes || 0 == no \n";
    cin >> haswasta;

    if (age >= 21 && hasldriver == true || haswasta == true)
    {
        cout << "hired";
    }
    else
    {
        cout << "regicted";
    }
}