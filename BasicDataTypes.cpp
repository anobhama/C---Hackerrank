"""
Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
"""
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl
         << b << endl
         << c << endl;

    printf("%.3f\n", d);
    printf("%.9lf\n", e);
    return 0;
}