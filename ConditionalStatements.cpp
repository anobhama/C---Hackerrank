#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    char words[10][20] = {
        "greater than 9",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };
    if (i > 9 )
        cout << words[0] << endl;
    else
        cout << words[i] << endl;

    return 0;
}
