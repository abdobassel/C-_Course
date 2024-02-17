#include <iostream>
#include <math.h>
#include <cmath>

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

    cout << "enter any 3 nums \n";
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cout << "your avrg " << n1 << n2 << n3;

    int sum = n1 + n2 + n3;
    int avrg = sum / 3;

    cout << " equal " << avrg;

    if (avrg <= 50)
    {
        cout << "PAss";
    }
    else
    {
        cout << "Fail";
    }
    float pi = 3.14;

    int b;
    cout << "enter num to 3.14 * num *num = circle area"
         << "\n";

    cin >> b;

    // double area = pi * (b * b);
    // double area = (pi * b * b) / 4; // all r circle
    double area = (b * b) / (4 * pi); // محيط الدايرة = b

    cout << " مساحة الدايرة تساوي " << area << "\n";

    int numo;
    cin >> numo;

    for (int i = 1; i < numo + 1; i++)
    {
        cout << i << "\n";
    }

    return 0;
}

// hello bassel
