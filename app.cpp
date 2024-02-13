#include <iostream>
using namespace std;
int main()
{

    float fl = 10.1;
    cout << sizeof(fl) << endl; // 4 اصغر حجما

    double db = 100.1;
    cout << sizeof(db) << endl; // 8 bt من الدبل

    // test #lesson 20
    char character;
    int Askinum;
    cin >> character;

    cout << " your character equal numaski " << int(character) << endl;

    cin >> Askinum;

    cout << " your num equal char " << char(Askinum) << endl;

    return 0;
}
// hello bassel
