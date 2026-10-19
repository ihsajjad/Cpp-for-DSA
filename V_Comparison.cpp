#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;

    if (c == '>')
        cout << (a > b ? "Right" : "Wrong");
    else if (c == '<')
        cout << (a < b ? "Right" : "Wrong");
    else
        cout << (a == b ? "Right" : "Wrong");

    return 0;
}