#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if ('0' <= c && c <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        cout << ('A' <= c && c <= 'Z' ? "IS CAPITAL" : "IS SMALL") << endl;
    }
    return 0;
}