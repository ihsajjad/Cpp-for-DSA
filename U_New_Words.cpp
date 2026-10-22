#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e = 0, g = 0, y = 0, p = 0, t = 0;

    string s;
    cin >> s;

    for (char c : s)
    {
        if (c == 'e' || c == 'E')
            e++;
        else if (c == 'g' || c == 'G')
            g++;
        else if (c == 'y' || c == 'Y')
            y++;
        else if (c == 'p' || c == 'P')
            p++;
        else if (c == 't' || c == 'T')
            t++;
    }

    cout << min(e, min(g, min(y, min(p, t))));
    return 0;
}