#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";

    // s.erase(5, 0);
    // s.replace(6, 0, "Bangladesh ");
    // s.insert(5, " Sajjad");

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it;
    }

    return 0;
}