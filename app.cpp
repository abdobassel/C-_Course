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

    string fname;
    string lname;

    cout << "first name ? \n";

    cin >> fname;
    cout << "last name ? \n";
    cin >> lname;

    cout << fname << " " << lname << "\n";

    int num;
    cout << "enter num and get half of num \n";
    cin >> num;

    cout << " half of " << num << " is " << num / 2;

    return 0;
}

// hello bassel
