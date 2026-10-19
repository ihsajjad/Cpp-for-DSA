#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    char sign, eq;
    cin >> a >> sign >> b >> eq >> c;

    if (sign == '+')
        a + b == c ? cout << "Yes" : cout << a + b;
    else if (sign == '-')
        a - b == c ? cout << "Yes" : cout << a - b;
    else
        a *b == c ? cout << "Yes" : cout << a * b;

    return 0;
}