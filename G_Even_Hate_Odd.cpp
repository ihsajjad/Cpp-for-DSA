#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            (a[i] % 2) ? odd++ : even++;
        }

        if (n % 2)
            cout << -1 << endl;
        else
            cout << abs(odd - even) / 2 << endl;
        }

    return 0;
}