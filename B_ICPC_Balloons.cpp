#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        string s;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (s.find(c) == string::npos)
            {
                cnt += 2;
                s.push_back(c);
            }
            else
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}