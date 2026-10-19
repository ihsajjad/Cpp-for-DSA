#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt_A = 0, cnt_D;
    cin >> n;

    while (n--)
    {
        char c;
        cin >> c;
        c == 'A' ? cnt_A++ : cnt_D++;
    }

    cout << (cnt_A > cnt_D ? "Anton" : cnt_D > cnt_A ? "Danik"
                                                     : "Friendship")
         << endl;

    return 0;
}