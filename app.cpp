#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string name = "ElZeRo";

    for (int ch = 0; ch < 6; ch++)
    {
        if (char(isupper(name[ch])))
        {

            cout << char(tolower(name[ch])) << "\n";
        }
        else
        {
            cout << char(toupper(name[ch])) << "\n";
        }
    }

    return 0;
}
// hello bassel
