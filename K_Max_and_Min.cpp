#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mn = INT_MAX, mx = INT_MIN;

    int val;
    while (cin >> val)
        mn = min(mn, val), mx = max(mx, val);

    cout << mn << " " << mx << endl;

    return 0;
}