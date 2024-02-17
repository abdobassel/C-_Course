#include <iostream>
#include <cctype>
using namespace std;

int add(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num + add(num - 1);
}
int main()
{
    string name = "ElZeRo";
    string nametwospace = "El Ze  R  o";

    cout << tolower(name[0]) << "\n"; // 101 e
    cout << toupper(name[0]) << "\n"; // 69 E
    // without char == result will be aski ==> number

    for (int ch = 0; ch < 6; ch++)
    {
        if (char(isupper(name[ch])))
        {

            cout << char(tolower(name[ch]));
        }
        else
        {
            cout << char(toupper(name[ch]));
        }
    }
    cout << "\n";
    cout << add(5);
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

    return 0;
}

// hello bassel
