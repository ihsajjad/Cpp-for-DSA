#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < max(a.size(), b.size()); i++)
        {
            if (i < a.size())
                cout << a[i];
            if (i < b.size())
                cout << b[i];
        }
        cout << endl;
    }

    return 0;
}