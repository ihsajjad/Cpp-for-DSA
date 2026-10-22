#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int first_sum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int last_sum = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

        cout << (first_sum == last_sum ? "YES" : "NO") << endl;
    }

    return 0;
}