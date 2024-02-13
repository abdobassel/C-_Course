#include <iostream>
using namespace std;

int test()
{
    int price = 200;
    // std::cout << 'you can delete std:: after you used namespace std Up';
    cout << "Iam a dragon\n";
    cout << "price is " << price + 150 << "\n";
    cout << "Iam a dragon\n";
    int age;
    cin >> age;
    int age_days = age * 365;
    int age_hours = age_days * 24;
    cout << "age in days is " << age_days << "\n";

    cout << "age hours is " << age_hours << "\n";
    // test اختبار
    // calc numberts of kb and bits from input mega
    int megas;
    cin >> megas;

    cout << 'num is ' << megas << "\n";

    double kbyte = 1024 * megas;
    double bits = kbyte * 1024;
    cout << "your mega num equal " << kbyte << " kb\n";

    cout << megas << " mega equal " << bits << " bits\n";

    cout << INT_MAX;

    return 0;
}