#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string name = "ElZeRo";

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

    return 0;
}
// hello bassel
